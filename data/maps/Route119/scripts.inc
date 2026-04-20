Route119_MapScripts::
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 9 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 10 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route119_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route119_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Route119/scripts.pory"
	map_script_2 VAR_ROUTE119_INTRO_STATE, 0, Route119_EventScript_IntroCutscene
	.2byte 0


Route119_EventScript_IntroCutscene::
# 25 "data/maps/Route119/scripts.pory"
	lockall
# 26 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/Route119/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, FALSE
# 28 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Route119/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/Route119/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 0
# 34 "data/maps/Route119/scripts.pory"
	delay 90
# 35 "data/maps/Route119/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 36 "data/maps/Route119/scripts.pory"
	delay 90
# 39 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route119_Movement_CameraPanDown
# 40 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route119/scripts.pory"
	delay 90
# 50 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_UMBREON
# 51 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_ESPEON
# 52 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_UMBREON_ESPEON_WES
# 53 "data/maps/Route119/scripts.pory"
	playse SE_BALL_TRADE
# 54 "data/maps/Route119/scripts.pory"
	waitse
# 55 "data/maps/Route119/scripts.pory"
	delay 60
# 59 "data/maps/Route119/scripts.pory"
	applymovement WES_RIDE_AWAY, Route119_Movement_WesRideLeft
# 60 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route119/scripts.pory"
	removeobject WES_RIDE_AWAY
# 65 "data/maps/Route119/scripts.pory"
	delay 30
# 68 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_SNAGGEM_INTRO
# 69 "data/maps/Route119/scripts.pory"
	addobject SNAGGEM_1
# 70 "data/maps/Route119/scripts.pory"
	addobject SNAGGEM_2
# 71 "data/maps/Route119/scripts.pory"
	addobject GONZAP_1
# 74 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route119_Movement_CameraPanUp
# 75 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route119/scripts.pory"
	delay 30
# 80 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_IntroCutscene_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/Route119/scripts.pory"
	closemessage
# 83 "data/maps/Route119/scripts.pory"
	delay 30
# 84 "data/maps/Route119/scripts.pory"
	applymovement GONZAP_1, Common_Movement_ExclamationMark
# 85 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_1, Common_Movement_ExclamationMark
# 86 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_2, Common_Movement_ExclamationMark
# 87 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 88 "data/maps/Route119/scripts.pory"
	waitse
# 89 "data/maps/Route119/scripts.pory"
	applymovement GONZAP_1, SNAGGEM_LOOK_BEHIND
# 90 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_1, SNAGGEM_LOOK_BEHIND
# 91 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_2, SNAGGEM_LOOK_BEHIND
# 92 "data/maps/Route119/scripts.pory"
	delay 30
# 95 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/Route119/scripts.pory"
	delay 90
# 97 "data/maps/Route119/scripts.pory"
	playse SE_M_EXPLOSION
# 98 "data/maps/Route119/scripts.pory"
	waitse
# 99 "data/maps/Route119/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 100 "data/maps/Route119/scripts.pory"
	waitse
# 103 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_SNAGGEM_INTRO
# 106 "data/maps/Route119/scripts.pory"
	setflag FLAG_ROUTE119_INTRO_DONE
# 107 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_INTRO_STATE, 1
# 110 "data/maps/Route119/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_OUTSIDE_WILLIE
# 114 "data/maps/Route119/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 115 "data/maps/Route119/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 116 "data/maps/Route119/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_UMBREON, 26, item = ITEM_NONE, nature = NATURE_HASTY, move1 = MOVE_BITE, move2 = MOVE_SECRET_POWER, move3 = MOVE_TAUNT, move4 = MOVE_PROTECT
# 117 "data/maps/Route119/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_ESPEON, 25, item = ITEM_NONE, nature = NATURE_TIMID, move1 = MOVE_CONFUSION, move2 = MOVE_REFLECT, move3 = MOVE_RETURN, move4 = MOVE_HELPING_HAND
# 118 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE01_GET
# 119 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE02_GET
# 120 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE03_GET
# 121 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE04_GET
# 122 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE05_GET
# 123 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE06_GET
# 124 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE07_GET
# 125 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE08_GET
# 126 "data/maps/Route119/scripts.pory"
	additem ITEM_POTION, 5
