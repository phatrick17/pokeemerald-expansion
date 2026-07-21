#include "global.h"
#include "bg.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "list_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "wes_emails.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "data/wes_emails.h"

enum
{
    WIN_TITLE,
    WIN_LIST,
    WIN_COUNT,
};

#define MAX_EMAILS_SHOWN   7
#define BORDER_BASE_TILE   0x214
#define BORDER_PALETTE     14

#define TAG_EMAIL_SCROLL_ARROWS 110

struct WesEmailsScreen
{
    void (*exitCallback)(void);
    struct ListMenuItem listItems[WES_EMAIL_INBOX_CAPACITY + 1]; // + Cancel
    u8 inbox[WES_EMAIL_INBOX_CAPACITY]; // validated email IDs, receive order
    u16 count;
    u8 listTaskId;
    u8 arrowTaskId;
    u16 scrollOffset;
    u16 selectedRow;
    u8 readerHeaderWindowId;
    u8 readerBodyWindowId;
};

static EWRAM_DATA struct WesEmailsScreen *sEmailScreen = NULL;

static void CB2_InitWesEmails(void);
static void MainCB2(void);
static void Task_EmailScreenFadeIn(u8);
static void Task_EmailListInput(u8);
static void Task_EmailReaderInput(u8);
static void Task_ExitEmailScreen(u8);
static void DrawEmailList(void);
static void OpenEmailReader(u16 emailId);
static void CloseEmailReader(void);

static const struct BgTemplate sBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
};

static const struct WindowTemplate sWindowTemplates[WIN_COUNT + 1] =
{
    [WIN_TITLE] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 12,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x1,
    },
    [WIN_LIST] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 4,
        .width = 26,
        .height = 14,
        .paletteNum = 15,
        .baseBlock = 0x20,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sReaderHeaderWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x20,
};

static const struct WindowTemplate sReaderBodyWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 7,
    .width = 28,
    .height = 12,
    .paletteNum = 15,
    .baseBlock = 0xA0,
};

static const u8 sTextColors[] = {TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};

static const u8 sText_WesEmails[] = _("WES' EMAILS");
static const u8 sText_From[] = _("FROM: ");

u32 GetWesEmailInboxCount(void)
{
    if (gSaveBlock3Ptr->wesEmailCount > WES_EMAIL_INBOX_CAPACITY)
        return 0; // garbage from a save made before the inbox existed
    return gSaveBlock3Ptr->wesEmailCount;
}

bool32 GiveWesEmail(u16 emailId)
{
    u32 i, count = GetWesEmailInboxCount();

    if (emailId == EMAIL_NONE || emailId >= NUM_WES_EMAILS)
        return FALSE;
    if (count >= WES_EMAIL_INBOX_CAPACITY)
        return FALSE;
    for (i = 0; i < count; i++)
    {
        if (gSaveBlock3Ptr->wesEmailInbox[i] == emailId)
            return FALSE;
    }
    gSaveBlock3Ptr->wesEmailInbox[count] = emailId;
    gSaveBlock3Ptr->wesEmailCount = count + 1;
    return TRUE;
}

// Scripting special. Receives the email ID in VAR_0x8004,
// returns whether the email was added in VAR_RESULT.
void ReceiveEmail(void)
{
    gSpecialVar_Result = GiveWesEmail(gSpecialVar_0x8004);
}

