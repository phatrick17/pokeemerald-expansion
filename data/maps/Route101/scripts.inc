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
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 13 "data/maps/Route101/scripts.pory"
	.2byte 0
# 14 "data/maps/Route101/scripts.pory"

# 15 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 16 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 17 "data/maps/Route101/scripts.pory"
	end
# 18 "data/maps/Route101/scripts.pory"

# 19 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 20 "data/maps/Route101/scripts.pory"
	lockall
# 21 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 22 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 23 "data/maps/Route101/scripts.pory"
	closemessage
# 24 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 25 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 28 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 29 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 37 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 39 "data/maps/Route101/scripts.pory"
	closemessage
# 40 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 41 "data/maps/Route101/scripts.pory"
	releaseall
# 42 "data/maps/Route101/scripts.pory"
	end
# 43 "data/maps/Route101/scripts.pory"

# 44 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 45 "data/maps/Route101/scripts.pory"
	lockall
# 46 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 47 "data/maps/Route101/scripts.pory"
	closemessage
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 49 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route101/scripts.pory"
	releaseall
# 51 "data/maps/Route101/scripts.pory"
	end
# 52 "data/maps/Route101/scripts.pory"

# 53 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 54 "data/maps/Route101/scripts.pory"
	lockall
# 55 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 56 "data/maps/Route101/scripts.pory"
	closemessage
# 57 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 58 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route101/scripts.pory"
	releaseall
# 60 "data/maps/Route101/scripts.pory"
	end
# 61 "data/maps/Route101/scripts.pory"

# 62 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 63 "data/maps/Route101/scripts.pory"
	lockall
# 64 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 65 "data/maps/Route101/scripts.pory"
	closemessage
# 66 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 67 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route101/scripts.pory"
	releaseall
# 69 "data/maps/Route101/scripts.pory"
	end
# 70 "data/maps/Route101/scripts.pory"

# 71 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 72 "data/maps/Route101/scripts.pory"
	walk_up
# 73 "data/maps/Route101/scripts.pory"
	step_end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 76 "data/maps/Route101/scripts.pory"
	walk_right
# 77 "data/maps/Route101/scripts.pory"
	step_end
# 78 "data/maps/Route101/scripts.pory"

# 79 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 80 "data/maps/Route101/scripts.pory"
	walk_down
# 81 "data/maps/Route101/scripts.pory"
	step_end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	step_end
# 115 "data/maps/Route101/scripts.pory"

# 116 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route101/scripts.pory"
	step_end
# 124 "data/maps/Route101/scripts.pory"

# 125 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 126 "data/maps/Route101/scripts.pory"
	step_end
# 127 "data/maps/Route101/scripts.pory"

# 128 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 133 "data/maps/Route101/scripts.pory"
	step_end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 141 "data/maps/Route101/scripts.pory"
	step_end
# 142 "data/maps/Route101/scripts.pory"

# 143 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	step_end
# 175 "data/maps/Route101/scripts.pory"

# 176 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 183 "data/maps/Route101/scripts.pory"
	step_end
# 184 "data/maps/Route101/scripts.pory"

# 185 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 186 "data/maps/Route101/scripts.pory"
	step_end
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 196 "data/maps/Route101/scripts.pory"
	walk_up
# 197 "data/maps/Route101/scripts.pory"
	walk_up
# 198 "data/maps/Route101/scripts.pory"
	step_end
# 199 "data/maps/Route101/scripts.pory"

# 200 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 201 "data/maps/Route101/scripts.pory"
	walk_up
# 202 "data/maps/Route101/scripts.pory"
	walk_left
# 203 "data/maps/Route101/scripts.pory"
	walk_up
# 204 "data/maps/Route101/scripts.pory"
	step_end
# 205 "data/maps/Route101/scripts.pory"

# 206 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 207 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 208 "data/maps/Route101/scripts.pory"
	end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 211 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 212 "data/maps/Route101/scripts.pory"
	end
# 213 "data/maps/Route101/scripts.pory"

# 214 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 215 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 216 "data/maps/Route101/scripts.pory"
	end
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 219 "data/maps/Route101/scripts.pory"
	lock
# 220 "data/maps/Route101/scripts.pory"
	faceplayer
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 222 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 223 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 225 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 226 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 227 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 229 "data/maps/Route101/scripts.pory"
	waitstate
