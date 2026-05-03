#include "global.h"
#include "main.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "palette.h"
#include "task.h"
#include "sprite.h"
#include "decompress.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "overworld.h"
#include "sound.h"
#include "seagallop.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/map_groups.h"
#include "constants/maps.h"
#include "constants/songs.h"
#include "constants/rgb.h"

// Westbound-only Seagallop Ferries port.
// The submarine sprite drifts right-to-left across a scrolling background while
// the screen is letterboxed, then fades out and warps to the destination that
// was set via SetWarpDestinationToHealLocation before StartSeagallopScene was
// called. On arrival, FieldCallback_CustomFlyIntoMap runs the inbound transition.

#define SCENE_DURATION_FRAMES  140
#define FERRY_START_X          240
#define FERRY_Y                 80
#define FERRY_DRIFT_SPEED      -32   // signed; negative = leftward

static EWRAM_DATA void *sBg3TilemapBuffer = NULL;

static const u32 sWaterTiles[]   = INCBIN_U32("graphics/seagallop/water.4bpp");
static const u16 sWaterPal[]     = INCBIN_U16("graphics/seagallop/water.gbapal");
static const u32 sWaterTilemap[] = INCBIN_U32("graphics/seagallop/bg_tilemap.bin");

static const struct BgTemplate sBgTemplates[] = {
    {
        .bg            = 0,
        .charBaseIndex = 0,
        .mapBaseIndex  = 31,
        .screenSize    = 0,
        .paletteMode   = 0,
        .priority      = 0,
        .baseTile      = 0,
    },
    {
        .bg            = 3,
        .charBaseIndex = 3,
        .mapBaseIndex  = 30,
        .screenSize    = 0,
        .paletteMode   = 0,
        .priority      = 3,
        .baseTile      = 0,
    },
};

static void CB2_SetUpSeagallopScene(void);
static void MainCB2_SeaGallop(void);
static void VBlankCB_SeaGallop(void);
static void Task_Seagallop_0(u8 taskId);
static void Task_Seagallop_1(u8 taskId);
static void Task_Seagallop_2(u8 taskId);
static void Task_Seagallop_3(void);
static void ScrollBG(void);
static void CreateFerrySprite(void);
static void SpriteCB_Ferry(struct Sprite *sprite);

void StartSeagallopScene(void)
{
    Overworld_ResetStateAfterFly();
    SetMainCallback2(CB2_SetUpSeagallopScene);
    gMain.state = 0;
}

void Special_SeagallopToRoute101(void)
{
    SetWarpDestination(MAP_GROUP(MAP_ROUTE101), MAP_NUM(MAP_ROUTE101), WARP_ID_NONE, 33, 15);
    StartSeagallopScene();
}


static void CB2_SetUpSeagallopScene(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        DmaClear32(3, (void *)OAM, OAM_SIZE);
        DmaClear16(3, (void *)PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG0CNT, 0);
        SetGpuReg(REG_OFFSET_BG1CNT, 0);
        SetGpuReg(REG_OFFSET_BG2CNT, 0);
        SetGpuReg(REG_OFFSET_BG3CNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        gMain.state++;
        break;

    case 1:
        ResetPaletteFade();
        ResetSpriteData();
        FreeSpriteTileRanges();
        FreeAllSpritePalettes();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        sBg3TilemapBuffer = AllocZeroed(0x800);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
        SetBgTilemapBuffer(3, sBg3TilemapBuffer);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(3, sWaterTiles, sizeof(sWaterTiles), 0);
        CopyToBgTilemapBufferRect(3, sWaterTilemap, 0, 0, 32, 32);
        LoadPalette(sWaterPal, BG_PLTT_ID(4), sizeof(sWaterPal));
        gMain.state++;
        break;
    case 4:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            ShowBg(3);
            CopyBgTilemapBufferToVram(3);
            gMain.state++;
        }
        break;
    case 5:
        if (IsDma3ManagerBusyWithBgCopy())
            break;
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        TransferPlttBuffer();
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG3_ON | DISPCNT_OBJ_ON);
        // Letterbox via WIN0: show BG3 + OBJ in a horizontal band, black outside.
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WININ,  WININ_WIN0_BG3 | WININ_WIN0_OBJ | WININ_WIN0_CLR);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_WIN0H,  WIN_RANGE(0, DISPLAY_WIDTH));
        SetGpuReg(REG_OFFSET_WIN0V,  WIN_RANGE(20, 140)); //DISPLAY_HEIGHT / 4, DISPLAY_HEIGHT - DISPLAY_HEIGHT / 4
        SetVBlankCallback(VBlankCB_SeaGallop);
        PlaySE(SE_SHIP);
        CreateFerrySprite();
        CreateTask(Task_Seagallop_0, 8);
        SetMainCallback2(MainCB2_SeaGallop);
        gMain.state = 0;
        break;
    }
}

static void VBlankCB_SeaGallop(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void MainCB2_SeaGallop(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void ScrollBG(void)
{
    // Westbound: water scrolls right (tiles move left-to-right beneath a fixed viewport,
    // i.e. the camera moves leftward through the world).
    ChangeBgX(3, 0x600, BG_COORD_SUB);
}

static void Task_Seagallop_0(u8 taskId)
{
    gTasks[taskId].func = Task_Seagallop_1;
}

static void Task_Seagallop_1(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    ScrollBG();
    if (++task->data[1] == SCENE_DURATION_FRAMES)
    {
        Overworld_FadeOutMapMusic();
        WarpFadeOutScreen();
        task->func = Task_Seagallop_2;
    }
}

static void Task_Seagallop_2(u8 taskId)
{
    ScrollBG();
    if (BGMusicStopped() && !gPaletteFade.active)
    {
        Task_Seagallop_3();
        DestroyTask(taskId);
    }
}

static void Task_Seagallop_3(void)
{
    PlayRainStoppingSoundEffect();
    PlaySE(SE_EXIT);
    gFieldCallback = FieldCallback_CustomFlyIntoMap;
    WarpIntoMap();
    SetMainCallback2(CB2_LoadMap);
    TRY_FREE_AND_SET_NULL(sBg3TilemapBuffer);
}

static void CreateFerrySprite(void)
{
    u8 spriteId = CreateObjectGraphicsSprite(OBJ_EVENT_GFX_SUBMARINE_SHADOW,
                                             SpriteCallbackDummy,
                                             FERRY_START_X, FERRY_Y, 0);
    if (spriteId == MAX_SPRITES)
        return;

    gSprites[spriteId].coordOffsetEnabled = FALSE;
    gSprites[spriteId].oam.priority = 2;
    gSprites[spriteId].data[0] = FERRY_DRIFT_SPEED;
    gSprites[spriteId].callback = SpriteCB_Ferry;
    StartSpriteAnim(&gSprites[spriteId], ANIM_STD_GO_WEST);
}

static void SpriteCB_Ferry(struct Sprite *sprite)
{
    sprite->data[1] += sprite->data[0];
    sprite->x2 = sprite->data[1] >> 4;
    if ((s16)(sprite->x + sprite->x2) < -100)
        DestroySprite(sprite);
}