void ShowWesEmails(void (*exitCallback)(void))
{
    sEmailScreen = AllocZeroed(sizeof(*sEmailScreen));
    if (sEmailScreen == NULL)
    {
        SetMainCallback2(exitCallback);
        return;
    }
    sEmailScreen->exitCallback = exitCallback;
    sEmailScreen->readerHeaderWindowId = WINDOW_NONE;
    sEmailScreen->readerBodyWindowId = WINDOW_NONE;
    sEmailScreen->arrowTaskId = TASK_NONE;
    SetMainCallback2(CB2_InitWesEmails);
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_InitWesEmails(void)
{
    u32 i, count;

    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(WIN_LIST, BORDER_BASE_TILE, BG_PLTT_ID(BORDER_PALETTE));
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);

    // Build the list of received emails, skipping any invalid IDs
    count = GetWesEmailInboxCount();
    sEmailScreen->count = 0;
    for (i = 0; i < count; i++)
    {
        u8 emailId = gSaveBlock3Ptr->wesEmailInbox[i];
        if (emailId > EMAIL_NONE && emailId < NUM_WES_EMAILS)
            sEmailScreen->inbox[sEmailScreen->count++] = emailId;
    }
    for (i = 0; i < sEmailScreen->count; i++)
    {
        sEmailScreen->listItems[i].name = gWesEmails[sEmailScreen->inbox[i]].subject;
        sEmailScreen->listItems[i].id = sEmailScreen->inbox[i];
    }
    sEmailScreen->listItems[sEmailScreen->count].name = gText_Cancel2;
    sEmailScreen->listItems[sEmailScreen->count].id = LIST_CANCEL;

    DrawEmailList();
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    EnableInterrupts(1);
    SetVBlankCallback(VBlankCB);
    SetMainCallback2(MainCB2);
    CreateTask(Task_EmailScreenFadeIn, 0);
}

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void DrawEmailList(void)
{
    DrawStdFrameWithCustomTileAndPalette(WIN_TITLE, FALSE, BORDER_BASE_TILE, BORDER_PALETTE);
    FillWindowPixelBuffer(WIN_TITLE, PIXEL_FILL(1));
    AddTextPrinterParameterized4(WIN_TITLE, FONT_NORMAL, 0, 1, 0, 0, sTextColors, TEXT_SKIP_DRAW, sText_WesEmails);
    PutWindowTilemap(WIN_TITLE);
    CopyWindowToVram(WIN_TITLE, COPYWIN_FULL);

    DrawStdFrameWithCustomTileAndPalette(WIN_LIST, FALSE, BORDER_BASE_TILE, BORDER_PALETTE);
    gMultiuseListMenuTemplate.items = sEmailScreen->listItems;
    gMultiuseListMenuTemplate.totalItems = sEmailScreen->count + 1;
    gMultiuseListMenuTemplate.windowId = WIN_LIST;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 8;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.maxShowed = MAX_EMAILS_SHOWN;
    gMultiuseListMenuTemplate.upText_Y = 1;
    gMultiuseListMenuTemplate.cursorPal = 2;
    gMultiuseListMenuTemplate.fillValue = 1;
    gMultiuseListMenuTemplate.cursorShadowPal = 3;
    gMultiuseListMenuTemplate.moveCursorFunc = NULL;
    gMultiuseListMenuTemplate.itemPrintFunc = NULL;
    gMultiuseListMenuTemplate.fontId = FONT_NORMAL;
    gMultiuseListMenuTemplate.cursorKind = CURSOR_BLACK_ARROW;
    gMultiuseListMenuTemplate.lettersSpacing = 0;
    gMultiuseListMenuTemplate.itemVerticalPadding = 0;
    gMultiuseListMenuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    sEmailScreen->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sEmailScreen->scrollOffset, sEmailScreen->selectedRow);

    if (sEmailScreen->count + 1 > MAX_EMAILS_SHOWN)
        sEmailScreen->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 120, 24, 150,
            sEmailScreen->count + 1 - MAX_EMAILS_SHOWN, TAG_EMAIL_SCROLL_ARROWS, TAG_EMAIL_SCROLL_ARROWS,
            &sEmailScreen->scrollOffset);
}

static void Task_EmailScreenFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_EmailListInput;
}

static void Task_EmailListInput(u8 taskId)
{
    s32 input = ListMenu_ProcessInput(sEmailScreen->listTaskId);

    ListMenuGetScrollAndRow(sEmailScreen->listTaskId, &sEmailScreen->scrollOffset, &sEmailScreen->selectedRow);
    switch (input)
    {
    case LIST_NOTHING_CHOSEN:
        break;
    case LIST_CANCEL:
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_ExitEmailScreen;
        break;
    default:
        PlaySE(SE_SELECT);
        OpenEmailReader(input);
        gTasks[taskId].func = Task_EmailReaderInput;
        break;
    }
}

