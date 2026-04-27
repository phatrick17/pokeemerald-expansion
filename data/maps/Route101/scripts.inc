# 1 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 4 "data/maps/Route101/scripts.pory"
	.byte 0
# 5 "data/maps/Route101/scripts.pory"

# 6 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 7 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 8 "data/maps/Route101/scripts.pory"
    call_if_eq VAR_WILLIE_STATE, 3, Outside_EventScript_HideWillie
# 9 "data/maps/Route101/scripts.pory"
	end
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 12 "data/maps/Route101/scripts.pory"
	.2byte 0
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 15 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 16 "data/maps/Route101/scripts.pory"
	end
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 19 "data/maps/Route101/scripts.pory"
	lockall
# 20 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 21 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 22 "data/maps/Route101/scripts.pory"
	closemessage
# 23 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 24 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 25 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 28 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 31 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 38 "data/maps/Route101/scripts.pory"
	closemessage
# 39 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 40 "data/maps/Route101/scripts.pory"
	releaseall
# 41 "data/maps/Route101/scripts.pory"
	end
# 42 "data/maps/Route101/scripts.pory"

# 43 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 44 "data/maps/Route101/scripts.pory"
	lockall
# 45 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 46 "data/maps/Route101/scripts.pory"
	closemessage
# 47 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	releaseall
# 50 "data/maps/Route101/scripts.pory"
	end
# 51 "data/maps/Route101/scripts.pory"

# 52 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 53 "data/maps/Route101/scripts.pory"
	lockall
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 55 "data/maps/Route101/scripts.pory"
	closemessage
# 56 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 57 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route101/scripts.pory"
	releaseall
# 59 "data/maps/Route101/scripts.pory"
	end
# 60 "data/maps/Route101/scripts.pory"

# 61 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 62 "data/maps/Route101/scripts.pory"
	lockall
# 63 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 64 "data/maps/Route101/scripts.pory"
	closemessage
# 65 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 66 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route101/scripts.pory"
	releaseall
# 68 "data/maps/Route101/scripts.pory"
	end
# 69 "data/maps/Route101/scripts.pory"

# 70 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 71 "data/maps/Route101/scripts.pory"
	walk_up
# 72 "data/maps/Route101/scripts.pory"
	step_end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 76 "data/maps/Route101/scripts.pory"
	step_end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 79 "data/maps/Route101/scripts.pory"
	walk_down
# 80 "data/maps/Route101/scripts.pory"
	step_end
# 81 "data/maps/Route101/scripts.pory"

# 82 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	step_end
# 114 "data/maps/Route101/scripts.pory"

# 115 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	step_end
# 123 "data/maps/Route101/scripts.pory"

# 124 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 125 "data/maps/Route101/scripts.pory"
	step_end
# 126 "data/maps/Route101/scripts.pory"

# 127 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 128 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	step_end
# 133 "data/maps/Route101/scripts.pory"

# 134 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 140 "data/maps/Route101/scripts.pory"
	step_end
# 141 "data/maps/Route101/scripts.pory"

# 142 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	step_end
# 174 "data/maps/Route101/scripts.pory"

# 175 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	step_end
# 183 "data/maps/Route101/scripts.pory"

# 184 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 185 "data/maps/Route101/scripts.pory"
	step_end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 188 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 192 "data/maps/Route101/scripts.pory"
	step_end
# 193 "data/maps/Route101/scripts.pory"

# 194 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 195 "data/maps/Route101/scripts.pory"
	walk_up
# 196 "data/maps/Route101/scripts.pory"
	walk_up
# 197 "data/maps/Route101/scripts.pory"
	step_end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 200 "data/maps/Route101/scripts.pory"
	walk_up
# 201 "data/maps/Route101/scripts.pory"
	walk_left
# 202 "data/maps/Route101/scripts.pory"
	walk_up
# 203 "data/maps/Route101/scripts.pory"
	step_end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 206 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 207 "data/maps/Route101/scripts.pory"
	end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 210 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 211 "data/maps/Route101/scripts.pory"
	end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 214 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 215 "data/maps/Route101/scripts.pory"
	end
# 216 "data/maps/Route101/scripts.pory"

# 217 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 218 "data/maps/Route101/scripts.pory"
	lock
# 219 "data/maps/Route101/scripts.pory"
	faceplayer
# 220 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 222 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 224 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 225 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 226 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 228 "data/maps/Route101/scripts.pory"
	waitstate