# 127 "data/maps/Route119/scripts.pory"
	additem ITEM_SUPER_POTION, 2
# 128 "data/maps/Route119/scripts.pory"
	additem ITEM_ANTIDOTE, 2
# 129 "data/maps/Route119/scripts.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 130 "data/maps/Route119/scripts.pory"
	additem ITEM_AWAKENING, 2
# 131 "data/maps/Route119/scripts.pory"
	additem ITEM_BURN_HEAL, 2
# 132 "data/maps/Route119/scripts.pory"
	additem ITEM_ICE_HEAL, 2
# 133 "data/maps/Route119/scripts.pory"
	additem ITEM_FULL_HEAL, 2
# 134 "data/maps/Route119/scripts.pory"
	additem ITEM_SNAG_MACHINE
# 135 "data/maps/Route119/scripts.pory"
	setflag FLAG_TRUDLEY_FOLEY_SPRITE
# 136 "data/maps/Route119/scripts.pory"
	setflag FLAG_WILLIE_APPEAR_1
# 137 "data/maps/Route119/scripts.pory"
	setflag FLAG_PHENAC_CITY_MAYOR_MIRORB
# 138 "data/maps/Route119/scripts.pory"
	setflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 139 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 140 "data/maps/Route119/scripts.pory"
	addmoney 5000
# 141 "data/maps/Route119/scripts.pory"
	warp MAP_ROUTE101, 33, 15
# 142 "data/maps/Route119/scripts.pory"
	waitstate
# 144 "data/maps/Route119/scripts.pory"
	releaseall
	end


# 152 "data/maps/Route119/scripts.pory"
SNAGGEM_LOOK_BEHIND:
# 153 "data/maps/Route119/scripts.pory"
	face_up
# 154 "data/maps/Route119/scripts.pory"
	step_end

# 158 "data/maps/Route119/scripts.pory"
Route119_Movement_CameraPanDown:
# 159 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route119/scripts.pory"
	step_end

# 173 "data/maps/Route119/scripts.pory"
Route119_Movement_CameraPanUp:
# 174 "data/maps/Route119/scripts.pory"
	walk_up
# 175 "data/maps/Route119/scripts.pory"
	walk_up
# 176 "data/maps/Route119/scripts.pory"
	walk_up
# 177 "data/maps/Route119/scripts.pory"
	walk_up
# 178 "data/maps/Route119/scripts.pory"
	walk_up
# 179 "data/maps/Route119/scripts.pory"
	walk_up
# 180 "data/maps/Route119/scripts.pory"
	walk_up
# 181 "data/maps/Route119/scripts.pory"
	walk_up
# 182 "data/maps/Route119/scripts.pory"
	step_end

# 186 "data/maps/Route119/scripts.pory"
Route119_Movement_WesRideLeft:
# 187 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 190 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 191 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 195 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 196 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 197 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 198 "data/maps/Route119/scripts.pory"
	step_end

# 211 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 212 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 213 "data/maps/Route119/scripts.pory"
	end
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 216 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 218 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 219 "data/maps/Route119/scripts.pory"
	return
# 220 "data/maps/Route119/scripts.pory"

# 221 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 222 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 223 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 224 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 225 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_ROUTE119_INTRO_STATE, 0, Route119_EventScript_SetupIntroObjects
# 226 "data/maps/Route119/scripts.pory"
	end
# 227 "data/maps/Route119/scripts.pory"

# 228 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetupIntroObjects::
# 229 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_SNAGGEM_INTRO
# 230 "data/maps/Route119/scripts.pory"
	return
# 231 "data/maps/Route119/scripts.pory"

# 232 "data/maps/Route119/scripts.pory"

# 233 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 234 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 235 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 236 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 237 "data/maps/Route119/scripts.pory"
	return
# 238 "data/maps/Route119/scripts.pory"

