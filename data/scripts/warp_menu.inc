@ =============================================================================
@ Dynamic Warp Menu Script
@ =============================================================================
@ This script builds a warp destination menu based on which flags are set.
@ Outskirt Stand is ALWAYS available. Other destinations unlock via flags.
@
@ --- CUSTOMIZATION GUIDE ---
@ 1. Replace FLAG_VISITED_xxx with your actual flag constants
@    (defined in include/constants/flags.h)
@ 2. Replace MAP_xxx, WARP_ID, X, Y with your actual map/warp values
@    (map names come from Porymap, e.g. MAP_OUTSKIRT_STAND)
@ 3. Add/remove destination blocks as needed following the pattern
@ 4. Update WARP_MENU_ID_xxx constants to match your destination count
@ 5. Attach WarpMenu_Start to an NPC or trigger via object_event script
@ =============================================================================

@ --- Destination ID constants ---
@ These correspond to the IDs passed in dynmultipush.
@ They auto-increment as destinations are pushed.
@ VAR_RESULT will be set to the selected destination's ID.
.set WARP_MENU_ID_OUTSKIRT_STAND,   0
.set WARP_MENU_ID_PHENAC_CITY,      1
.set WARP_MENU_ID_PYRITE_TOWN,      2
.set WARP_MENU_ID_AGATE_VILLAGE,    3
.set WARP_MENU_ID_THE_UNDER,        4
@ Add more IDs here as needed...

@ --- Placeholder Flags ---
@ Replace these with your actual flags from include/constants/flags.h
@ FLAG_VISITED_PHENAC_CITY    = your flag here
@ FLAG_VISITED_PYRITE_TOWN    = your flag here
@ FLAG_VISITED_AGATE_VILLAGE  = your flag here
@ FLAG_VISITED_THE_UNDER      = your flag here

@ =============================================================================
@ Main Entry Point - call this from your NPC / trigger
@ =============================================================================
WarpMenu_Start::
	lockall
	msgbox WarpMenu_Text_WhereToGo, MSGBOX_DEFAULT

	@ --- Always push Outskirt Stand (always unlocked) ---
	dynmultipush WarpMenu_Text_OutskirtStand, WARP_MENU_ID_OUTSKIRT_STAND

	@ --- Conditionally push each destination based on its flag ---
	@ PHENAC CITY
	goto_if_unset FLAG_VISITED_PHENAC_CITY, WarpMenu_Skip_Phenac
	dynmultipush WarpMenu_Text_PhenacCity, WARP_MENU_ID_PHENAC_CITY
WarpMenu_Skip_Phenac::

	@ PYRITE TOWN
	goto_if_unset FLAG_VISITED_PYRITE_TOWN, WarpMenu_Skip_Pyrite
	dynmultipush WarpMenu_Text_PyriteTown, WARP_MENU_ID_PYRITE_TOWN
WarpMenu_Skip_Pyrite::

	@ AGATE VILLAGE
	goto_if_unset FLAG_VISITED_AGATE_VILLAGE, WarpMenu_Skip_Agate
	dynmultipush WarpMenu_Text_AgateVillage, WARP_MENU_ID_AGATE_VILLAGE
WarpMenu_Skip_Agate::

	@ THE UNDER
	goto_if_unset FLAG_VISITED_THE_UNDER, WarpMenu_Skip_TheUnder
	dynmultipush WarpMenu_Text_TheUnder, WARP_MENU_ID_THE_UNDER
WarpMenu_Skip_TheUnder::

	@ --- Display the menu ---
	@ dynmultistack args: left, top, ignoreBPress, maxBeforeScroll, shouldSort, initialSelected, callbacks
	@ B press returns MULTI_B_PRESSED (127)
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE

	@ --- Handle selection ---
	switch VAR_RESULT
	case MULTI_B_PRESSED, WarpMenu_Cancel
	case WARP_MENU_ID_OUTSKIRT_STAND, WarpMenu_GoTo_OutskirtStand
	case WARP_MENU_ID_PHENAC_CITY,    WarpMenu_GoTo_PhenacCity
	case WARP_MENU_ID_PYRITE_TOWN,    WarpMenu_GoTo_PyriteTown
	case WARP_MENU_ID_AGATE_VILLAGE,  WarpMenu_GoTo_AgateVillage
	case WARP_MENU_ID_THE_UNDER,      WarpMenu_GoTo_TheUnder
	@ Add more cases here...
	goto WarpMenu_Cancel

@ =============================================================================
@ Warp Handlers
@ =============================================================================
@ Replace MAP_xxx and warp coordinates with your actual values.
@ Use either:
@   warp MAP_NAME, WARP_ID          (warp to a warp event on destination map)
@   warp MAP_NAME, 255, X, Y       (warp to specific X,Y coordinates)

WarpMenu_GoTo_OutskirtStand::
	msgbox WarpMenu_Text_Warping, MSGBOX_DEFAULT
	releaseall
	@ REPLACE: Use your actual map name and warp/coordinates
	warp MAP_OUTSKIRT_STAND, 0
	waitstate
	end

WarpMenu_GoTo_PhenacCity::
	msgbox WarpMenu_Text_Warping, MSGBOX_DEFAULT
	releaseall
	@ REPLACE: Use your actual map name and warp/coordinates
	warp MAP_PHENAC_CITY, 0
	waitstate
	end

WarpMenu_GoTo_PyriteTown::
	msgbox WarpMenu_Text_Warping, MSGBOX_DEFAULT
	releaseall
	@ REPLACE: Use your actual map name and warp/coordinates
	warp MAP_PYRITE_TOWN, 0
	waitstate
	end

WarpMenu_GoTo_AgateVillage::
	msgbox WarpMenu_Text_Warping, MSGBOX_DEFAULT
	releaseall
	@ REPLACE: Use your actual map name and warp/coordinates
	warp MAP_AGATE_VILLAGE, 0
	waitstate
	end

WarpMenu_GoTo_TheUnder::
	msgbox WarpMenu_Text_Warping, MSGBOX_DEFAULT
	releaseall
	@ REPLACE: Use your actual map name and warp/coordinates
	warp MAP_THE_UNDER, 0
	waitstate
	end

WarpMenu_Cancel::
	msgbox WarpMenu_Text_Cancel, MSGBOX_DEFAULT
	releaseall
	end

@ =============================================================================
@ Text Strings
@ =============================================================================
@ Menu option labels
WarpMenu_Text_OutskirtStand:
	.string "Outskirt Stand$"

WarpMenu_Text_PhenacCity:
	.string "Phenac City$"

WarpMenu_Text_PyriteTown:
	.string "Pyrite Town$"

WarpMenu_Text_AgateVillage:
	.string "Agate Village$"

WarpMenu_Text_TheUnder:
	.string "The Under$"

@ Dialogue strings
WarpMenu_Text_WhereToGo:
	.string "Where would you like to go?$"

WarpMenu_Text_Warping:
	.string "Warping now...$"

WarpMenu_Text_Cancel:
	.string "Maybe another time.$"