# 229 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 230 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 232 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 233 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 234 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 235 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 236 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 237 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 238 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 239 "data/maps/Route101/scripts.pory"
	checkplayergender
# 240 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 241 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 242 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 243 "data/maps/Route101/scripts.pory"
	waitstate
# 244 "data/maps/Route101/scripts.pory"
	release
# 245 "data/maps/Route101/scripts.pory"
	end
# 246 "data/maps/Route101/scripts.pory"

# 247 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 248 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 249 "data/maps/Route101/scripts.pory"
	return
# 250 "data/maps/Route101/scripts.pory"

# 251 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 253 "data/maps/Route101/scripts.pory"
	return
# 254 "data/maps/Route101/scripts.pory"

# 255 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 256 "data/maps/Route101/scripts.pory"
	walk_right
# 257 "data/maps/Route101/scripts.pory"
	step_end
# 258 "data/maps/Route101/scripts.pory"

# 259 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 260 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 261 "data/maps/Route101/scripts.pory"

# 262 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 263 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 264 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 265 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 266 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 267 "data/maps/Route101/scripts.pory"

# 268 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 269 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 273 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 274 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 275 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 276 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 277 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 278 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 279 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 284 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 285 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 286 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 288 "data/maps/Route101/scripts.pory"

# 289 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 290 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 291 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 292 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 293 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 296 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
# 298 "data/maps/Route101/scripts.pory"

# 299 "data/maps/Route101/scripts.pory"
Outside_EventScript_HideWillie:
# 300 "data/maps/Route101/scripts.pory"
    setflag FLAG_HIDE_OUTSIDE_WILLIE
# 301 "data/maps/Route101/scripts.pory"
    return

Outskirt_Stand_Folley_Trudly_1::
# 310 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_CAR_AND_BAG_OUTSKIRT, Outskirt_Stand_Folley_Trudly_1_1
# 314 "data/maps/Route101/scripts.pory"
	lockall
# 315 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outskirt_Stand_Folley_Trudly_1_Movement_0
# 318 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 320 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 321 "data/maps/Route101/scripts.pory"
	waitse
# 322 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route101/scripts.pory"
	delay 15
# 324 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outskirt_Stand_Folley_Trudly_1_Movement_1
# 328 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TRUDLEY_FOLEY_SPRITE
# 331 "data/maps/Route101/scripts.pory"
	addobject FOLLEY_1
# 332 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 333 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_2
# 337 "data/maps/Route101/scripts.pory"
	delay 30
# 338 "data/maps/Route101/scripts.pory"
	addobject TRUDLY_1
# 339 "data/maps/Route101/scripts.pory"
	applymovement TRUDLY_1, Outskirt_Stand_Folley_Trudly_1_Movement_3
# 342 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route101/scripts.pory"
	msgbox Outskirt_Stand_Folley_Trudly_1_Text_0, MSGBOX_DEFAULT
# 352 "data/maps/Route101/scripts.pory"
	closemessage
# 353 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_4
# 356 "data/maps/Route101/scripts.pory"
	delay 30
# 357 "data/maps/Route101/scripts.pory"
	removeobject RUI_IN_BAG
# 358 "data/maps/Route101/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 359 "data/maps/Route101/scripts.pory"
	waitse
# 360 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_5
# 364 "data/maps/Route101/scripts.pory"
	applymovement TRUDLY_1, Outskirt_Stand_Folley_Trudly_1_Movement_6
# 369 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 371 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 372 "data/maps/Route101/scripts.pory"
	waitse
# 373 "data/maps/Route101/scripts.pory"
	removeobject TRUDLY_1
# 374 "data/maps/Route101/scripts.pory"
	removeobject FOLLEY_1
# 375 "data/maps/Route101/scripts.pory"
	removeobject FOLLY_TRUDLY_CAR
# 376 "data/maps/Route101/scripts.pory"
	setflag FLAG_CAR_AND_BAG_OUTSKIRT
# 377 "data/maps/Route101/scripts.pory"
	delay 30
# 378 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 379 "data/maps/Route101/scripts.pory"
	releaseall
	end

Outskirt_Stand_Folley_Trudly_1_1:
# 311 "data/maps/Route101/scripts.pory"
	releaseall
	end


Outside_EventScript_WillieAmbush::
# 408 "data/maps/Route101/scripts.pory"
	lockall
# 411 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 412 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 413 "data/maps/Route101/scripts.pory"
	waitse
# 414 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route101/scripts.pory"
	delay 30