# 239 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 240 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 241 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 242 "data/maps/Route119/scripts.pory"
	end
# 243 "data/maps/Route119/scripts.pory"

# 244 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 245 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 246 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 247 "data/maps/Route119/scripts.pory"
	end
# 248 "data/maps/Route119/scripts.pory"

# 249 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 250 "data/maps/Route119/scripts.pory"
	lockall
# 251 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 252 "data/maps/Route119/scripts.pory"
	checkplayergender
# 253 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 254 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 255 "data/maps/Route119/scripts.pory"
	delay 65
# 256 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 257 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 258 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 259 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route119/scripts.pory"
	delay 30
# 261 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 262 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 263 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 264 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 265 "data/maps/Route119/scripts.pory"
	delay 30
# 266 "data/maps/Route119/scripts.pory"
	checkplayergender
# 267 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 268 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 269 "data/maps/Route119/scripts.pory"
	releaseall
# 270 "data/maps/Route119/scripts.pory"
	end
# 271 "data/maps/Route119/scripts.pory"

# 272 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 273 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 274 "data/maps/Route119/scripts.pory"
	return
# 275 "data/maps/Route119/scripts.pory"

# 276 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 277 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 278 "data/maps/Route119/scripts.pory"
	return
# 279 "data/maps/Route119/scripts.pory"

# 280 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 281 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 282 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 283 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 284 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 285 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 286 "data/maps/Route119/scripts.pory"
	end
# 287 "data/maps/Route119/scripts.pory"

# 288 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 289 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 290 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 291 "data/maps/Route119/scripts.pory"
	end
# 292 "data/maps/Route119/scripts.pory"

# 293 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 294 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 295 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 296 "data/maps/Route119/scripts.pory"
	end
# 297 "data/maps/Route119/scripts.pory"

# 298 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 299 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 300 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 301 "data/maps/Route119/scripts.pory"
	end
# 302 "data/maps/Route119/scripts.pory"

# 303 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 304 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 305 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 306 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 307 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 308 "data/maps/Route119/scripts.pory"
	end
# 309 "data/maps/Route119/scripts.pory"

# 310 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 311 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 312 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 313 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 314 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 315 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 316 "data/maps/Route119/scripts.pory"
	end
# 317 "data/maps/Route119/scripts.pory"

# 318 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 319 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 320 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 321 "data/maps/Route119/scripts.pory"
	end
# 322 "data/maps/Route119/scripts.pory"

# 323 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 324 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 325 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 326 "data/maps/Route119/scripts.pory"
	end
# 327 "data/maps/Route119/scripts.pory"

# 328 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 329 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 330 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 331 "data/maps/Route119/scripts.pory"
	end
# 332 "data/maps/Route119/scripts.pory"

# 333 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 334 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 335 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 336 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 337 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 338 "data/maps/Route119/scripts.pory"
	end
# 339 "data/maps/Route119/scripts.pory"

# 340 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 341 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 342 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 343 "data/maps/Route119/scripts.pory"
	return
# 344 "data/maps/Route119/scripts.pory"

# 345 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 346 "data/maps/Route119/scripts.pory"
	closemessage
# 347 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 348 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 349 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 350 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 351 "data/maps/Route119/scripts.pory"
	delay 30
# 352 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 353 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 354 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 355 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 356 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 357 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 358 "data/maps/Route119/scripts.pory"
	delay 60
# 359 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 360 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 361 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 362 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 363 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 365 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 366 "data/maps/Route119/scripts.pory"
	closemessage
# 367 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 368 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 369 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 370 "data/maps/Route119/scripts.pory"
	releaseall
# 371 "data/maps/Route119/scripts.pory"
	end
# 372 "data/maps/Route119/scripts.pory"

# 373 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 374 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
# 375 "data/maps/Route119/scripts.pory"
	return
# 376 "data/maps/Route119/scripts.pory"

# 377 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 378 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
# 379 "data/maps/Route119/scripts.pory"
	return
# 380 "data/maps/Route119/scripts.pory"

# 381 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 382 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
# 383 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route119/scripts.pory"
	return