# 230 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 231 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 233 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 234 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 235 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 236 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 237 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 238 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 239 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 240 "data/maps/Route101/scripts.pory"
	checkplayergender
# 241 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 242 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 243 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 244 "data/maps/Route101/scripts.pory"
	waitstate
# 245 "data/maps/Route101/scripts.pory"
	release
# 246 "data/maps/Route101/scripts.pory"
	end
# 247 "data/maps/Route101/scripts.pory"

# 248 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 249 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 250 "data/maps/Route101/scripts.pory"
	return
# 251 "data/maps/Route101/scripts.pory"

# 252 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 254 "data/maps/Route101/scripts.pory"
	return
# 255 "data/maps/Route101/scripts.pory"

# 256 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 257 "data/maps/Route101/scripts.pory"
	walk_right
# 258 "data/maps/Route101/scripts.pory"
	step_end
# 259 "data/maps/Route101/scripts.pory"

# 260 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 261 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 262 "data/maps/Route101/scripts.pory"

# 263 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 264 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 265 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 266 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 267 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 268 "data/maps/Route101/scripts.pory"

# 269 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 270 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 271 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 274 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 275 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 276 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 277 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 278 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 279 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 281 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 282 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 283 "data/maps/Route101/scripts.pory"

# 284 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 285 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 286 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 287 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 288 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 289 "data/maps/Route101/scripts.pory"

# 290 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 291 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 292 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 293 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 294 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 295 "data/maps/Route101/scripts.pory"

# 296 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 297 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 298 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
# 299 "data/maps/Route101/scripts.pory"

# 300 "data/maps/Route101/scripts.pory"
Outside_EventScript_HideWillie:
# 301 "data/maps/Route101/scripts.pory"
    setflag FLAG_HIDE_OUTSIDE_WILLIE
# 302 "data/maps/Route101/scripts.pory"
    return

Outskirt_Stand_Folley_Trudly_1::
# 311 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_CAR_AND_BAG_OUTSKIRT, Outskirt_Stand_Folley_Trudly_1_1
# 315 "data/maps/Route101/scripts.pory"
	lockall
# 316 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outskirt_Stand_Folley_Trudly_1_Movement_0
# 319 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 321 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 322 "data/maps/Route101/scripts.pory"
	waitse
# 323 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route101/scripts.pory"
	delay 15
# 325 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outskirt_Stand_Folley_Trudly_1_Movement_1
# 329 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TRUDLEY_FOLEY_SPRITE
# 332 "data/maps/Route101/scripts.pory"
	addobject FOLLEY_1
# 333 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 334 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_2
# 338 "data/maps/Route101/scripts.pory"
	delay 30
# 339 "data/maps/Route101/scripts.pory"
	addobject TRUDLY_1
# 340 "data/maps/Route101/scripts.pory"
	applymovement TRUDLY_1, Outskirt_Stand_Folley_Trudly_1_Movement_3
# 343 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route101/scripts.pory"
	msgbox Outskirt_Stand_Folley_Trudly_1_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/Route101/scripts.pory"
	closemessage
# 354 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_4
# 357 "data/maps/Route101/scripts.pory"
	delay 30
# 358 "data/maps/Route101/scripts.pory"
	removeobject RUI_IN_BAG
# 359 "data/maps/Route101/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 360 "data/maps/Route101/scripts.pory"
	waitse
# 361 "data/maps/Route101/scripts.pory"
	applymovement FOLLEY_1, Outskirt_Stand_Folley_Trudly_1_Movement_5
# 365 "data/maps/Route101/scripts.pory"
	applymovement TRUDLY_1, Outskirt_Stand_Folley_Trudly_1_Movement_6
# 370 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 372 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 373 "data/maps/Route101/scripts.pory"
	waitse
# 374 "data/maps/Route101/scripts.pory"
	removeobject TRUDLY_1
# 375 "data/maps/Route101/scripts.pory"
	removeobject FOLLEY_1
# 376 "data/maps/Route101/scripts.pory"
	removeobject FOLLY_TRUDLY_CAR
# 377 "data/maps/Route101/scripts.pory"
	setflag FLAG_CAR_AND_BAG_OUTSKIRT
# 378 "data/maps/Route101/scripts.pory"
	delay 30
# 379 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 380 "data/maps/Route101/scripts.pory"
	releaseall
	end

Outskirt_Stand_Folley_Trudly_1_1:
# 312 "data/maps/Route101/scripts.pory"
	releaseall
	end