# 420 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outside_Movement_PlayerStepDown
# 421 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_OUTSIDE_WILLIE
# 425 "data/maps/Route101/scripts.pory"
	addobject LOCALID_WILLIE_OUTSIDE
# 426 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 427 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_WILLIE_OUTSIDE, Outside_Movement_WillieExitDoor
# 428 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_0, MSGBOX_DEFAULT
# 442 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAskBattle:
# 443 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_1, MSGBOX_YESNO
# 448 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Outside_EventScript_WillieAmbush_2
# 456 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_3, MSGBOX_DEFAULT
# 460 "data/maps/Route101/scripts.pory"
	goto Outside_EventScript_WillieAskBattle
Outside_EventScript_WillieAmbush_1:
# 463 "data/maps/Route101/scripts.pory"
	closemessage
# 464 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outside_EventScript_WillieAmbush_Movement_0
# 469 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_WILLIE_OUTSIDE, Outside_EventScript_WillieAmbush_Movement_1
# 474 "data/maps/Route101/scripts.pory"
	waitmovement
# 475 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_4, MSGBOX_DEFAULT
# 481 "data/maps/Route101/scripts.pory"
	closemessage
# 486 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_SAWYER_1, Outside_EventScript_WillieAmbush_Text_5
# 493 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_6, MSGBOX_DEFAULT
# 502 "data/maps/Route101/scripts.pory"
	closemessage
# 503 "data/maps/Route101/scripts.pory"
	setflag FLAG_DEFEATED_WILLIE
# 504 "data/maps/Route101/scripts.pory"
	setvar VAR_WILLIE_STATE, 3
# 505 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 506 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 507 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_WILLIE_OUTSIDE
# 508 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 509 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_OUTSIDE_WILLIE
# 510 "data/maps/Route101/scripts.pory"
	setflag FLAG_MAP_UNLOCK_PHENAC
# 511 "data/maps/Route101/scripts.pory"
	releaseall
	end

Outside_EventScript_WillieAmbush_2:
# 450 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_2, MSGBOX_DEFAULT
	goto Outside_EventScript_WillieAmbush_1


Outskirt_Stand_Willie_Outside_1::
# 516 "data/maps/Route101/scripts.pory"
	lockall
# 517 "data/maps/Route101/scripts.pory"
	faceplayer
# 518 "data/maps/Route101/scripts.pory"
	msgbox Outskirt_Stand_Willie_Outside_1_Text_0, MSGBOX_DEFAULT
# 523 "data/maps/Route101/scripts.pory"
	releaseall
	end


# 530 "data/maps/Route101/scripts.pory"
Outside_Movement_PlayerStepDown:
# 531 "data/maps/Route101/scripts.pory"
	face_up
# 532 "data/maps/Route101/scripts.pory"
	step_end

# 535 "data/maps/Route101/scripts.pory"
Outside_Movement_WillieExitDoor:
# 536 "data/maps/Route101/scripts.pory"
	walk_down
# 537 "data/maps/Route101/scripts.pory"
	face_player
# 538 "data/maps/Route101/scripts.pory"
	step_end

My_Debug_Menu::
# 550 "data/maps/Route101/scripts.pory"
	lockall
# 551 "data/maps/Route101/scripts.pory"
	multichoice 0, 0, MULTI_DEBUG_MENU, FALSE
# 552 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 553 "data/maps/Route101/scripts.pory"
	case 0, My_Debug_Menu_3
# 582 "data/maps/Route101/scripts.pory"
	case 1, My_Debug_Menu_4
# 595 "data/maps/Route101/scripts.pory"
	case MULTI_B_PRESSED, My_Debug_Menu_5
My_Debug_Menu_1:
# 599 "data/maps/Route101/scripts.pory"
	releaseall
	end

My_Debug_Menu_3:
# 554 "data/maps/Route101/scripts.pory"
	setflag FLAG_DEFEATED_WILLIE
# 555 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE119_INTRO_DONE
# 556 "data/maps/Route101/scripts.pory"
	setflag FLAG_TRUDLEY_FOLEY_SPRITE
# 557 "data/maps/Route101/scripts.pory"
	setflag FLAG_CAR_AND_BAG_OUTSKIRT
# 558 "data/maps/Route101/scripts.pory"
	setvar VAR_WILLIE_STATE, 3
# 559 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_FOLLY_1
# 560 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_NASCOUR_1
# 561 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_VISITED_MAYOR_1
# 562 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1
# 563 "data/maps/Route101/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 3
# 564 "data/maps/Route101/scripts.pory"
	clearflag FLAG_WILLIE_APPEAR_1