# 385 "data/maps/Route119/scripts.pory"

# 386 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 387 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
# 388 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route119/scripts.pory"
	return
# 390 "data/maps/Route119/scripts.pory"

# 391 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 392 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 393 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route119/scripts.pory"
	return
# 395 "data/maps/Route119/scripts.pory"

# 396 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 397 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 398 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route119/scripts.pory"
	return
# 400 "data/maps/Route119/scripts.pory"

# 401 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 402 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 403 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 404 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route119/scripts.pory"
	return
# 406 "data/maps/Route119/scripts.pory"

# 407 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 408 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 409 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 410 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route119/scripts.pory"
	return
# 412 "data/maps/Route119/scripts.pory"

# 413 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 414 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 415 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
# 416 "data/maps/Route119/scripts.pory"
	return
# 417 "data/maps/Route119/scripts.pory"

# 418 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 419 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 420 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
# 421 "data/maps/Route119/scripts.pory"
	return
# 422 "data/maps/Route119/scripts.pory"

# 423 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 424 "data/maps/Route119/scripts.pory"
	delay_16
# 425 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 426 "data/maps/Route119/scripts.pory"
	delay_8
# 427 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 428 "data/maps/Route119/scripts.pory"
	step_end
# 429 "data/maps/Route119/scripts.pory"

# 430 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 431 "data/maps/Route119/scripts.pory"
	delay_16
# 432 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 433 "data/maps/Route119/scripts.pory"
	delay_8
# 434 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 435 "data/maps/Route119/scripts.pory"
	step_end
# 436 "data/maps/Route119/scripts.pory"

# 437 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 438 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 441 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 442 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 443 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 444 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 445 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 446 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 447 "data/maps/Route119/scripts.pory"
	step_end
# 448 "data/maps/Route119/scripts.pory"

# 449 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 450 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 452 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 453 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 454 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 455 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 456 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 458 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 459 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 460 "data/maps/Route119/scripts.pory"
	step_end
# 461 "data/maps/Route119/scripts.pory"

# 462 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 463 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 464 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 465 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 466 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 467 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 468 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 469 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 470 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 471 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 472 "data/maps/Route119/scripts.pory"
	step_end
# 473 "data/maps/Route119/scripts.pory"

# 474 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 475 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 476 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 477 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 478 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 479 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 480 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 481 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 482 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 483 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 484 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 485 "data/maps/Route119/scripts.pory"
	step_end
# 486 "data/maps/Route119/scripts.pory"

# 487 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 488 "data/maps/Route119/scripts.pory"
	walk_down
# 489 "data/maps/Route119/scripts.pory"
	walk_down
# 490 "data/maps/Route119/scripts.pory"
	walk_down
# 491 "data/maps/Route119/scripts.pory"
	walk_down
# 492 "data/maps/Route119/scripts.pory"
	walk_left
# 493 "data/maps/Route119/scripts.pory"
	walk_left
# 494 "data/maps/Route119/scripts.pory"
	walk_down
# 495 "data/maps/Route119/scripts.pory"
	step_end
# 496 "data/maps/Route119/scripts.pory"

# 497 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 498 "data/maps/Route119/scripts.pory"
	walk_up
# 499 "data/maps/Route119/scripts.pory"
	walk_right
# 500 "data/maps/Route119/scripts.pory"
	walk_right
# 501 "data/maps/Route119/scripts.pory"
	walk_up
# 502 "data/maps/Route119/scripts.pory"
	walk_up
# 503 "data/maps/Route119/scripts.pory"
	walk_up
# 504 "data/maps/Route119/scripts.pory"
	walk_up
# 505 "data/maps/Route119/scripts.pory"
	walk_up
# 506 "data/maps/Route119/scripts.pory"
	step_end
# 507 "data/maps/Route119/scripts.pory"

# 508 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 509 "data/maps/Route119/scripts.pory"
	walk_up
# 510 "data/maps/Route119/scripts.pory"
	walk_right
# 511 "data/maps/Route119/scripts.pory"
	walk_up
