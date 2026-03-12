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
# 46 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_UMBREON
# 47 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_ESPEON
# 48 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_UMBREON_ESPEON_WES
# 50 "data/maps/Route119/scripts.pory"
	delay 90
# 54 "data/maps/Route119/scripts.pory"
	applymovement WES_RIDE_AWAY, Route119_Movement_WesRideLeft
# 55 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route119/scripts.pory"
	removeobject WES_RIDE_AWAY
# 60 "data/maps/Route119/scripts.pory"
	delay 30
# 63 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_SNAGGEM_INTRO
# 64 "data/maps/Route119/scripts.pory"
	addobject SNAGGEM_1
# 65 "data/maps/Route119/scripts.pory"
	addobject SNAGGEM_2
# 66 "data/maps/Route119/scripts.pory"
	addobject GONZAP_1
# 69 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route119_Movement_CameraPanUp
# 70 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route119/scripts.pory"
	delay 30
# 75 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_IntroCutscene_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/Route119/scripts.pory"
	closemessage
# 78 "data/maps/Route119/scripts.pory"
	delay 30
# 79 "data/maps/Route119/scripts.pory"
	applymovement GONZAP_1, Common_Movement_ExclamationMark
# 80 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_1, Common_Movement_ExclamationMark
# 81 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_2, Common_Movement_ExclamationMark
# 82 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Route119/scripts.pory"
	waitse
# 84 "data/maps/Route119/scripts.pory"
	applymovement GONZAP_1, SNAGGEM_LOOK_BEHIND
# 85 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_1, SNAGGEM_LOOK_BEHIND
# 86 "data/maps/Route119/scripts.pory"
	applymovement SNAGGEM_2, SNAGGEM_LOOK_BEHIND
# 87 "data/maps/Route119/scripts.pory"
	delay 30
# 90 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/Route119/scripts.pory"
	delay 90
# 92 "data/maps/Route119/scripts.pory"
	playse SE_M_EXPLOSION
# 93 "data/maps/Route119/scripts.pory"
	waitse
# 94 "data/maps/Route119/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 95 "data/maps/Route119/scripts.pory"
	waitse
# 98 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_SNAGGEM_INTRO
# 101 "data/maps/Route119/scripts.pory"
	setflag FLAG_ROUTE119_INTRO_DONE
# 102 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_INTRO_STATE, 1
# 105 "data/maps/Route119/scripts.pory"
	special RemoveCameraObject
# 108 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_OUTSIDE_WILLIE
# 109 "data/maps/Route119/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 110 "data/maps/Route119/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 111 "data/maps/Route119/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_UMBREON, 26, item = ITEM_NONE, nature = NATURE_HASTY, move1 = MOVE_SAND_ATTACK, move2 = MOVE_CONFUSE_RAY, move3 = MOVE_FAINT_ATTACK, move4 = MOVE_MEAN_LOOK
# 112 "data/maps/Route119/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_ESPEON, 25, item = ITEM_NONE, nature = NATURE_TIMID, move1 = MOVE_BITE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_SAND_ATTACK, move4 = MOVE_CONFUSION
# 113 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE01_GET
# 114 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE02_GET
# 115 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE03_GET
# 116 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE04_GET
# 117 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE05_GET
# 118 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE06_GET
# 119 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE07_GET
# 120 "data/maps/Route119/scripts.pory"
	setflag FLAG_BADGE08_GET
# 121 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 122 "data/maps/Route119/scripts.pory"
	warp MAP_ROUTE101, 23, 14
# 123 "data/maps/Route119/scripts.pory"
	waitstate
# 125 "data/maps/Route119/scripts.pory"
	releaseall
	end


# 133 "data/maps/Route119/scripts.pory"
SNAGGEM_LOOK_BEHIND:
# 134 "data/maps/Route119/scripts.pory"
	face_up
# 135 "data/maps/Route119/scripts.pory"
	step_end

# 139 "data/maps/Route119/scripts.pory"
Route119_Movement_CameraPanDown:
# 140 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 143 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 148 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route119/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route119/scripts.pory"
	step_end

# 154 "data/maps/Route119/scripts.pory"
Route119_Movement_CameraPanUp:
# 155 "data/maps/Route119/scripts.pory"
	walk_up
# 156 "data/maps/Route119/scripts.pory"
	walk_up
# 157 "data/maps/Route119/scripts.pory"
	walk_up
# 158 "data/maps/Route119/scripts.pory"
	walk_up