# 565 "data/maps/Route101/scripts.pory"
	setflag FLAG_POKEBALLS_UNLOCKED
# 566 "data/maps/Route101/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 5
# 567 "data/maps/Route101/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 6
# 568 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_CITY_MAYOR_MIRORB
# 569 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 570 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_CITY_KRANE_CHALLENGE_1
# 571 "data/maps/Route101/scripts.pory"
	setflag FLAG_PHENAC_PART1_COMPLETE
# 574 "data/maps/Route101/scripts.pory"
	setflag FLAG_MAP_UNLOCK_PHENAC
# 575 "data/maps/Route101/scripts.pory"
	setflag FLAG_MAP_UNLOCK_REALGAM_TEMP
# 576 "data/maps/Route101/scripts.pory"
	special DoRivalNameChoiceScreen
# 577 "data/maps/Route101/scripts.pory"
	waitstate
# 578 "data/maps/Route101/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, FNPC_ALL
# 579 "data/maps/Route101/scripts.pory"
	additem ITEM_MASTER_BALL, 999
# 580 "data/maps/Route101/scripts.pory"
	release
	end

My_Debug_Menu_4:
# 583 "data/maps/Route101/scripts.pory"
	multichoice 0, 0, MULTI_DEBUG_WARP, FALSE
# 584 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 585 "data/maps/Route101/scripts.pory"
	case 0, My_Debug_Menu_7
# 588 "data/maps/Route101/scripts.pory"
	case 1, My_Debug_Menu_8
# 591 "data/maps/Route101/scripts.pory"
	case MULTI_B_PRESSED, My_Debug_Menu_9
	goto My_Debug_Menu_1

My_Debug_Menu_5:
# 596 "data/maps/Route101/scripts.pory"
	releaseall
	end

My_Debug_Menu_7:
# 586 "data/maps/Route101/scripts.pory"
	warp MAP_ROUTE101, 30, 14
# 587 "data/maps/Route101/scripts.pory"
	waitstate
	goto My_Debug_Menu_1

My_Debug_Menu_8:
# 589 "data/maps/Route101/scripts.pory"
	warp MAP_OLDALE_TOWN, 25, 49
# 590 "data/maps/Route101/scripts.pory"
	waitstate
	goto My_Debug_Menu_1

My_Debug_Menu_9:
# 592 "data/maps/Route101/scripts.pory"
	releaseall
	end


OPEN_WORLD_MAP_ENTER_RIGHT::
# 604 "data/maps/Route101/scripts.pory"
	lockall
# 605 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 606 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 607 "data/maps/Route101/scripts.pory"
	waitstate
# 608 "data/maps/Route101/scripts.pory"
	releaseall
# 609 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 610 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_RIGHT_Movement_0
# 613 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


OPEN_WORLD_MAP_ENTER_LEFT::
# 618 "data/maps/Route101/scripts.pory"
	lockall
# 619 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 620 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 621 "data/maps/Route101/scripts.pory"
	waitstate
# 622 "data/maps/Route101/scripts.pory"
	releaseall
# 623 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 624 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_LEFT_Movement_0
# 627 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


OPEN_WORLD_MAP_ENTER_DOWN::
# 632 "data/maps/Route101/scripts.pory"
	lockall
# 633 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 634 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 635 "data/maps/Route101/scripts.pory"
	waitstate
# 636 "data/maps/Route101/scripts.pory"
	releaseall
# 637 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 638 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_DOWN_Movement_0
# 641 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


OPEN_WORLD_MAP_ENTER_UP::
# 646 "data/maps/Route101/scripts.pory"
	lockall
# 647 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 648 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 649 "data/maps/Route101/scripts.pory"
	waitstate
# 650 "data/maps/Route101/scripts.pory"
	releaseall
# 651 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 652 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_UP_Movement_0
# 655 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


# 315 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_0:
# 316 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 324 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_1:
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 326 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 333 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_2:
# 334 "data/maps/Route101/scripts.pory"
	walk_down
# 334 "data/maps/Route101/scripts.pory"
	walk_down
# 334 "data/maps/Route101/scripts.pory"
	walk_down
# 335 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 339 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_3:
# 340 "data/maps/Route101/scripts.pory"
	walk_down
# 340 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 353 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_4:
# 354 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 360 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_5:
# 361 "data/maps/Route101/scripts.pory"
	walk_left
