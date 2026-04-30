#include "global.h"
#include "main.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "bg.h"
#include "palette.h"
#include "decompress.h"
#include "sprite.h"
#include "text.h"
#include "window.h"
#include "menu.h"
#include "text_window.h"
#include "string_util.h"
#include "international_string_util.h"
#include "strings.h"
#include "m4a.h"
#include "overworld.h"
#include "field_effect.h"
#include "party_menu.h"
#include "event_data.h"
#include "region_map.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/region_map_sections.h"
#include "constants/heal_locations.h"

// ==================== Configuration ====================
// Map background image is 256x160 (full GBA screen)
// Using 8bpp (256 color) mode for the background

// Town positions in pixel coordinates on the map image.
// Adjust these to match your actual map's town marker locations.
struct CustomMapTown {
    s16 x;
    s16 y;
    mapsec_u16_t mapSecId;
    u16 healLocationId;
    u16 flag;  // If non-zero, this town can only be selected when this flag is set (0 = always available)
    const u8 *name;
};

// Town name strings (using existing game strings where possible)
// For now we reference GetMapName at runtime

#define NUM_CUSTOM_TOWNS 10

// Pixel positions of the red diamond markers on the custom map image.
// The user should update these to match their actual map.
static const struct CustomMapTown sCustomTowns[NUM_CUSTOM_TOWNS] = {
    { .x =  212, .y =  116, .mapSecId = MAPSEC_ROUTE_101,     .healLocationId = HEAL_LOCATION_RUSTBORO_CITY },
    { .x =  164, .y =  116, .mapSecId = MAPSEC_OLDALE_TOWN,     .healLocationId = HEAL_LOCATION_OLDALE_TOWN, .flag = FLAG_MAP_UNLOCK_PHENAC },
    { .x = 132, .y =  100, .mapSecId = MAPSEC_REALGAM_TOWER,     .healLocationId = HEAL_LOCATION_REALGAM_ENTRACE, .flag = FLAG_MAP_UNLOCK_REALGAM_TEMP },
    { .x =  68, .y =  108, .mapSecId = MAPSEC_Pyrite_Town,        .healLocationId = HEAL_LOCATION_PYRITE_TOWN, .flag = FLAG_MAP_UNLOCK_PYRITE },
    { .x =  72, .y =  96, .mapSecId = MAPSEC_MAUVILLE_CITY,     .healLocationId = HEAL_LOCATION_MAUVILLE_CITY, .flag = FLAG_UNUSED_0x2BB },
    { .x =  56, .y = 128, .mapSecId = MAPSEC_LITTLEROOT_TOWN,   .healLocationId = HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, .flag = FLAG_UNUSED_0x2BB },
    { .x = 104, .y = 128, .mapSecId = MAPSEC_SLATEPORT_CITY,    .healLocationId = HEAL_LOCATION_SLATEPORT_CITY, .flag = FLAG_UNUSED_0x2BB },
    { .x = 128, .y = 128, .mapSecId = MAPSEC_DEWFORD_TOWN,      .healLocationId = HEAL_LOCATION_DEWFORD_TOWN, .flag = FLAG_UNUSED_0x2BB },
    { .x = 168, .y = 128, .mapSecId = MAPSEC_MOSSDEEP_CITY,     .healLocationId = HEAL_LOCATION_MOSSDEEP_CITY, .flag = FLAG_UNUSED_0x2BB },
    { .x = 200, .y = 128, .mapSecId = MAPSEC_SOOTOPOLIS_CITY,   .healLocationId = HEAL_LOCATION_SOOTOPOLIS_CITY, .flag = FLAG_UNUSED_0x2BB },
};

// ==================== Graphics Data ====================
// The user's map image (256x160, 8bpp) and cursor sprite (16x16, 4bpp)
// These are loaded via INCBIN from the graphics/custom_map/ directory.

static const u16 sCustomMapBg_Pal[] = INCBIN_U16("graphics/custom_map/map.gbapal");
static const u32 sCustomMapBg_Gfx[] = INCBIN_U32("graphics/custom_map/map.8bpp.lz");
static const u32 sCustomMapBg_Tilemap[] = INCBIN_U32("graphics/custom_map/map.bin.lz");

static const u16 sCustomMapCursor_Pal[] = INCBIN_U16("graphics/custom_map/cursor.gbapal");
static const u32 sCustomMapCursor_Gfx[] = INCBIN_U32("graphics/custom_map/cursor.4bpp.lz");