Outside_EventScript_WillieAmbush::
# 409 "data/maps/Route101/scripts.pory"
	lockall
# 412 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 413 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 414 "data/maps/Route101/scripts.pory"
	waitse
# 415 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route101/scripts.pory"
	delay 30
# 421 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outside_Movement_PlayerStepDown
# 422 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_OUTSIDE_WILLIE
# 426 "data/maps/Route101/scripts.pory"
	addobject LOCALID_WILLIE_OUTSIDE
# 427 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 428 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_WILLIE_OUTSIDE, Outside_Movement_WillieExitDoor
# 429 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_0, MSGBOX_DEFAULT
# 443 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAskBattle:
# 444 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_1, MSGBOX_YESNO
# 449 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Outside_EventScript_WillieAmbush_2
# 458 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_3, MSGBOX_DEFAULT
# 462 "data/maps/Route101/scripts.pory"
	goto Outside_EventScript_WillieAskBattle
Outside_EventScript_WillieAmbush_1:
# 465 "data/maps/Route101/scripts.pory"
	closemessage
# 466 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Outside_EventScript_WillieAmbush_Movement_0
# 471 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_WILLIE_OUTSIDE, Outside_EventScript_WillieAmbush_Movement_1
# 476 "data/maps/Route101/scripts.pory"
	waitmovement
# 477 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_4, MSGBOX_DEFAULT
# 483 "data/maps/Route101/scripts.pory"
	closemessage
# 488 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_SAWYER_1, Outside_EventScript_WillieAmbush_Text_5
# 495 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_6, MSGBOX_DEFAULT
# 504 "data/maps/Route101/scripts.pory"
	setflag FLAG_DEFEATED_WILLIE
# 505 "data/maps/Route101/scripts.pory"
	setvar VAR_WILLIE_STATE, 3
# 506 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 507 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 508 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_WILLIE_OUTSIDE
# 509 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 510 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_OUTSIDE_WILLIE
# 511 "data/maps/Route101/scripts.pory"
	setflag FLAG_MAP_UNLOCK_PHENAC
# 512 "data/maps/Route101/scripts.pory"
	releaseall
	end

Outside_EventScript_WillieAmbush_2:
# 451 "data/maps/Route101/scripts.pory"
	msgbox Outside_EventScript_WillieAmbush_Text_2, MSGBOX_DEFAULT
	goto Outside_EventScript_WillieAmbush_1


# 519 "data/maps/Route101/scripts.pory"
Outside_Movement_PlayerStepDown:
# 520 "data/maps/Route101/scripts.pory"
	face_up
# 521 "data/maps/Route101/scripts.pory"
	step_end

# 524 "data/maps/Route101/scripts.pory"
Outside_Movement_WillieExitDoor:
# 525 "data/maps/Route101/scripts.pory"
	walk_down
# 526 "data/maps/Route101/scripts.pory"
	face_player
# 527 "data/maps/Route101/scripts.pory"
	step_end

TEST_WILLIE_INVIS::
# 532 "data/maps/Route101/scripts.pory"
	lockall
# 533 "data/maps/Route101/scripts.pory"
	special DoRivalNameChoiceScreen
# 534 "data/maps/Route101/scripts.pory"
	waitstate
# 535 "data/maps/Route101/scripts.pory"
	releaseall
	end


OPEN_WORLD_MAP_ENTER_Right::
# 541 "data/maps/Route101/scripts.pory"
	lockall
# 542 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 543 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 544 "data/maps/Route101/scripts.pory"
	waitstate
# 545 "data/maps/Route101/scripts.pory"
	releaseall
# 546 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 547 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_Right_Movement_0
# 550 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


OPEN_WORLD_MAP_ENTER_Left::
# 555 "data/maps/Route101/scripts.pory"
	lockall
# 556 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 557 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 558 "data/maps/Route101/scripts.pory"
	waitstate
# 559 "data/maps/Route101/scripts.pory"
	releaseall
# 560 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 561 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_Left_Movement_0
# 564 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


OPEN_WORLD_MAP_ENTER_DOWN::
# 569 "data/maps/Route101/scripts.pory"
	lockall
# 570 "data/maps/Route101/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 571 "data/maps/Route101/scripts.pory"
	special Special_OpenCustomMap
# 572 "data/maps/Route101/scripts.pory"
	waitstate
# 573 "data/maps/Route101/scripts.pory"
	releaseall