# 159 "data/maps/Route119/scripts.pory"
	walk_up
# 160 "data/maps/Route119/scripts.pory"
	walk_up
# 161 "data/maps/Route119/scripts.pory"
	walk_up
# 162 "data/maps/Route119/scripts.pory"
	walk_up
# 163 "data/maps/Route119/scripts.pory"
	step_end

# 167 "data/maps/Route119/scripts.pory"
Route119_Movement_WesRideLeft:
# 168 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119/scripts.pory"
	step_end

# 192 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 193 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 194 "data/maps/Route119/scripts.pory"
	end
# 195 "data/maps/Route119/scripts.pory"

# 196 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 197 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 198 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 199 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/Route119/scripts.pory"
	return
# 201 "data/maps/Route119/scripts.pory"

# 202 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 203 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 204 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 205 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 206 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_ROUTE119_INTRO_STATE, 0, Route119_EventScript_SetupIntroObjects
# 207 "data/maps/Route119/scripts.pory"
	end
# 208 "data/maps/Route119/scripts.pory"

# 209 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetupIntroObjects::
# 210 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_SNAGGEM_INTRO
# 211 "data/maps/Route119/scripts.pory"
	return
# 212 "data/maps/Route119/scripts.pory"

# 213 "data/maps/Route119/scripts.pory"

# 214 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 215 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 216 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 217 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 218 "data/maps/Route119/scripts.pory"
	return
# 219 "data/maps/Route119/scripts.pory"

# 220 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 221 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 222 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 223 "data/maps/Route119/scripts.pory"
	end
# 224 "data/maps/Route119/scripts.pory"

# 225 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 226 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 227 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 228 "data/maps/Route119/scripts.pory"
	end
# 229 "data/maps/Route119/scripts.pory"

# 230 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 231 "data/maps/Route119/scripts.pory"
	lockall
# 232 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 233 "data/maps/Route119/scripts.pory"
	checkplayergender
# 234 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 235 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 236 "data/maps/Route119/scripts.pory"
	delay 65
# 237 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 238 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 239 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route119/scripts.pory"
	delay 30
# 242 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 243 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 244 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 245 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 246 "data/maps/Route119/scripts.pory"
	delay 30
# 247 "data/maps/Route119/scripts.pory"
	checkplayergender
# 248 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 249 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 250 "data/maps/Route119/scripts.pory"
	releaseall
# 251 "data/maps/Route119/scripts.pory"
	end
# 252 "data/maps/Route119/scripts.pory"

# 253 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 254 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 255 "data/maps/Route119/scripts.pory"
	return
# 256 "data/maps/Route119/scripts.pory"

# 257 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 258 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 259 "data/maps/Route119/scripts.pory"
	return
# 260 "data/maps/Route119/scripts.pory"

# 261 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 262 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 263 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 264 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 265 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 266 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 267 "data/maps/Route119/scripts.pory"
	end
# 268 "data/maps/Route119/scripts.pory"

# 269 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 270 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 271 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 272 "data/maps/Route119/scripts.pory"
	end
# 273 "data/maps/Route119/scripts.pory"

# 274 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 275 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 276 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 277 "data/maps/Route119/scripts.pory"
	end
# 278 "data/maps/Route119/scripts.pory"

# 279 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 280 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 281 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 282 "data/maps/Route119/scripts.pory"
	end
# 283 "data/maps/Route119/scripts.pory"

# 284 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 285 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 286 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 287 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 288 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 289 "data/maps/Route119/scripts.pory"
	end
# 290 "data/maps/Route119/scripts.pory"

# 291 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 292 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 293 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 294 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 295 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 296 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 297 "data/maps/Route119/scripts.pory"
	end
# 298 "data/maps/Route119/scripts.pory"

# 299 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 300 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 301 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 302 "data/maps/Route119/scripts.pory"
	end
# 303 "data/maps/Route119/scripts.pory"

# 304 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 305 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 306 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 307 "data/maps/Route119/scripts.pory"
	end
# 308 "data/maps/Route119/scripts.pory"

# 309 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 310 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 311 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 312 "data/maps/Route119/scripts.pory"
	end
# 313 "data/maps/Route119/scripts.pory"

# 314 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 315 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 316 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 317 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 318 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 319 "data/maps/Route119/scripts.pory"
	end
# 320 "data/maps/Route119/scripts.pory"

# 321 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 322 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 323 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 324 "data/maps/Route119/scripts.pory"
	return