// ==================== Sprite Tags ====================
#define TAG_CUSTOM_CURSOR 0x7000

// ==================== State ====================
static EWRAM_DATA struct {
    void (*callback)(void);
    u16 state;
    u8 selectedTown;
    bool8 choseFlyLocation;
    bool8 calledFromScript;
    u8 cursorSpriteId;
} *sCustomMap = NULL;

// ==================== BG Templates ====================
// BG0: Text windows (4bpp)
// BG1: Map image (8bpp)
static const struct BgTemplate sCustomMapBgTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0, // 4bpp for text
        .priority = 0,
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .paletteMode = 1, // 8bpp for 256-color map image
        .priority = 1,
    },
};

// ==================== Window Templates ====================
enum {
    WIN_MAP_INFO,
};

static const struct WindowTemplate sCustomMapWindowTemplates[] = {
    [WIN_MAP_INFO] = {
        .bg = 0,
        .tilemapLeft = 5,
        .tilemapTop = 17,
        .width = 20,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x01,
    },
    DUMMY_WIN_TEMPLATE,
};

// ==================== Cursor Sprite ====================
static const struct OamData sCursorOamData = {
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
};

static const union AnimCmd sCursorAnimCmd[] = {
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END,
};

static const union AnimCmd *const sCursorAnimTable[] = {
    sCursorAnimCmd,
};

static void SpriteCB_CustomCursor(struct Sprite *sprite);

static const struct SpriteTemplate sCursorSpriteTemplate = {
    .tileTag = TAG_CUSTOM_CURSOR,
    .paletteTag = TAG_CUSTOM_CURSOR,
    .oam = &sCursorOamData,
    .anims = sCursorAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CustomCursor,
};

// ==================== Forward Declarations ====================
static void CB2_CustomMap(void);
static void VBlankCB_CustomMap(void);
static void SetCustomMapCallback(void (*callback)(void));
static void CB_FadeInCustomMap(void);
static void CB_HandleCustomMapInput(void);
static void CB_ExitCustomMap(void);
static void UpdateTownNameWindow(void);
static void MoveCursorToTown(u8 townIdx);
static u8 GetInitialSelectedTown(void);

// Returns TRUE if this town is available for selection
static bool8 IsTownAvailable(u8 townIdx)
{
    if (sCustomTowns[townIdx].flag == 0)
        return TRUE;
    return FlagGet(sCustomTowns[townIdx].flag);
}

static u8 GetInitialSelectedTown(void)
{
    mapsec_u16_t currentMapSec = gMapHeader.regionMapSectionId;

    for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
    {
        if (sCustomTowns[i].mapSecId == currentMapSec && IsTownAvailable(i))
            return i;
    }

    for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
    {
        if (IsTownAvailable(i))
            return i;
    }

    return 0;
}


// ==================== Cursor Sprite Callback ====================
// Gentle bounce animation
static void SpriteCB_CustomCursor(struct Sprite *sprite)
{
    // Simple idle pulse - no movement needed since we manually position
}