# 361 "data/maps/Route101/scripts.pory"
	walk_left
# 361 "data/maps/Route101/scripts.pory"
	walk_left
# 362 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 364 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_6:
# 365 "data/maps/Route101/scripts.pory"
	walk_down
# 366 "data/maps/Route101/scripts.pory"
	walk_left
# 366 "data/maps/Route101/scripts.pory"
	walk_left
# 367 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 464 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAmbush_Movement_0:
# 465 "data/maps/Route101/scripts.pory"
	walk_down
# 465 "data/maps/Route101/scripts.pory"
	walk_down
# 466 "data/maps/Route101/scripts.pory"
	walk_right
# 466 "data/maps/Route101/scripts.pory"
	walk_right
# 467 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 469 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAmbush_Movement_1:
# 470 "data/maps/Route101/scripts.pory"
	walk_down
# 470 "data/maps/Route101/scripts.pory"
	walk_down
# 470 "data/maps/Route101/scripts.pory"
	walk_down
# 471 "data/maps/Route101/scripts.pory"
	walk_left
# 472 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 610 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_RIGHT_Movement_0:
# 611 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 624 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_LEFT_Movement_0:
# 625 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 638 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_DOWN_Movement_0:
# 639 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 652 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_UP_Movement_0:
# 653 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Outskirt_Stand_Folley_Trudly_1_Text_0:
# 344 "data/maps/Route101/scripts.pory"
	.string "???: Fwaah! We sure pigged out, eh?\n"
	.string "I love chowing down after a job!\l"
	.string "It adds to the flavor, I swear.\p"
	.string "???: Heheheh, yeah.\n"
	.string "And we bagged outselves a great big\l"
	.string "catch, too.\p"
	.string "???: Boss'll be sure to fix us up good\n"
	.string "with big rewards, too.\p"
	.string "???: Heheheh, it doesn't get any better\n"
	.string "than this!$"

Outside_EventScript_WillieAmbush_Text_0:
# 432 "data/maps/Route101/scripts.pory"
	.string "WILLIE: Yo! Wait! Wait up!\p"
	.string "Hey, my name's WILLIE.\p"
	.string "After I got a good look at you,\n"
	.string "well, I got this urge to battle you.\p"
	.string "It's like I'm compelled to.\p"
	.string "Any way I look at it, it's obvious\n"
	.string "that you're no ordinary Joe.$"

Outside_EventScript_WillieAmbush_Text_1:
# 444 "data/maps/Route101/scripts.pory"
	.string "So, what do you say?\n"
	.string "Let's you and me have a quick battle!$"

Outside_EventScript_WillieAmbush_Text_2:
# 451 "data/maps/Route101/scripts.pory"
	.string "WILLIE: Yeahah! That's the spirit!\n"
	.string "All right, all right.\p"
	.string "Over here, this way!$"

Outside_EventScript_WillieAmbush_Text_3:
# 457 "data/maps/Route101/scripts.pory"
	.string "WILLIE: What are you saying?\n"
	.string "You're joshing, right?$"

Outside_EventScript_WillieAmbush_Text_4:
# 476 "data/maps/Route101/scripts.pory"
	.string "Yeeeeeeaaaah!\n"
	.string "I'm burning now! I'm on fire!\p"
	.string "It's full-throttle time!\n"
	.string "Vrum! Vroom! Let's roll!$"

Outside_EventScript_WillieAmbush_Text_5:
# 487 "data/maps/Route101/scripts.pory"
	.string "Tch... Wiped out.\n"
	.string "I still need seasoning.$"

Outside_EventScript_WillieAmbush_Text_6:
# 493 "data/maps/Route101/scripts.pory"
	.string "WILLIE: You're tough. Real tough.\n"
	.string "You did a real number on us.\p"
	.string "Hey, I know. Why not test your\n"
	.string "skills in Phenac City?\l"
	.string "It's out west of here.\p"
	.string "You'll find trainers who are way\n"
	.string "better than me there.\p"
	.string "You should go out there and get\n"
	.string "some battling in.$"

Outskirt_Stand_Willie_Outside_1_Text_0:
# 518 "data/maps/Route101/scripts.pory"
	.string "WILLIE: Oh, hey, it's you!\n"
	.string "I was worried about you.\p"
	.string "Some rough-looking characters came\n"
	.string "around asking about you.\p"
	.string "It made me worried.\p"
	.string "Those guys, they looked like they're\n"
	.string "from Team Snagem.$"