static void OpenEmailReader(u16 emailId)
{
    const struct WesEmail *email = &gWesEmails[emailId];

    DestroyListMenuTask(sEmailScreen->listTaskId, &sEmailScreen->scrollOffset, &sEmailScreen->selectedRow);
    if (sEmailScreen->arrowTaskId != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(sEmailScreen->arrowTaskId);
        sEmailScreen->arrowTaskId = TASK_NONE;
    }
    ClearStdWindowAndFrameToTransparent(WIN_TITLE, FALSE);
    ClearWindowTilemap(WIN_TITLE);
    ClearStdWindowAndFrameToTransparent(WIN_LIST, FALSE);
    ClearWindowTilemap(WIN_LIST);

    sEmailScreen->readerHeaderWindowId = AddWindow(&sReaderHeaderWindowTemplate);
    sEmailScreen->readerBodyWindowId = AddWindow(&sReaderBodyWindowTemplate);

    DrawStdFrameWithCustomTileAndPalette(sEmailScreen->readerHeaderWindowId, FALSE, BORDER_BASE_TILE, BORDER_PALETTE);
    FillWindowPixelBuffer(sEmailScreen->readerHeaderWindowId, PIXEL_FILL(1));
    AddTextPrinterParameterized4(sEmailScreen->readerHeaderWindowId, FONT_NORMAL, 0, 1, 0, 0, sTextColors, TEXT_SKIP_DRAW, email->subject);
    StringCopy(gStringVar4, sText_From);
    StringAppend(gStringVar4, email->sender);
    AddTextPrinterParameterized4(sEmailScreen->readerHeaderWindowId, FONT_SMALL, 0, 20, 0, 0, sTextColors, TEXT_SKIP_DRAW, gStringVar4);
    PutWindowTilemap(sEmailScreen->readerHeaderWindowId);
    CopyWindowToVram(sEmailScreen->readerHeaderWindowId, COPYWIN_FULL);

    DrawStdFrameWithCustomTileAndPalette(sEmailScreen->readerBodyWindowId, FALSE, BORDER_BASE_TILE, BORDER_PALETTE);
    FillWindowPixelBuffer(sEmailScreen->readerBodyWindowId, PIXEL_FILL(1));
    AddTextPrinterParameterized4(sEmailScreen->readerBodyWindowId, FONT_NORMAL, 0, 1, 0, 0, sTextColors, TEXT_SKIP_DRAW, email->body);
    PutWindowTilemap(sEmailScreen->readerBodyWindowId);
    CopyWindowToVram(sEmailScreen->readerBodyWindowId, COPYWIN_FULL);
}

static void CloseEmailReader(void)
{
    ClearStdWindowAndFrameToTransparent(sEmailScreen->readerHeaderWindowId, FALSE);
    ClearWindowTilemap(sEmailScreen->readerHeaderWindowId);
    RemoveWindow(sEmailScreen->readerHeaderWindowId);
    sEmailScreen->readerHeaderWindowId = WINDOW_NONE;

    ClearStdWindowAndFrameToTransparent(sEmailScreen->readerBodyWindowId, FALSE);
    ClearWindowTilemap(sEmailScreen->readerBodyWindowId);
    RemoveWindow(sEmailScreen->readerBodyWindowId);
    sEmailScreen->readerBodyWindowId = WINDOW_NONE;

    DrawEmailList();
}

static void Task_EmailReaderInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        CloseEmailReader();
        gTasks[taskId].func = Task_EmailListInput;
    }
}

static void Task_ExitEmailScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        void (*exitCallback)(void) = sEmailScreen->exitCallback;

        DestroyListMenuTask(sEmailScreen->listTaskId, NULL, NULL);
        if (sEmailScreen->arrowTaskId != TASK_NONE)
            RemoveScrollIndicatorArrowPair(sEmailScreen->arrowTaskId);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sEmailScreen);
        DestroyTask(taskId);
        SetMainCallback2(exitCallback);
    }
}
