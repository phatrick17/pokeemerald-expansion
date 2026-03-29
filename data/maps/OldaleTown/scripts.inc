Script_PhenacCity_Intro::
# 2 "data/maps/OldaleTown/scripts.pory"
	lockall
# 3 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_0
# 6 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 7 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_1
# 23 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_1
# 26 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Common_Movement_ExclamationMark
# 27 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Common_Movement_ExclamationMark
# 28 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 29 "data/maps/OldaleTown/scripts.pory"
	waitse
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_2
# 38 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_3
# 44 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_1, Script_PhenacCity_Intro_Text_3
# 57 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 58 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_4, MSGBOX_DEFAULT
# 63 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Common_Movement_ExclamationMark
# 64 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 65 "data/maps/OldaleTown/scripts.pory"
	waitse
# 67 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_5, MSGBOX_DEFAULT
# 74 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Script_PhenacCity_Intro_Movement_4
# 80 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_5
# 85 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_0
# 88 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_0
# 89 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_6, MSGBOX_DEFAULT
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_1
# 104 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_7, MSGBOX_DEFAULT
# 112 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_6
# 117 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_7
# 120 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_TRUDLY_1
# 123 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_FOLLY_1
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_8
# 128 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Script_PhenacCity_Intro_Movement_9
# 134 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_8, MSGBOX_DEFAULT
# 144 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_9, MSGBOX_DEFAULT
# 150 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 152 "data/maps/OldaleTown/scripts.pory"
	waitse
# 153 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI_IN_BAG
# 154 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_RUI
# 156 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_10
# 160 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 164 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Common_Movement_ExclamationMark
# 165 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Common_Movement_ExclamationMark
# 166 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 167 "data/maps/OldaleTown/scripts.pory"
	waitse
# 169 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_10, MSGBOX_DEFAULT
# 179 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_11, MSGBOX_DEFAULT
# 191 "data/maps/OldaleTown/scripts.pory"
	special DoRivalNameChoiceScreen
# 192 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_12, MSGBOX_DEFAULT
# 203 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_11
# 204 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_13, MSGBOX_DEFAULT
# 216 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_9
# 217 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_14, MSGBOX_DEFAULT
# 233 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_1
# 234 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_15, MSGBOX_DEFAULT
# 242 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
# 244 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_16, MSGBOX_DEFAULT
# 253 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_17, MSGBOX_DEFAULT
# 257 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_EVOLVED
# 258 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 260 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 262 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/OldaleTown/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, FNPC_ALL
# 264 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 265 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_12
# 268 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 270 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_FOLLY_1
# 271 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Script_AskEscortRival::
# 276 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_0, MSGBOX_YESNO
# 281 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_AskEscortRival_1
	return

Script_AskEscortRival_1:
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
	return


# 293 "data/maps/OldaleTown/scripts.pory"

# 294 "data/maps/OldaleTown/scripts.pory"

# 295 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 296 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_OnFrame
# 297 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 298 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 299 "data/maps/OldaleTown/scripts.pory"

# 300 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnFrame:
# 301 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, OldaleTown_EventScript_RunPhenacIntro
# 302 "data/maps/OldaleTown/scripts.pory"
	.2byte 0
# 303 "data/maps/OldaleTown/scripts.pory"

# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 306 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 307 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 308 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 309 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 310 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 311 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_CAR_AND_BAG_OUTSKIRT, OldaleTown_EventScript_HidePhenacRui
# 312 "data/maps/OldaleTown/scripts.pory"
    goto_if_set FLAG_PHENAC_FOLLY_1, OldaleTown_EventScript_EndTransition
# 313 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 314 "data/maps/OldaleTown/scripts.pory"
	end
# 315 "data/maps/OldaleTown/scripts.pory"

# 316 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_EndTransition:
# 317 "data/maps/OldaleTown/scripts.pory"
	end
# 318 "data/maps/OldaleTown/scripts.pory"

# 319 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RunPhenacIntro::
# 320 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 321 "data/maps/OldaleTown/scripts.pory"
	call Script_PhenacCity_Intro
# 322 "data/maps/OldaleTown/scripts.pory"
	return
# 323 "data/maps/OldaleTown/scripts.pory"