# 512 "data/maps/Route119/scripts.pory"
	walk_up
# 513 "data/maps/Route119/scripts.pory"
	walk_up
# 514 "data/maps/Route119/scripts.pory"
	walk_up
# 515 "data/maps/Route119/scripts.pory"
	walk_up
# 516 "data/maps/Route119/scripts.pory"
	step_end
# 517 "data/maps/Route119/scripts.pory"

# 518 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 519 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 520 "data/maps/Route119/scripts.pory"
	end
# 521 "data/maps/Route119/scripts.pory"

# 522 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 523 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 524 "data/maps/Route119/scripts.pory"
	end
# 525 "data/maps/Route119/scripts.pory"

# 526 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 527 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 528 "data/maps/Route119/scripts.pory"
	end
# 529 "data/maps/Route119/scripts.pory"

# 530 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 531 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 532 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/Route119/scripts.pory"
	end
# 534 "data/maps/Route119/scripts.pory"

# 535 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 536 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 537 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route119/scripts.pory"
	end
# 539 "data/maps/Route119/scripts.pory"

# 540 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 541 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 542 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route119/scripts.pory"
	end
# 544 "data/maps/Route119/scripts.pory"

# 545 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 546 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 547 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route119/scripts.pory"
	end
# 549 "data/maps/Route119/scripts.pory"

# 550 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 551 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 552 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route119/scripts.pory"
	end
# 554 "data/maps/Route119/scripts.pory"

# 555 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 556 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 557 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/Route119/scripts.pory"
	end
# 559 "data/maps/Route119/scripts.pory"

# 560 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 561 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 562 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 563 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 564 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 565 "data/maps/Route119/scripts.pory"
	release
# 566 "data/maps/Route119/scripts.pory"
	end
# 567 "data/maps/Route119/scripts.pory"

# 568 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 569 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 570 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 571 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 572 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 573 "data/maps/Route119/scripts.pory"
	release
# 574 "data/maps/Route119/scripts.pory"
	end
# 575 "data/maps/Route119/scripts.pory"

# 576 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 577 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 578 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 579 "data/maps/Route119/scripts.pory"
	end
# 580 "data/maps/Route119/scripts.pory"

# 581 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 582 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 583 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 584 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 585 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 586 "data/maps/Route119/scripts.pory"
	release
# 587 "data/maps/Route119/scripts.pory"
	end
# 588 "data/maps/Route119/scripts.pory"

# 589 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 590 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 591 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 592 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 593 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 594 "data/maps/Route119/scripts.pory"
	release
# 595 "data/maps/Route119/scripts.pory"
	end
# 596 "data/maps/Route119/scripts.pory"

# 597 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 598 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 599 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 600 "data/maps/Route119/scripts.pory"
	end
# 601 "data/maps/Route119/scripts.pory"

# 602 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 603 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 604 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 605 "data/maps/Route119/scripts.pory"
	end
# 606 "data/maps/Route119/scripts.pory"

# 607 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 608 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 609 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 610 "data/maps/Route119/scripts.pory"
	end
# 611 "data/maps/Route119/scripts.pory"

# 612 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 613 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 614 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 615 "data/maps/Route119/scripts.pory"
	end
# 616 "data/maps/Route119/scripts.pory"

# 617 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 618 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 619 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 620 "data/maps/Route119/scripts.pory"
	end
# 621 "data/maps/Route119/scripts.pory"

# 622 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 623 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 624 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 625 "data/maps/Route119/scripts.pory"
	end
# 626 "data/maps/Route119/scripts.pory"

# 627 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 628 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 629 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 630 "data/maps/Route119/scripts.pory"
	end
# 631 "data/maps/Route119/scripts.pory"

# 632 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 633 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 634 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 635 "data/maps/Route119/scripts.pory"
	end
# 636 "data/maps/Route119/scripts.pory"

# 637 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 638 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 639 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 640 "data/maps/Route119/scripts.pory"
	end
# 641 "data/maps/Route119/scripts.pory"

# 642 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 643 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 644 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 645 "data/maps/Route119/scripts.pory"
	end