// ==================== Main Entry Point ====================
void CB2_OpenCustomMap(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2HOFS, 0);
        SetGpuReg(REG_OFFSET_BG2VOFS, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
        sCustomMap = Alloc(sizeof(*sCustomMap));
        if (sCustomMap == NULL)
        {
            SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        }
        else
        {
            ResetPaletteFade();
            ResetSpriteData();
            FreeSpriteTileRanges();
            FreeAllSpritePalettes();
            gMain.state++;
        }
        break;
    case 1:
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sCustomMapBgTemplates, ARRAY_COUNT(sCustomMapBgTemplates));
        gMain.state++;
        break;
    case 2:
        InitWindows(sCustomMapWindowTemplates);
        DeactivateAllTextPrinters();
        gMain.state++;
        break;
    case 3:
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 4:
        // Load map background image
        DecompressAndCopyTileDataToVram(1, sCustomMapBg_Gfx, 0, 0, 0);
        gMain.state++;
        break;
    case 5:
        if (FreeTempTileDataBuffersIfPossible())
            break;
        DecompressAndCopyTileDataToVram(1, sCustomMapBg_Tilemap, 0, 0, 1);
        gMain.state++;
        break;
    case 6:
        if (FreeTempTileDataBuffersIfPossible())
            break;
        LoadPalette(sCustomMapBg_Pal, BG_PLTT_ID(0), sizeof(sCustomMapBg_Pal));
        gMain.state++;
        break;
    case 7:
    {
        // Load cursor sprite
        struct CompressedSpriteSheet sheet = {
            .data = sCustomMapCursor_Gfx,
            .size = 16 * 16 / 2, // 4bpp: 16x16 = 128 bytes
            .tag = TAG_CUSTOM_CURSOR,
        };
        struct SpritePalette pal = {
            .data = sCustomMapCursor_Pal,
            .tag = TAG_CUSTOM_CURSOR,
        };
        LoadCompressedSpriteSheet(&sheet);
        LoadSpritePalette(&pal);

        // Create cursor sprite at current map location when possible.
        sCustomMap->selectedTown = GetInitialSelectedTown();
    
        sCustomMap->cursorSpriteId = CreateSprite(
            &sCursorSpriteTemplate,
            sCustomTowns[sCustomMap->selectedTown].x,
            sCustomTowns[sCustomMap->selectedTown].y,
            0
        );
        gMain.state++;
        break;
    }
    case 8:
        // Load window border AFTER map palette so it doesn't get overwritten
        // The 8bpp map palette fills palettes 0-15; we must reload 13 (border) and 15 (text)
        LoadUserWindowBorderGfx(0, 0x65, BG_PLTT_ID(13));
        LoadPalette(GetTextWindowPalette(0), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        // Draw initial town name in centered window
        UpdateTownNameWindow();
        ScheduleBgCopyTilemapToVram(0);
        gMain.state++;
        break;
    case 9:
        BlendPalettes(PALETTES_ALL, 16, 0);
        SetVBlankCallback(VBlankCB_CustomMap);
        gMain.state++;
        break;
    case 10:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        ShowBg(0);
        ShowBg(1);
        SetCustomMapCallback(CB_FadeInCustomMap);
        SetMainCallback2(CB2_CustomMap);
        break;
    }
}

// ==================== Core Loop ====================
static void VBlankCB_CustomMap(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_CustomMap(void)
{
    sCustomMap->callback();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
}

static void SetCustomMapCallback(void (*callback)(void))
{
    sCustomMap->callback = callback;
    sCustomMap->state = 0;
}

// ==================== Callbacks ====================
static void CB_FadeInCustomMap(void)
{
    switch (sCustomMap->state)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        sCustomMap->state++;
        break;
    case 1:
        if (!UpdatePaletteFade())
            SetCustomMapCallback(CB_HandleCustomMapInput);
        break;
    }
}