# 324 "data/maps/OldaleTown/scripts.pory"

# 325 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_HidePhenacRui::
# 326 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 327 "data/maps/OldaleTown/scripts.pory"
	return
# 328 "data/maps/OldaleTown/scripts.pory"

# 329 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 330 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 331 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 332 "data/maps/OldaleTown/scripts.pory"
	return
# 333 "data/maps/OldaleTown/scripts.pory"

# 334 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 335 "data/maps/OldaleTown/scripts.pory"
	return
# 336 "data/maps/OldaleTown/scripts.pory"

# 337 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 338 "data/maps/OldaleTown/scripts.pory"
	return
# 339 "data/maps/OldaleTown/scripts.pory"

# 340 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 341 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 342 "data/maps/OldaleTown/scripts.pory"
	end
# 343 "data/maps/OldaleTown/scripts.pory"

# 344 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 345 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 346 "data/maps/OldaleTown/scripts.pory"
	end
# 347 "data/maps/OldaleTown/scripts.pory"

# 348 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 349 "data/maps/OldaleTown/scripts.pory"
	lock
# 350 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 351 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 352 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 353 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 354 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 355 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 356 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 357 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 358 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 359 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 360 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 361 "data/maps/OldaleTown/scripts.pory"
	end
# 362 "data/maps/OldaleTown/scripts.pory"

# 363 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 364 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 365 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 366 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 368 "data/maps/OldaleTown/scripts.pory"
	end
# 369 "data/maps/OldaleTown/scripts.pory"

# 370 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 371 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 372 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 373 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 375 "data/maps/OldaleTown/scripts.pory"
	end
# 376 "data/maps/OldaleTown/scripts.pory"

# 377 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 378 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 379 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 380 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 381 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 382 "data/maps/OldaleTown/scripts.pory"
	end
# 383 "data/maps/OldaleTown/scripts.pory"

# 384 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 385 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 386 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 387 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 388 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 389 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 390 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 391 "data/maps/OldaleTown/scripts.pory"
	release
# 392 "data/maps/OldaleTown/scripts.pory"
	end
# 393 "data/maps/OldaleTown/scripts.pory"

# 394 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 395 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 396 "data/maps/OldaleTown/scripts.pory"
	release
# 397 "data/maps/OldaleTown/scripts.pory"
	end
# 398 "data/maps/OldaleTown/scripts.pory"

# 399 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 400 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 401 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 402 "data/maps/OldaleTown/scripts.pory"
	release
# 403 "data/maps/OldaleTown/scripts.pory"
	end
# 404 "data/maps/OldaleTown/scripts.pory"

# 405 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 406 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 409 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 410 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 413 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 414 "data/maps/OldaleTown/scripts.pory"
	step_end
# 415 "data/maps/OldaleTown/scripts.pory"

# 416 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 417 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 418 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 419 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 420 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 421 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 422 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 423 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 424 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 425 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 426 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 427 "data/maps/OldaleTown/scripts.pory"
	step_end
# 428 "data/maps/OldaleTown/scripts.pory"

# 429 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 430 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 431 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 432 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 433 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 434 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 435 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 436 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 438 "data/maps/OldaleTown/scripts.pory"
	step_end
# 439 "data/maps/OldaleTown/scripts.pory"

# 440 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 441 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 443 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 444 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 445 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 446 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 447 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 448 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 449 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 450 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 452 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 453 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 454 "data/maps/OldaleTown/scripts.pory"
	step_end
# 455 "data/maps/OldaleTown/scripts.pory"

# 456 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 457 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 458 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 459 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 460 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 461 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 462 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 463 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 464 "data/maps/OldaleTown/scripts.pory"
	step_end
# 465 "data/maps/OldaleTown/scripts.pory"

# 466 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 467 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 468 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 469 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 470 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 472 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 473 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 474 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 475 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 476 "data/maps/OldaleTown/scripts.pory"
	step_end
# 477 "data/maps/OldaleTown/scripts.pory"

# 478 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 479 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 480 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 481 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 482 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 483 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 484 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 485 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 486 "data/maps/OldaleTown/scripts.pory"
	step_end
# 487 "data/maps/OldaleTown/scripts.pory"