# 325 "data/maps/Route119/scripts.pory"

# 326 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 327 "data/maps/Route119/scripts.pory"
	closemessage
# 328 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 329 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 330 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 331 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 332 "data/maps/Route119/scripts.pory"
	delay 30
# 333 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 334 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 335 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 336 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 337 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 338 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 339 "data/maps/Route119/scripts.pory"
	delay 60
# 340 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 341 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 342 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 343 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 344 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 346 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 347 "data/maps/Route119/scripts.pory"
	closemessage
# 348 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 349 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 350 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 351 "data/maps/Route119/scripts.pory"
	releaseall
# 352 "data/maps/Route119/scripts.pory"
	end
# 353 "data/maps/Route119/scripts.pory"

# 354 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 355 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
# 356 "data/maps/Route119/scripts.pory"
	return
# 357 "data/maps/Route119/scripts.pory"

# 358 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 359 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
# 360 "data/maps/Route119/scripts.pory"
	return
# 361 "data/maps/Route119/scripts.pory"

# 362 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 363 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
# 364 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 365 "data/maps/Route119/scripts.pory"
	return
# 366 "data/maps/Route119/scripts.pory"

# 367 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 368 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
# 369 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route119/scripts.pory"
	return
# 371 "data/maps/Route119/scripts.pory"

# 372 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 373 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 374 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route119/scripts.pory"
	return
# 376 "data/maps/Route119/scripts.pory"

# 377 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 378 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 379 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route119/scripts.pory"
	return
# 381 "data/maps/Route119/scripts.pory"

# 382 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 383 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 384 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 385 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route119/scripts.pory"
	return
# 387 "data/maps/Route119/scripts.pory"

# 388 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 389 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 390 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 391 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route119/scripts.pory"
	return
# 393 "data/maps/Route119/scripts.pory"

# 394 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 395 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 396 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
# 397 "data/maps/Route119/scripts.pory"
	return
# 398 "data/maps/Route119/scripts.pory"

# 399 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 400 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 401 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
# 402 "data/maps/Route119/scripts.pory"
	return
# 403 "data/maps/Route119/scripts.pory"

# 404 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 405 "data/maps/Route119/scripts.pory"
	delay_16
# 406 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 407 "data/maps/Route119/scripts.pory"
	delay_8
# 408 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 409 "data/maps/Route119/scripts.pory"
	step_end
# 410 "data/maps/Route119/scripts.pory"

# 411 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 412 "data/maps/Route119/scripts.pory"
	delay_16
# 413 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 414 "data/maps/Route119/scripts.pory"
	delay_8
# 415 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 416 "data/maps/Route119/scripts.pory"
	step_end
# 417 "data/maps/Route119/scripts.pory"

# 418 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 419 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 420 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 421 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 422 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 423 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 424 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 425 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 426 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 427 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 428 "data/maps/Route119/scripts.pory"
	step_end
# 429 "data/maps/Route119/scripts.pory"

# 430 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 431 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 432 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 433 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 434 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 435 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 436 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 437 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 438 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 441 "data/maps/Route119/scripts.pory"
	step_end
# 442 "data/maps/Route119/scripts.pory"

# 443 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 444 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 445 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 446 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 447 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 448 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 449 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 450 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 451 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 452 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 453 "data/maps/Route119/scripts.pory"
	step_end
# 454 "data/maps/Route119/scripts.pory"

# 455 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 456 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 458 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 459 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 460 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 461 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 463 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 464 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 465 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 466 "data/maps/Route119/scripts.pory"
	step_end
# 467 "data/maps/Route119/scripts.pory"

# 468 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 469 "data/maps/Route119/scripts.pory"
	walk_down
# 470 "data/maps/Route119/scripts.pory"
	walk_down
# 471 "data/maps/Route119/scripts.pory"
	walk_down
# 472 "data/maps/Route119/scripts.pory"
	walk_down
# 473 "data/maps/Route119/scripts.pory"
	walk_left
# 474 "data/maps/Route119/scripts.pory"
	walk_left
# 475 "data/maps/Route119/scripts.pory"
	walk_down
# 476 "data/maps/Route119/scripts.pory"
	step_end
# 477 "data/maps/Route119/scripts.pory"

# 478 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 479 "data/maps/Route119/scripts.pory"
	walk_up
# 480 "data/maps/Route119/scripts.pory"
	walk_right
# 481 "data/maps/Route119/scripts.pory"
	walk_right