# 574 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 575 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OPEN_WORLD_MAP_ENTER_DOWN_Movement_0
# 578 "data/maps/Route101/scripts.pory"
	waitmovement 0
	end


# 316 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_0:
# 317 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 325 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_1:
# 326 "data/maps/Route101/scripts.pory"
	walk_right
# 326 "data/maps/Route101/scripts.pory"
	walk_right
# 326 "data/maps/Route101/scripts.pory"
	walk_right
# 327 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 334 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_2:
# 335 "data/maps/Route101/scripts.pory"
	walk_down
# 335 "data/maps/Route101/scripts.pory"
	walk_down
# 335 "data/maps/Route101/scripts.pory"
	walk_down
# 336 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 340 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_3:
# 341 "data/maps/Route101/scripts.pory"
	walk_down
# 341 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 354 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_4:
# 355 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 361 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_5:
# 362 "data/maps/Route101/scripts.pory"
	walk_left
# 362 "data/maps/Route101/scripts.pory"
	walk_left
# 362 "data/maps/Route101/scripts.pory"
	walk_left
# 363 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 365 "data/maps/Route101/scripts.pory"
Outskirt_Stand_Folley_Trudly_1_Movement_6:
# 366 "data/maps/Route101/scripts.pory"
	walk_down
# 367 "data/maps/Route101/scripts.pory"
	walk_left
# 367 "data/maps/Route101/scripts.pory"
	walk_left
# 368 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 466 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAmbush_Movement_0:
# 467 "data/maps/Route101/scripts.pory"
	walk_down
# 467 "data/maps/Route101/scripts.pory"
	walk_down
# 468 "data/maps/Route101/scripts.pory"
	walk_right
# 468 "data/maps/Route101/scripts.pory"
	walk_right
# 469 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 471 "data/maps/Route101/scripts.pory"
Outside_EventScript_WillieAmbush_Movement_1:
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 473 "data/maps/Route101/scripts.pory"
	walk_left
# 474 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 547 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_Right_Movement_0:
# 548 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 561 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_Left_Movement_0:
# 562 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 575 "data/maps/Route101/scripts.pory"
OPEN_WORLD_MAP_ENTER_DOWN_Movement_0:
# 576 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Outskirt_Stand_Folley_Trudly_1_Text_0:
# 345 "data/maps/Route101/scripts.pory"
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
# 433 "data/maps/Route101/scripts.pory"
	.string "WILLIE: Yo! Wait! Wait up!\p"
	.string "Hey, my name's WILLIE.\p"
	.string "After I got a good look at you,\n"
	.string "well, I got this urge to battle you.\p"
	.string "It's like I'm compelled to.\p"
	.string "Any way I look at it, it's obvious\n"
	.string "that you're no ordinary Joe.$"

Outside_EventScript_WillieAmbush_Text_1:
# 445 "data/maps/Route101/scripts.pory"
	.string "So, what do you say?\n"
	.string "Let's you and me have a quick battle!$"

Outside_EventScript_WillieAmbush_Text_2:
# 452 "data/maps/Route101/scripts.pory"
	.string "WILLIE: Yeahah! That's the spirit!\n"
	.string "All right, all right.\p"
	.string "Over here, this way!$"

Outside_EventScript_WillieAmbush_Text_3:
# 459 "data/maps/Route101/scripts.pory"
	.string "WILLIE: What are you saying?\n"
	.string "You're joshing, right?$"

Outside_EventScript_WillieAmbush_Text_4:
# 478 "data/maps/Route101/scripts.pory"
	.string "Yeeeeeeaaaah!\n"
	.string "I'm burning now! I'm on fire!\p"
	.string "It's full-throttle time!\n"
	.string "Vrum! Vroom! Let's roll!$"

Outside_EventScript_WillieAmbush_Text_5:
# 489 "data/maps/Route101/scripts.pory"
	.string "Tch... Wiped out.\n"
	.string "I still need seasoning.$"

Outside_EventScript_WillieAmbush_Text_6:
# 495 "data/maps/Route101/scripts.pory"
	.string "WILLIE: You're tough. Real tough.\n"
	.string "You did a real number on us.\p"
	.string "Hey, I know. Why not test your\n"
	.string "skills in Phenac City?\l"
	.string "It's out west of here.\p"
	.string "You'll find trainers who are way\n"
	.string "better than me there.\p"
	.string "You should go out there and get\n"
	.string "some battling in.$"