# 488 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 489 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 490 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 491 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 492 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 493 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 494 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 495 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 496 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 497 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 499 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 500 "data/maps/OldaleTown/scripts.pory"
	step_end
# 501 "data/maps/OldaleTown/scripts.pory"

# 502 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 503 "data/maps/OldaleTown/scripts.pory"
	lock
# 504 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 505 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 506 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 507 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 508 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 509 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/OldaleTown/scripts.pory"
	release
# 511 "data/maps/OldaleTown/scripts.pory"
	end
# 512 "data/maps/OldaleTown/scripts.pory"

# 513 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 514 "data/maps/OldaleTown/scripts.pory"
	lockall
# 515 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 516 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 517 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 519 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 520 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 521 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 523 "data/maps/OldaleTown/scripts.pory"
	end
# 524 "data/maps/OldaleTown/scripts.pory"

# 525 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 526 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 527 "data/maps/OldaleTown/scripts.pory"
	release
# 528 "data/maps/OldaleTown/scripts.pory"
	end
# 529 "data/maps/OldaleTown/scripts.pory"

# 530 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 531 "data/maps/OldaleTown/scripts.pory"
	lockall
# 532 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 533 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 535 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 536 "data/maps/OldaleTown/scripts.pory"
	end
# 537 "data/maps/OldaleTown/scripts.pory"

# 538 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 539 "data/maps/OldaleTown/scripts.pory"
	lockall
# 540 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 541 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 542 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 543 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 545 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 546 "data/maps/OldaleTown/scripts.pory"
	end
# 547 "data/maps/OldaleTown/scripts.pory"

# 548 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 549 "data/maps/OldaleTown/scripts.pory"
	lockall
# 550 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 551 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 555 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 556 "data/maps/OldaleTown/scripts.pory"
	end
# 557 "data/maps/OldaleTown/scripts.pory"

# 558 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 559 "data/maps/OldaleTown/scripts.pory"
	lockall
# 560 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 561 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 563 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 565 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 566 "data/maps/OldaleTown/scripts.pory"
	end
# 567 "data/maps/OldaleTown/scripts.pory"

# 568 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 569 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 570 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 571 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 572 "data/maps/OldaleTown/scripts.pory"
	end
# 573 "data/maps/OldaleTown/scripts.pory"

# 574 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 575 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 576 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 577 "data/maps/OldaleTown/scripts.pory"
	end
# 578 "data/maps/OldaleTown/scripts.pory"

# 579 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 580 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 581 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 582 "data/maps/OldaleTown/scripts.pory"
	end
# 583 "data/maps/OldaleTown/scripts.pory"

# 584 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 585 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 586 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 587 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 588 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 589 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 591 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 592 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 593 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 594 "data/maps/OldaleTown/scripts.pory"
	end
# 595 "data/maps/OldaleTown/scripts.pory"

# 596 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 597 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 598 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 599 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/OldaleTown/scripts.pory"
	return
# 601 "data/maps/OldaleTown/scripts.pory"

# 602 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 603 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 604 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 605 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/OldaleTown/scripts.pory"
	return
# 607 "data/maps/OldaleTown/scripts.pory"

# 608 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 609 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 610 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 611 "data/maps/OldaleTown/scripts.pory"
	step_end
# 612 "data/maps/OldaleTown/scripts.pory"

# 613 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 614 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 615 "data/maps/OldaleTown/scripts.pory"
	step_end
# 616 "data/maps/OldaleTown/scripts.pory"

# 617 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 618 "data/maps/OldaleTown/scripts.pory"
	face_left
# 619 "data/maps/OldaleTown/scripts.pory"
	step_end
# 620 "data/maps/OldaleTown/scripts.pory"

# 621 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 622 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 623 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 624 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 625 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 626 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 627 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 628 "data/maps/OldaleTown/scripts.pory"
	step_end
# 629 "data/maps/OldaleTown/scripts.pory"

# 630 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 631 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 632 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 633 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 634 "data/maps/OldaleTown/scripts.pory"
	step_end
# 635 "data/maps/OldaleTown/scripts.pory"

# 636 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 637 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 638 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 639 "data/maps/OldaleTown/scripts.pory"
	step_end