# 482 "data/maps/Route119/scripts.pory"
	walk_up
# 483 "data/maps/Route119/scripts.pory"
	walk_up
# 484 "data/maps/Route119/scripts.pory"
	walk_up
# 485 "data/maps/Route119/scripts.pory"
	walk_up
# 486 "data/maps/Route119/scripts.pory"
	walk_up
# 487 "data/maps/Route119/scripts.pory"
	step_end
# 488 "data/maps/Route119/scripts.pory"

# 489 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 490 "data/maps/Route119/scripts.pory"
	walk_up
# 491 "data/maps/Route119/scripts.pory"
	walk_right
# 492 "data/maps/Route119/scripts.pory"
	walk_up
# 493 "data/maps/Route119/scripts.pory"
	walk_up
# 494 "data/maps/Route119/scripts.pory"
	walk_up
# 495 "data/maps/Route119/scripts.pory"
	walk_up
# 496 "data/maps/Route119/scripts.pory"
	walk_up
# 497 "data/maps/Route119/scripts.pory"
	step_end
# 498 "data/maps/Route119/scripts.pory"

# 499 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 500 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 501 "data/maps/Route119/scripts.pory"
	end
# 502 "data/maps/Route119/scripts.pory"

# 503 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 504 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 505 "data/maps/Route119/scripts.pory"
	end
# 506 "data/maps/Route119/scripts.pory"

# 507 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 508 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 509 "data/maps/Route119/scripts.pory"
	end
# 510 "data/maps/Route119/scripts.pory"

# 511 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 512 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 513 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route119/scripts.pory"
	end
# 515 "data/maps/Route119/scripts.pory"

# 516 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 517 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 518 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/Route119/scripts.pory"
	end
# 520 "data/maps/Route119/scripts.pory"

# 521 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 522 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 523 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/Route119/scripts.pory"
	end
# 525 "data/maps/Route119/scripts.pory"

# 526 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 527 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 528 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 529 "data/maps/Route119/scripts.pory"
	end
# 530 "data/maps/Route119/scripts.pory"

# 531 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 532 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 533 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 534 "data/maps/Route119/scripts.pory"
	end
# 535 "data/maps/Route119/scripts.pory"

# 536 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 537 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 538 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 539 "data/maps/Route119/scripts.pory"
	end
# 540 "data/maps/Route119/scripts.pory"

# 541 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 542 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 543 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 544 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 545 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 546 "data/maps/Route119/scripts.pory"
	release
# 547 "data/maps/Route119/scripts.pory"
	end
# 548 "data/maps/Route119/scripts.pory"

# 549 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 550 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 551 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 552 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 553 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 554 "data/maps/Route119/scripts.pory"
	release
# 555 "data/maps/Route119/scripts.pory"
	end
# 556 "data/maps/Route119/scripts.pory"

# 557 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 558 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 559 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route119/scripts.pory"
	end
# 561 "data/maps/Route119/scripts.pory"

# 562 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 563 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 564 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 565 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 566 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 567 "data/maps/Route119/scripts.pory"
	release
# 568 "data/maps/Route119/scripts.pory"
	end
# 569 "data/maps/Route119/scripts.pory"

# 570 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 571 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 572 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 574 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 575 "data/maps/Route119/scripts.pory"
	release
# 576 "data/maps/Route119/scripts.pory"
	end
# 577 "data/maps/Route119/scripts.pory"

# 578 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 579 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 580 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 581 "data/maps/Route119/scripts.pory"
	end
# 582 "data/maps/Route119/scripts.pory"

# 583 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 584 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 585 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 586 "data/maps/Route119/scripts.pory"
	end
# 587 "data/maps/Route119/scripts.pory"

# 588 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 589 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 590 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 591 "data/maps/Route119/scripts.pory"
	end
# 592 "data/maps/Route119/scripts.pory"

# 593 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 594 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 595 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 596 "data/maps/Route119/scripts.pory"
	end
# 597 "data/maps/Route119/scripts.pory"

# 598 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 599 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 600 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 601 "data/maps/Route119/scripts.pory"
	end
# 602 "data/maps/Route119/scripts.pory"

# 603 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 604 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 605 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 606 "data/maps/Route119/scripts.pory"
	end
# 607 "data/maps/Route119/scripts.pory"

# 608 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 609 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 610 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 611 "data/maps/Route119/scripts.pory"
	end
# 612 "data/maps/Route119/scripts.pory"