static void CB_HandleCustomMapInput(void)
{
    if (sCustomMap->state != 0)
        return;

    if (JOY_NEW(DPAD_LEFT))
    {
        // Move to next available town
        u8 next = sCustomMap->selectedTown;
        for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
        {
            next = (next + 1) % NUM_CUSTOM_TOWNS;
            if (IsTownAvailable(next))
                break;
        }
        if (next != sCustomMap->selectedTown)
        {
            sCustomMap->selectedTown = next;
            MoveCursorToTown(next);
            UpdateTownNameWindow();
            m4aSongNumStart(SE_DEX_SCROLL);
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        // Move to previous available town
        u8 prev = sCustomMap->selectedTown;
        for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
        {
            prev = (prev == 0) ? NUM_CUSTOM_TOWNS - 1 : prev - 1;
            if (IsTownAvailable(prev))
                break;
        }
        if (prev != sCustomMap->selectedTown)
        {
            sCustomMap->selectedTown = prev;
            MoveCursorToTown(prev);
            UpdateTownNameWindow();
            m4aSongNumStart(SE_DEX_SCROLL);
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        // Find the nearest available town above current position
        s16 curX = sCustomTowns[sCustomMap->selectedTown].x;
        s16 curY = sCustomTowns[sCustomMap->selectedTown].y;
        s32 bestDist = 0x7FFFFFFF;
        u8 bestIdx = sCustomMap->selectedTown;

        for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
        {
            if (i == sCustomMap->selectedTown || !IsTownAvailable(i))
                continue;
            if (sCustomTowns[i].y < curY)
            {
                s32 dx = sCustomTowns[i].x - curX;
                s32 dy = sCustomTowns[i].y - curY;
                s32 dist = dx * dx + dy * dy;
                if (dist < bestDist)
                {
                    bestDist = dist;
                    bestIdx = i;
                }
            }
        }
        if (bestIdx != sCustomMap->selectedTown)
        {
            sCustomMap->selectedTown = bestIdx;
            MoveCursorToTown(bestIdx);
            UpdateTownNameWindow();
            m4aSongNumStart(SE_DEX_SCROLL);
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        // Find the nearest available town below current position
        s16 curX = sCustomTowns[sCustomMap->selectedTown].x;
        s16 curY = sCustomTowns[sCustomMap->selectedTown].y;
        s32 bestDist = 0x7FFFFFFF;
        u8 bestIdx = sCustomMap->selectedTown;

        for (u8 i = 0; i < NUM_CUSTOM_TOWNS; i++)
        {
            if (i == sCustomMap->selectedTown || !IsTownAvailable(i))
                continue;
            if (sCustomTowns[i].y > curY)
            {
                s32 dx = sCustomTowns[i].x - curX;
                s32 dy = sCustomTowns[i].y - curY;
                s32 dist = dx * dx + dy * dy;
                if (dist < bestDist)
                {
                    bestDist = dist;
                    bestIdx = i;
                }
            }
        }
        if (bestIdx != sCustomMap->selectedTown)
        {
            sCustomMap->selectedTown = bestIdx;
            MoveCursorToTown(bestIdx);
            UpdateTownNameWindow();
            m4aSongNumStart(SE_DEX_SCROLL);
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        m4aSongNumStart(SE_SELECT);
        sCustomMap->choseFlyLocation = TRUE;
        SetCustomMapCallback(CB_ExitCustomMap);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        m4aSongNumStart(SE_SELECT);
        sCustomMap->choseFlyLocation = FALSE;
        SetCustomMapCallback(CB_ExitCustomMap);
    }
}

static void CB_ExitCustomMap(void)
{
    switch (sCustomMap->state)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        sCustomMap->state++;
        break;
    case 1:
        if (!UpdatePaletteFade())
        {
            // Clean up cursor sprite
            if (sCustomMap->cursorSpriteId != MAX_SPRITES)
                DestroySprite(&gSprites[sCustomMap->cursorSpriteId]);

            if (sCustomMap->choseFlyLocation)
            {
                u8 townIdx = sCustomMap->selectedTown;
                SetWarpDestinationToHealLocation(sCustomTowns[townIdx].healLocationId);
                TRY_FREE_AND_SET_NULL(sCustomMap);
                FreeAllWindowBuffers();
                ReturnToFieldFromCustomFlySelect();
            }
            else if (sCustomMap->calledFromScript)
            {
                // Return to field and continue running the script
                TRY_FREE_AND_SET_NULL(sCustomMap);
                FreeAllWindowBuffers();
                SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
            }
            else
            {
                TRY_FREE_AND_SET_NULL(sCustomMap);
                FreeAllWindowBuffers();
                SetMainCallback2(CB2_ReturnToPartyMenuFromFlyMap);
            }
        }
        break;
    }
}

// ==================== UI Helpers ====================
static void MoveCursorToTown(u8 townIdx)
{
    if (sCustomMap->cursorSpriteId != MAX_SPRITES)
    {
        gSprites[sCustomMap->cursorSpriteId].x = sCustomTowns[townIdx].x;
        gSprites[sCustomMap->cursorSpriteId].y = sCustomTowns[townIdx].y;
    }
}

static void UpdateTownNameWindow(void)
{
    u8 name[MAP_NAME_LENGTH + 1];

    // Draw frame around the centered info window
    DrawStdFrameWithCustomTileAndPalette(WIN_MAP_INFO, FALSE, 0x65, 13);
    FillWindowPixelBuffer(WIN_MAP_INFO, PIXEL_FILL(1));

    // Get the map section name for the selected town and center it
    GetMapName(name, sCustomTowns[sCustomMap->selectedTown].mapSecId, 0);
    // Window is 20 tiles = 160px wide; center the text
    u32 x = GetStringCenterAlignXOffset(FONT_NORMAL, name, 160);
    AddTextPrinterParameterized(WIN_MAP_INFO, FONT_NORMAL, name, x, 1, 0, NULL);

    PutWindowTilemap(WIN_MAP_INFO);
    ScheduleBgCopyTilemapToVram(0);
}

// ==================== Poryscript Special ====================
// Call from Poryscript with: special(Special_OpenCustomMap)
// On cancel (B), returns to field and continues script.
// On select (A), warps to the chosen town.
static void CB2_OpenCustomMapFromScript(void)
{
    CB2_OpenCustomMap();
    // Set the flag after allocation in state 0
    if (sCustomMap != NULL)
        sCustomMap->calledFromScript = TRUE;
}

void Special_OpenCustomMap(void)
{
    SetMainCallback2(CB2_OpenCustomMapFromScript);
}
