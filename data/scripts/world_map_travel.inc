@ Pokemon Colosseum-style World Map Travel System
@ ================================================
@
@ HOW TO USE:
@ -----------
@ 1. Place a coord_event (trigger) on your world map tile in your map's map.json.
@    See the example JSON block at the bottom of this file.
@
@ 2. Add an object_event in that same map.json for the travel sprite.
@    See the example JSON block at the bottom of this file.
@
@ 3. Set the FLAG_WORLD_MAP_* flags in your story scripts when the player
@    unlocks each destination. Outskirt Stand is always available.
@
@ 4. Update the warp coordinates to match your actual destination maps.
@    Search for ~~FILL_IN~~ in this file for everything you need to customize.
@
@ ~~FILL_IN~~ = You must replace these with your actual values.
@               They are marked so you can search/highlight them easily.
@
@ ============================================================================

@ ~~FILL_IN~~ - Define your travel sprite's local ID from the map's object_events.
@ This is the NPC object that slides off-screen during the travel animation.
@ Set this to match the "graphics_id" entry you add in your map.json object_events.
.set LOCAL_ID_TRAVEL_SPRITE, 1  @ ~~FILL_IN~~ Change to your object_event's local ID

@ ============================================================================
@ MAIN TRIGGER SCRIPT - runs when the player steps on the world map tile
@ ============================================================================
WorldMap_EventScript_TravelTrigger::
	lockall
	msgbox WorldMap_Text_WhereToTravel, MSGBOX_DEFAULT
	@ Show the multichoice (x=1, y=1 = top-left corner, FALSE = B-press allowed)
	multichoice 1, 1, MULTI_WORLD_MAP, FALSE
	@ Branch on the player's selection
	switch VAR_RESULT
	case WORLDMAP_SELECTION_OUTSKIRT_STAND, WorldMap_EventScript_GoOutskirtStand
	case WORLDMAP_SELECTION_PHENAC_CITY,    WorldMap_EventScript_GoPhenacCity
	case WORLDMAP_SELECTION_PYRITE_TOWN,    WorldMap_EventScript_GoPyriteTown
	@ Add more cases here as you add destinations:
	@ case WORLDMAP_SELECTION_AGATE_VILLAGE, WorldMap_EventScript_GoAgateVillage
	case WORLDMAP_SELECTION_CANCEL,         WorldMap_EventScript_CancelTravel
	case MULTI_B_PRESSED,                   WorldMap_EventScript_CancelTravel
	end

@ ============================================================================
@ CANCEL - Player pressed B or chose Cancel. Walk backwards and close.
@ ============================================================================
WorldMap_EventScript_CancelTravel::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, WorldMap_Movement_StepBack
	waitmovement 0
	releaseall
	end

WorldMap_Movement_StepBack:
	walk_down  @ ~~FILL_IN~~ Change to the opposite direction the player approached from
	step_end

@ ============================================================================
@ DESTINATION HANDLERS - One per destination. Each checks unlock flag, then warps.
@ ============================================================================

@ --- Outskirt Stand (always unlocked) ---
WorldMap_EventScript_GoOutskirtStand::
	closemessage
	goto WorldMap_EventScript_DoTravelAnimation
	@ After animation, warp happens via WorldMap_EventScript_DoWarp
	@ We store the destination in VAR_TEMP_0 so the shared warp code knows where to go.
	end

@ --- Phenac City (locked behind FLAG_WORLD_MAP_PHENAC_CITY) ---
WorldMap_EventScript_GoPhenacCity::
	closemessage
	goto_if_unset FLAG_WORLD_MAP_PHENAC_CITY, WorldMap_EventScript_DestinationLocked
	setvar VAR_TEMP_0, 1
	goto WorldMap_EventScript_DoTravelAnimation
	end

@ --- Pyrite Town (locked behind FLAG_WORLD_MAP_PYRITE_TOWN) ---
WorldMap_EventScript_GoPyriteTown::
	closemessage
	goto_if_unset FLAG_WORLD_MAP_PYRITE_TOWN, WorldMap_EventScript_DestinationLocked
	setvar VAR_TEMP_0, 2
	goto WorldMap_EventScript_DoTravelAnimation
	end

@ --- Template for future destinations ---
@ WorldMap_EventScript_GoAgateVillage::
@ 	closemessage
@ 	goto_if_unset FLAG_WORLD_MAP_AGATE_VILLAGE, WorldMap_EventScript_DestinationLocked
@ 	setvar VAR_TEMP_0, 3
@ 	goto WorldMap_EventScript_DoTravelAnimation
@ 	end

@ ============================================================================
@ LOCKED DESTINATION - Tells the player they can't go there yet
@ ============================================================================
WorldMap_EventScript_DestinationLocked::
	msgbox WorldMap_Text_CantGoThere, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