# 640 "data/maps/OldaleTown/scripts.pory"

# 641 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 642 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 643 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 644 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 645 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 646 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 647 "data/maps/OldaleTown/scripts.pory"
	step_end
# 648 "data/maps/OldaleTown/scripts.pory"

# 649 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 650 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 651 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 652 "data/maps/OldaleTown/scripts.pory"
	step_end
# 653 "data/maps/OldaleTown/scripts.pory"

# 654 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 655 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 656 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 657 "data/maps/OldaleTown/scripts.pory"

# 658 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 659 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 660 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 661 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 662 "data/maps/OldaleTown/scripts.pory"

# 663 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 664 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 665 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 666 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 667 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 669 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 670 "data/maps/OldaleTown/scripts.pory"

# 671 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 672 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 673 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 674 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 675 "data/maps/OldaleTown/scripts.pory"

# 676 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 677 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 678 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 679 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 680 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 681 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 682 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 683 "data/maps/OldaleTown/scripts.pory"

# 684 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 685 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 686 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 688 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 689 "data/maps/OldaleTown/scripts.pory"

# 690 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 691 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 692 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 693 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 694 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 695 "data/maps/OldaleTown/scripts.pory"

# 696 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 697 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 698 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 699 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 700 "data/maps/OldaleTown/scripts.pory"

# 701 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 702 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 703 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 704 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 705 "data/maps/OldaleTown/scripts.pory"

# 706 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 707 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 708 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

# 3 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_0:
# 4 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 20 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_1:
# 21 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 35 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_2:
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_3:
# 39 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 39 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 39 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 40 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 41 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 74 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_4:
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 76 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 77 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 78 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 80 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_5:
# 81 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 82 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 82 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 83 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 113 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_6:
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_7:
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 125 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_8:
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_9:
# 131 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 156 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_10:
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 158 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 203 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_11:
# 203 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 265 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_12:
# 266 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

Script_PhenacCity_Intro_Text_0:
# 8 "data/maps/OldaleTown/scripts.pory"
	.string "???: Hey, what are you doing? Get a\n"
	.string "grip, man!\p"
	.string "???: Yeah, you say that, but this...\n"
	.string "It won't stop squirming.\l"
	.string "Makes it tough to hold on.\p"
	.string "???: Okay, okay. Settle down in there.\n"
	.string "Just be quiet for a little while longer.\p"
	.string "BAG: Mgflpmmmgg... Beh!\n"
	.string "Help! Someone let me out!\l"
	.string "Kidnappers!\p"
	.string "???: Tch! The tape didn't keep her yap\n"
	.string "shut!\p"
	.string "???: Hey! Quit your Shouting!$"

Script_PhenacCity_Intro_Text_1:
# 31 "data/maps/OldaleTown/scripts.pory"
	.string "???: Oh, drat!\n"
	.string "Did that punk there hear all of that?$"

Script_PhenacCity_Intro_Text_2:
# 47 "data/maps/OldaleTown/scripts.pory"
	.string "???: Since you overheard us, we don't\n"
	.string "have any choice.\p"
	.string "Blame it on your own bad luck!$"

Script_PhenacCity_Intro_Text_3:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: Gaah!\n"
	.string "You're tougher than you look!$"

Script_PhenacCity_Intro_Text_4:
# 59 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: You took out my Whismur...\n"
	.string "You're no ordinary trainer, are you?!$"

Script_PhenacCity_Intro_Text_5:
# 68 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: Huh? Wait a sec...\n"
	.string "That face...\l"
	.string "Might you be...\l"
	.string "Team Snagem's...$"

Script_PhenacCity_Intro_Text_6:
# 92 "data/maps/OldaleTown/scripts.pory"
	.string "What, what?! What's going on out here?!\p"
	.string "BAG: Eeeek! Somebody!\n"
	.string "Robbers! They're Robbers!\p"
	.string "???: Y-You be quiet!\n"
	.string "We're no robbers!\l"
	.string "We're kidnappers!\l"
	.string "Get it? Kidnappers!\p"
	.string "Folly: Wha... You dingbat!\n"
	.string "Don't shoot off your mouth!$"