# 646 "data/maps/Route119/scripts.pory"

# 647 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 648 "data/maps/Route119/scripts.pory"
	lock
# 649 "data/maps/Route119/scripts.pory"
	faceplayer
# 650 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 651 "data/maps/Route119/scripts.pory"
	closemessage
# 652 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 653 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 654 "data/maps/Route119/scripts.pory"
	release
# 655 "data/maps/Route119/scripts.pory"
	end
# 656 "data/maps/Route119/scripts.pory"

# 657 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 658 "data/maps/Route119/scripts.pory"
	lock
# 659 "data/maps/Route119/scripts.pory"
	faceplayer
# 660 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 661 "data/maps/Route119/scripts.pory"
	closemessage
# 662 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 663 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route119/scripts.pory"
	release
# 665 "data/maps/Route119/scripts.pory"
	end
# 666 "data/maps/Route119/scripts.pory"

# 667 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 668 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 669 "data/maps/Route119/scripts.pory"
	end
# 670 "data/maps/Route119/scripts.pory"

# 671 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 672 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 673 "data/maps/Route119/scripts.pory"
	end
# 674 "data/maps/Route119/scripts.pory"

# 675 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 676 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 677 "data/maps/Route119/scripts.pory"
	end
# 678 "data/maps/Route119/scripts.pory"

# 679 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 680 "data/maps/Route119/scripts.pory"
	lockall
# 681 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 682 "data/maps/Route119/scripts.pory"
	waitmessage
# 683 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 684 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 685 "data/maps/Route119/scripts.pory"
	releaseall
# 686 "data/maps/Route119/scripts.pory"
	end
# 687 "data/maps/Route119/scripts.pory"

# 688 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 689 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 690 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 691 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 692 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 693 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 694 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 695 "data/maps/Route119/scripts.pory"

# 696 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 697 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 698 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 699 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 700 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 701 "data/maps/Route119/scripts.pory"

# 702 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 703 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 704 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 705 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 706 "data/maps/Route119/scripts.pory"

# 707 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 708 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 709 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 710 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 711 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 712 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 713 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 714 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 715 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 716 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 717 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 718 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 719 "data/maps/Route119/scripts.pory"

# 720 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 721 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 722 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 723 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 724 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 725 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 726 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 727 "data/maps/Route119/scripts.pory"

# 728 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 729 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 730 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 731 "data/maps/Route119/scripts.pory"

# 732 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 733 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 734 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 735 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 736 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 737 "data/maps/Route119/scripts.pory"

# 738 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 739 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 740 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 741 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 742 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 743 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 744 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 745 "data/maps/Route119/scripts.pory"

# 746 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 747 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 748 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 749 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 750 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 751 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 752 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 753 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 754 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 755 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 756 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 757 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 758 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 759 "data/maps/Route119/scripts.pory"

# 760 "data/maps/Route119/scripts.pory"

# 761 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 762 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 763 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 764 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 765 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 766 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 767 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 768 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 769 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 770 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 771 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 772 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 773 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 774 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 775 "data/maps/Route119/scripts.pory"

# 776 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 777 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 778 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 779 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 780 "data/maps/Route119/scripts.pory"

# 781 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 782 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 783 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 784 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 785 "data/maps/Route119/scripts.pory"

# 786 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 787 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 788 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 789 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 790 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 791 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 792 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 793 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 794 "data/maps/Route119/scripts.pory"

# 795 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 796 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 797 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 798 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 799 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 800 "data/maps/Route119/scripts.pory"

# 801 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 802 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 803 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 804 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 805 "data/maps/Route119/scripts.pory"

# 806 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 807 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 808 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 809 "data/maps/Route119/scripts.pory"

# 810 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 811 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 812 "data/maps/Route119/scripts.pory"

# 813 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 814 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 815 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 816 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 817 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 818 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 819 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 820 "data/maps/Route119/scripts.pory"
	.string "way you want.$"

Route119_EventScript_IntroCutscene_Text_0:
# 80 "data/maps/Route119/scripts.pory"
	.string "...$"