# 613 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 614 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 615 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 616 "data/maps/Route119/scripts.pory"
	end
# 617 "data/maps/Route119/scripts.pory"

# 618 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 619 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 620 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 621 "data/maps/Route119/scripts.pory"
	end
# 622 "data/maps/Route119/scripts.pory"

# 623 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 624 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 625 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 626 "data/maps/Route119/scripts.pory"
	end
# 627 "data/maps/Route119/scripts.pory"

# 628 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 629 "data/maps/Route119/scripts.pory"
	lock
# 630 "data/maps/Route119/scripts.pory"
	faceplayer
# 631 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 632 "data/maps/Route119/scripts.pory"
	closemessage
# 633 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 634 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route119/scripts.pory"
	release
# 636 "data/maps/Route119/scripts.pory"
	end
# 637 "data/maps/Route119/scripts.pory"

# 638 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 639 "data/maps/Route119/scripts.pory"
	lock
# 640 "data/maps/Route119/scripts.pory"
	faceplayer
# 641 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 642 "data/maps/Route119/scripts.pory"
	closemessage
# 643 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 644 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route119/scripts.pory"
	release
# 646 "data/maps/Route119/scripts.pory"
	end
# 647 "data/maps/Route119/scripts.pory"

# 648 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 649 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 650 "data/maps/Route119/scripts.pory"
	end
# 651 "data/maps/Route119/scripts.pory"

# 652 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 653 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 654 "data/maps/Route119/scripts.pory"
	end
# 655 "data/maps/Route119/scripts.pory"

# 656 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 657 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 658 "data/maps/Route119/scripts.pory"
	end
# 659 "data/maps/Route119/scripts.pory"

# 660 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 661 "data/maps/Route119/scripts.pory"
	lockall
# 662 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 663 "data/maps/Route119/scripts.pory"
	waitmessage
# 664 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 665 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 666 "data/maps/Route119/scripts.pory"
	releaseall
# 667 "data/maps/Route119/scripts.pory"
	end
# 668 "data/maps/Route119/scripts.pory"

# 669 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 670 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 671 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 672 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 673 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 674 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 675 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 676 "data/maps/Route119/scripts.pory"

# 677 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 678 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 679 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 680 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 681 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 682 "data/maps/Route119/scripts.pory"

# 683 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 684 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 685 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 686 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 687 "data/maps/Route119/scripts.pory"

# 688 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 689 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 690 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 691 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 692 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 693 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 694 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 695 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 696 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 697 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 698 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 699 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 700 "data/maps/Route119/scripts.pory"

# 701 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 702 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 703 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 704 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 705 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 706 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 707 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 708 "data/maps/Route119/scripts.pory"

# 709 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 710 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 711 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 712 "data/maps/Route119/scripts.pory"

# 713 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 714 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 715 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 716 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 717 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 718 "data/maps/Route119/scripts.pory"

# 719 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 720 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 721 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 722 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 723 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 724 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 725 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 726 "data/maps/Route119/scripts.pory"

# 727 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 728 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 729 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 730 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 731 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 732 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 733 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 734 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 735 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 736 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 737 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 738 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 739 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 740 "data/maps/Route119/scripts.pory"

# 741 "data/maps/Route119/scripts.pory"

# 742 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 743 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 744 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 745 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 746 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 747 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 748 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 749 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 750 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 751 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 752 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 753 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 754 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 755 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 756 "data/maps/Route119/scripts.pory"

# 757 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 758 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 759 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 760 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 761 "data/maps/Route119/scripts.pory"

# 762 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 763 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 764 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 765 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 766 "data/maps/Route119/scripts.pory"

# 767 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 768 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 769 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 770 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 771 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 772 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 773 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 774 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 775 "data/maps/Route119/scripts.pory"

# 776 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 777 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 778 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 779 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 780 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 781 "data/maps/Route119/scripts.pory"

# 782 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 783 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 784 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 785 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 786 "data/maps/Route119/scripts.pory"

# 787 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 788 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 789 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 790 "data/maps/Route119/scripts.pory"

# 791 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 792 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 793 "data/maps/Route119/scripts.pory"

# 794 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 795 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 796 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 797 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 798 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 799 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 800 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 801 "data/maps/Route119/scripts.pory"
	.string "way you want.$"

Route119_EventScript_IntroCutscene_Text_0:
# 75 "data/maps/Route119/scripts.pory"
	.string "...$"