Script_PhenacCity_Intro_Text_7:
# 107 "data/maps/OldaleTown/scripts.pory"
	.string "Don't get all happy just on\n"
	.string "account of winning this once.\p"
	.string "The next time we meet, I'll trash\n"
	.string "you, your POKéMON, and all!$"

Script_PhenacCity_Intro_Text_8:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, yuck!\n"
	.string "There's someone inside there!\l"
	.string "Gah! This is tied good and tight.\p"
	.string "Can you believe those people?\n"
	.string "What a horrible thing to do!\p"
	.string "Can you give this rope a tug from\n"
	.string "the other side?$"

Script_PhenacCity_Intro_Text_9:
# 145 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER} tugged hard on the tightly\n"
	.string "knotted rope.\p"
	.string "The knot gradually loosened.$"

Script_PhenacCity_Intro_Text_10:
# 170 "data/maps/OldaleTown/scripts.pory"
	.string "???: Phew! Thank goodness!\n"
	.string "I'm saved!\p"
	.string "...Where is this? Where did those\n"
	.string "two bring me?\p"
	.string "Lady: This is Phenac City, the opulent\n"
	.string "city of water.\p"
	.string "This person saved you from those\n"
	.string "thugs.$"

Script_PhenacCity_Intro_Text_11:
# 180 "data/maps/OldaleTown/scripts.pory"
	.string "Man: The way he battled those goons,\n"
	.string "it was truly superb.\l"
	.string "I wish you could've seen it.\p"
	.string "???: Oh! Is that so?\n"
	.string "Thank you!\p"
	.string "And... Uh... you are?\p"
	.string "Oh!\n"
	.string "So you're named {PLAYER}!\l"
	.string "I am...$"

Script_PhenacCity_Intro_Text_12:
# 195 "data/maps/OldaleTown/scripts.pory"
	.string "My name's {RIVAL}!\n"
	.string "I'm sure glad I met you!\p"
	.string "{RIVAL}: I was in the neighboring\n"
	.string "town when those two grabbed me...\p"
	.string "Oh! Those guys, did they use\n"
	.string "a peculiar POKéMON?$"

Script_PhenacCity_Intro_Text_13:
# 207 "data/maps/OldaleTown/scripts.pory"
	.string "Guy: A peculiar POkéMON?\n"
	.string "No, they looked ordinary to me.\l"
	.string "What do you mean by peculiar\l"
	.string "POkéMON?\p"
	.string "{RIVAL}: Oh...\n"
	.string "No...\l"
	.string "No, that's fine, then.$"

Script_PhenacCity_Intro_Text_14:
# 220 "data/maps/OldaleTown/scripts.pory"
	.string "Lady: Well, it's easy to see something's\n"
	.string "on your mind. You should go see our\l"
	.string "Mayor for his advice.\p"
	.string "He's a very kind person, I'm sure he'll\n"
	.string "be able to help you somehow.\p"
	.string "The Mayor's house is close from the\n"
	.string "town square here.\p"
	.string "Go up the stairs north and it's\n"
	.string "to your left.\p"
	.string "{RIVAL}: The Mayor! That's true.\n"
	.string "The Mayor might know something!$"

Script_PhenacCity_Intro_Text_15:
# 237 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Hey {PLAYER}...\n"
	.string "I know I'm imposing, but I don't have\l"
	.string "anyone else that I can turn to.$"

Script_PhenacCity_Intro_Text_16:
# 245 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Thank you, {PLAYER}!\n"
	.string "Eheh, I thought you might say that!\p"
	.string "If you're with me, {PLAYER}, it doesn't\n"
	.string "matter if those guys come back again!\p"
	.string "Thank you!\n"
	.string "Thanks for joining me for a while!$"

Script_PhenacCity_Intro_Text_17:
# 254 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL} became a partner!$"

Script_AskEscortRival_Text_0:
# 277 "data/maps/OldaleTown/scripts.pory"
	.string "Please can I get you to escort me\n"
	.string "for a while?$"

Script_AskEscortRival_Text_1:
# 283 "data/maps/OldaleTown/scripts.pory"
	.string "I don't have anyone else that I can\n"
	.string "turn to.$"