@ ============================================================================
@ TRAVEL ANIMATION - Player disappears, sprite slides off-screen, then warp
@ ============================================================================
WorldMap_EventScript_DoTravelAnimation::
	@ Play a sound effect for departure
	playse SE_EXIT
	waitse
	@ Hide the player
	fadescreen FADE_TO_BLACK
	@ Show the travel sprite at a position on the map
	@ ~~FILL_IN~~ - Set these coordinates to where you want the sprite to appear
	setobjectxy LOCAL_ID_TRAVEL_SPRITE, 10, 8  @ ~~FILL_IN~~ X, Y on your map
	clearflag FLAG_TEMP_1  @ ~~FILL_IN~~ Use this flag to hide/show the travel sprite in map.json
	addobject LOCAL_ID_TRAVEL_SPRITE
	@ Remove the player from view
	removeobject OBJ_EVENT_ID_PLAYER
	fadescreen FADE_FROM_BLACK
	@ Sprite slides left off camera
	applymovement LOCAL_ID_TRAVEL_SPRITE, WorldMap_Movement_SlideOffScreen
	waitmovement 0
	@ Now do the warp
	playse SE_EXIT
	fadescreen FADE_TO_BLACK
	removeobject LOCAL_ID_TRAVEL_SPRITE
	setflag FLAG_TEMP_1
	goto WorldMap_EventScript_DoWarp
	end

WorldMap_Movement_SlideOffScreen:
	walk_fast_left  @ ~~FILL_IN~~ Change direction to match your map layout
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

@ ============================================================================
@ WARP - Uses VAR_TEMP_0 to decide the destination
@ ============================================================================
WorldMap_EventScript_DoWarp::
	@ ~~FILL_IN~~ - Replace MAP names and X,Y coordinates below
	@ with your actual destination map names and landing positions.
	@ MAP names are defined in include/constants/maps.h
	switch VAR_TEMP_0
	case 0, WorldMap_EventScript_WarpOutskirtStand
	case 1, WorldMap_EventScript_WarpPhenacCity
	case 2, WorldMap_EventScript_WarpPyriteTown
	@ case 3, WorldMap_EventScript_WarpAgateVillage
	end

WorldMap_EventScript_WarpOutskirtStand::
	warp MAP_ROUTE101, 10, 10  @ ~~FILL_IN~~ Replace MAP_ROUTE101 and coords with your Outskirt Stand map
	waitstate
	end

WorldMap_EventScript_WarpPhenacCity::
	warp MAP_ROUTE101, 10, 10  @ ~~FILL_IN~~ Replace MAP_ROUTE101 and coords with your Phenac City map
	waitstate
	end

WorldMap_EventScript_WarpPyriteTown::
	warp MAP_ROUTE101, 10, 10  @ ~~FILL_IN~~ Replace MAP_ROUTE101 and coords with your Pyrite Town map
	waitstate
	end

@ ============================================================================
@ TEXT STRINGS
@ ============================================================================

WorldMap_Text_WhereToTravel:
	.string "Where would you like to travel?$"

WorldMap_Text_CantGoThere:
	.string "You haven't unlocked that\n"
	.string "destination yet.$"


@ ============================================================================
@ MAP.JSON SETUP GUIDE
@ ============================================================================
@
@ Add these to your world map's map.json file:
@
@ --- 1. COORD_EVENT (Trigger tile) ---
@ Add this to the "coord_events" array:
@
@   {
@     "type": "trigger",
@     "x": ~~FILL_IN~~,            <-- X coordinate of the trigger tile
@     "y": ~~FILL_IN~~,            <-- Y coordinate of the trigger tile
@     "elevation": 0,
@     "var": "0",                   <-- Set to a VAR if you want conditional triggering
@     "var_value": "0",
@     "script": "WorldMap_EventScript_TravelTrigger"
@   }
@
@ --- 2. OBJECT_EVENT (Travel sprite that slides off-screen) ---
@ Add this to the "object_events" array:
@
@   {
@     "graphics_id": "OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL",  <-- ~~FILL_IN~~ Your travel sprite
@     "x": ~~FILL_IN~~,            <-- Starting X (will be overridden by setobjectxy)
@     "y": ~~FILL_IN~~,            <-- Starting Y (will be overridden by setobjectxy)
@     "elevation": 3,
@     "movement_type": "MOVEMENT_TYPE_NONE",
@     "movement_range_x": 0,
@     "movement_range_y": 0,
@     "trainer_type": "TRAINER_TYPE_NONE",
@     "trainer_sight_or_berry_tree_id": "0",
@     "script": "",
@     "flag": "FLAG_TEMP_1"         <-- ~~FILL_IN~~ Flag that hides the sprite by default
@   }
@   NOTE: The local_id is determined by the object's position (0-indexed) in the
@   object_events array. Make sure LOCAL_ID_TRAVEL_SPRITE at the top of this file
@   matches.
@
@ --- 3. UNLOCKING DESTINATIONS IN STORY SCRIPTS ---
@ In your story progression scripts, set the flags when the player should unlock
@ each destination:
@
@   setflag FLAG_WORLD_MAP_PHENAC_CITY   @ After reaching Phenac in the story
@   setflag FLAG_WORLD_MAP_PYRITE_TOWN   @ After reaching Pyrite in the story
@
@ ============================================================================
