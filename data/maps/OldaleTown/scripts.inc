Script_PhenacCity_Intro::
# 2 "data/maps/OldaleTown/scripts.pory"
	lockall
# 4 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_NONE, false
# 7 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_0
# 23 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_0
# 26 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Common_Movement_ExclamationMark
# 27 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Common_Movement_ExclamationMark
# 28 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXCLAIM
# 29 "data/maps/OldaleTown/scripts.pory"
	waitse
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_1
# 40 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_2
# 43 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_0
# 62 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXCLAIM
# 63 "data/maps/OldaleTown/scripts.pory"
	waitse
# 65 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_4, MSGBOX_DEFAULT
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Script_PhenacCity_Intro_Movement_3
# 76 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_4
# 81 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_5
# 84 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_5
# 85 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_5, MSGBOX_DEFAULT
# 99 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_0
# 100 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_6, MSGBOX_DEFAULT
# 109 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_6
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_7
# 116 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_TRUDLY_1
# 119 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_FOLLY_1
# 121 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_8
# 124 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_7, MSGBOX_DEFAULT
# 136 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_8, MSGBOX_DEFAULT
# 142 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI_IN_BAG
# 144 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_RUI
# 146 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_9
# 150 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Common_Movement_ExclamationMark
# 155 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Common_Movement_ExclamationMark
# 156 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXCLAIM
# 157 "data/maps/OldaleTown/scripts.pory"
	waitse
# 159 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_9, MSGBOX_DEFAULT
# 169 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_10, MSGBOX_DEFAULT
# 181 "data/maps/OldaleTown/scripts.pory"
	special DoRivalNameChoiceScreen
# 182 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 184 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_11, MSGBOX_DEFAULT
# 193 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_5
# 194 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_12, MSGBOX_DEFAULT
# 206 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_10
# 207 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_13, MSGBOX_DEFAULT
# 222 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_0
# 223 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
# 227 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_14, MSGBOX_DEFAULT
# 237 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_15, MSGBOX_DEFAULT
# 241 "data/maps/OldaleTown/scripts.pory"
	playse SE_ITEM
# 242 "data/maps/OldaleTown/scripts.pory"
	waitse
# 245 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_ARENA, false
# 247 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 248 "data/maps/OldaleTown/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, FNPC_ALL_LAND
# 249 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 250 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 251 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_FOLLY_1
# 252 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Script_AskEscortRival::
# 257 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_0, MSGBOX_YESNO
# 265 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_AskEscortRival_1
	return

Script_AskEscortRival_1:
# 266 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_1, MSGBOX_DEFAULT
# 270 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
	return


# 275 "data/maps/OldaleTown/scripts.pory"

# 276 "data/maps/OldaleTown/scripts.pory"

# 277 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 278 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 279 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 280 "data/maps/OldaleTown/scripts.pory"

# 281 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 282 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 283 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 284 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 285 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 286 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 287 "data/maps/OldaleTown/scripts.pory"
    call_if_unset FLAG_PHENAC_FOLLY_1, Script_PhenacCity_Intro
# 288 "data/maps/OldaleTown/scripts.pory"
	end
# 289 "data/maps/OldaleTown/scripts.pory"

# 290 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 291 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 292 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 293 "data/maps/OldaleTown/scripts.pory"
	return
# 294 "data/maps/OldaleTown/scripts.pory"

# 295 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 296 "data/maps/OldaleTown/scripts.pory"
	return
# 297 "data/maps/OldaleTown/scripts.pory"

# 298 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 299 "data/maps/OldaleTown/scripts.pory"
	return
# 300 "data/maps/OldaleTown/scripts.pory"

# 301 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 302 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 303 "data/maps/OldaleTown/scripts.pory"
	end
# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 306 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 307 "data/maps/OldaleTown/scripts.pory"
	end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 310 "data/maps/OldaleTown/scripts.pory"
	lock
# 311 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 312 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 313 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 314 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 315 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 316 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 317 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 318 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 319 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 320 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 321 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 322 "data/maps/OldaleTown/scripts.pory"
	end
# 323 "data/maps/OldaleTown/scripts.pory"

# 324 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 325 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 326 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 327 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 328 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 329 "data/maps/OldaleTown/scripts.pory"
	end
# 330 "data/maps/OldaleTown/scripts.pory"

# 331 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 332 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 333 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 334 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 335 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 336 "data/maps/OldaleTown/scripts.pory"
	end
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 339 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 340 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 341 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 343 "data/maps/OldaleTown/scripts.pory"
	end
# 344 "data/maps/OldaleTown/scripts.pory"

# 345 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 346 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 347 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 348 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 349 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 350 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 351 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 352 "data/maps/OldaleTown/scripts.pory"
	release
# 353 "data/maps/OldaleTown/scripts.pory"
	end
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 356 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 357 "data/maps/OldaleTown/scripts.pory"
	release
# 358 "data/maps/OldaleTown/scripts.pory"
	end
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 361 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 362 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 363 "data/maps/OldaleTown/scripts.pory"
	release
# 364 "data/maps/OldaleTown/scripts.pory"
	end
# 365 "data/maps/OldaleTown/scripts.pory"

# 366 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 367 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 369 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 370 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 371 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 372 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 373 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 374 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 375 "data/maps/OldaleTown/scripts.pory"
	step_end
# 376 "data/maps/OldaleTown/scripts.pory"

# 377 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 378 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 379 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 380 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 381 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 382 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 383 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 384 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 386 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 388 "data/maps/OldaleTown/scripts.pory"
	step_end
# 389 "data/maps/OldaleTown/scripts.pory"

# 390 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 391 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 393 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 394 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 395 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 396 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 397 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 398 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/OldaleTown/scripts.pory"
	step_end
# 400 "data/maps/OldaleTown/scripts.pory"

# 401 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 402 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 403 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 404 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 405 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 406 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
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
	delay_8
# 414 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 415 "data/maps/OldaleTown/scripts.pory"
	step_end
# 416 "data/maps/OldaleTown/scripts.pory"

# 417 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 418 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 419 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 420 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 421 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 422 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 423 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 424 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 425 "data/maps/OldaleTown/scripts.pory"
	step_end
# 426 "data/maps/OldaleTown/scripts.pory"

# 427 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 428 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 429 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 430 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 431 "data/maps/OldaleTown/scripts.pory"
	delay_16
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
	step_end
# 438 "data/maps/OldaleTown/scripts.pory"

# 439 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 440 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 441 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 443 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 444 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 445 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 446 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 447 "data/maps/OldaleTown/scripts.pory"
	step_end
# 448 "data/maps/OldaleTown/scripts.pory"

# 449 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 450 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 452 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 453 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 454 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 455 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 457 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 458 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 459 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 460 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 461 "data/maps/OldaleTown/scripts.pory"
	step_end
# 462 "data/maps/OldaleTown/scripts.pory"

# 463 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 464 "data/maps/OldaleTown/scripts.pory"
	lock
# 465 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 466 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 467 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 468 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 469 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 470 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/OldaleTown/scripts.pory"
	release
# 472 "data/maps/OldaleTown/scripts.pory"
	end
# 473 "data/maps/OldaleTown/scripts.pory"

# 474 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 475 "data/maps/OldaleTown/scripts.pory"
	lockall
# 476 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 477 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 478 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 480 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 481 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 482 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 483 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 484 "data/maps/OldaleTown/scripts.pory"
	end
# 485 "data/maps/OldaleTown/scripts.pory"

# 486 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 487 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 488 "data/maps/OldaleTown/scripts.pory"
	release
# 489 "data/maps/OldaleTown/scripts.pory"
	end
# 490 "data/maps/OldaleTown/scripts.pory"

# 491 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 492 "data/maps/OldaleTown/scripts.pory"
	lockall
# 493 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 494 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 495 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 496 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 497 "data/maps/OldaleTown/scripts.pory"
	end
# 498 "data/maps/OldaleTown/scripts.pory"

# 499 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 500 "data/maps/OldaleTown/scripts.pory"
	lockall
# 501 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 502 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 504 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 506 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 507 "data/maps/OldaleTown/scripts.pory"
	end
# 508 "data/maps/OldaleTown/scripts.pory"

# 509 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 510 "data/maps/OldaleTown/scripts.pory"
	lockall
# 511 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 512 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 514 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 516 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 517 "data/maps/OldaleTown/scripts.pory"
	end
# 518 "data/maps/OldaleTown/scripts.pory"

# 519 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 520 "data/maps/OldaleTown/scripts.pory"
	lockall
# 521 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 522 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 523 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 524 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 526 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 527 "data/maps/OldaleTown/scripts.pory"
	end
# 528 "data/maps/OldaleTown/scripts.pory"

# 529 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 530 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 531 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 532 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 533 "data/maps/OldaleTown/scripts.pory"
	end
# 534 "data/maps/OldaleTown/scripts.pory"

# 535 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 536 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 537 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 538 "data/maps/OldaleTown/scripts.pory"
	end
# 539 "data/maps/OldaleTown/scripts.pory"

# 540 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 541 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 542 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 543 "data/maps/OldaleTown/scripts.pory"
	end
# 544 "data/maps/OldaleTown/scripts.pory"

# 545 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 546 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 547 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 548 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 549 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 550 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 552 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 553 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 554 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 555 "data/maps/OldaleTown/scripts.pory"
	end
# 556 "data/maps/OldaleTown/scripts.pory"

# 557 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 558 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 559 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 560 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/OldaleTown/scripts.pory"
	return
# 562 "data/maps/OldaleTown/scripts.pory"

# 563 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 564 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 565 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 566 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/OldaleTown/scripts.pory"
	return
# 568 "data/maps/OldaleTown/scripts.pory"

# 569 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 571 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 572 "data/maps/OldaleTown/scripts.pory"
	step_end
# 573 "data/maps/OldaleTown/scripts.pory"

# 574 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 575 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 576 "data/maps/OldaleTown/scripts.pory"
	step_end
# 577 "data/maps/OldaleTown/scripts.pory"

# 578 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 579 "data/maps/OldaleTown/scripts.pory"
	face_left
# 580 "data/maps/OldaleTown/scripts.pory"
	step_end
# 581 "data/maps/OldaleTown/scripts.pory"

# 582 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 583 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 584 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 585 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 586 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 587 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 588 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 589 "data/maps/OldaleTown/scripts.pory"
	step_end
# 590 "data/maps/OldaleTown/scripts.pory"

# 591 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 592 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 593 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 594 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 595 "data/maps/OldaleTown/scripts.pory"
	step_end
# 596 "data/maps/OldaleTown/scripts.pory"

# 597 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 598 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 599 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 600 "data/maps/OldaleTown/scripts.pory"
	step_end
# 601 "data/maps/OldaleTown/scripts.pory"

# 602 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 603 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 604 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 605 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 606 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 607 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 608 "data/maps/OldaleTown/scripts.pory"
	step_end
# 609 "data/maps/OldaleTown/scripts.pory"

# 610 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 611 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 612 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 613 "data/maps/OldaleTown/scripts.pory"
	step_end
# 614 "data/maps/OldaleTown/scripts.pory"

# 615 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 616 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 617 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 618 "data/maps/OldaleTown/scripts.pory"

# 619 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 620 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 621 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 622 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 623 "data/maps/OldaleTown/scripts.pory"

# 624 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 625 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 626 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 627 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 628 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 629 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 631 "data/maps/OldaleTown/scripts.pory"

# 632 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 633 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 634 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 636 "data/maps/OldaleTown/scripts.pory"

# 637 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 638 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 639 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 640 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 641 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 642 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 643 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 644 "data/maps/OldaleTown/scripts.pory"

# 645 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 646 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 647 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 648 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 649 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 650 "data/maps/OldaleTown/scripts.pory"

# 651 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 652 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 653 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 654 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 655 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 656 "data/maps/OldaleTown/scripts.pory"

# 657 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 658 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 659 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 660 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 661 "data/maps/OldaleTown/scripts.pory"

# 662 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 663 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 664 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 665 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 666 "data/maps/OldaleTown/scripts.pory"

# 667 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 669 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

# 20 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_0:
# 21 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 35 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_1:
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 37 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 38 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 40 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_2:
# 41 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 41 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_3:
# 73 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 74 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 76 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_4:
# 77 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 78 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 78 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 79 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 83 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_5:
# 83 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 109 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_6:
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_7:
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_8:
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 146 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_9:
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 148 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 206 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_10:
# 206 "data/maps/OldaleTown/scripts.pory"
	face_right
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
# 46 "data/maps/OldaleTown/scripts.pory"
	.string "???: Since you overheard us, we don't\n"
	.string "have any choice.\l"
	.string "Blame it on your own bad luck!$"

Script_PhenacCity_Intro_Text_3:
# 55 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: You took out my Whismur...\n"
	.string "You're no ordinary trainer, are you?!$"

Script_PhenacCity_Intro_Text_4:
# 66 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: Huh? Wait a sec...\n"
	.string "That face...\l"
	.string "Might you be...\l"
	.string "Team Snagem's...$"

Script_PhenacCity_Intro_Text_5:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "What, what?! What's going on out here?!\p"
	.string "BAG: Eeeek! Somebody!\n"
	.string "Robbers! They're Robbers!\p"
	.string "???: Y-You be quiet!\n"
	.string "We're no robbers!\l"
	.string "We're kidnappers!\l"
	.string "Get it? Kidnappers!\p"
	.string "Folly: Wha... You dingbat!\n"
	.string "Don't shoot off your mouth!$"

Script_PhenacCity_Intro_Text_6:
# 103 "data/maps/OldaleTown/scripts.pory"
	.string "Don't get all happy just on\n"
	.string "account of winning this once.\n"
	.string "The next time we meet, I'll trash\n"
	.string "you, your POKéMON, and all!$"

Script_PhenacCity_Intro_Text_7:
# 127 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, yuck!\n"
	.string "There's someone inside there!\l"
	.string "Gah! This is tied good and tight.\p"
	.string "Can you believe those people?\n"
	.string "What a horrible thing to do!\p"
	.string "Can you give this rope a tug from\n"
	.string "the other side?$"

Script_PhenacCity_Intro_Text_8:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER} tugged hard on the tightly\n"
	.string "knotted rope.\p"
	.string "The knot gradually loosened.$"

Script_PhenacCity_Intro_Text_9:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "???: Phew! Thank goodness!\n"
	.string "I'm saved!\p"
	.string "...Where is this? Where did those\n"
	.string "two bring me?\p"
	.string "Lady: This is Phenac City, the opulent\n"
	.string "city of water.\l"
	.string "This person saved you from those\l"
	.string "thugs.$"

Script_PhenacCity_Intro_Text_10:
# 170 "data/maps/OldaleTown/scripts.pory"
	.string "Man: The way he battled those goons,\n"
	.string "it was truly superb.\l"
	.string "I wish you could've seen it.\p"
	.string "???: Oh! Is that so?\n"
	.string "Thank you!\p"
	.string "And... Uh... you are?\p"
	.string "Oh!\n"
	.string "So you're named {PLAYER}!\l"
	.string "I am...$"

Script_PhenacCity_Intro_Text_11:
# 185 "data/maps/OldaleTown/scripts.pory"
	.string "My name's {RIVAL}!\n"
	.string "I'm sure glad I met you!\p"
	.string "{RIVAL}: I was in the neighboring\n"
	.string "town when those two grabbed me...\p"
	.string "Oh!\n"
	.string "Those guys, did they use a peculiar\l"
	.string "POkéMON?$"

Script_PhenacCity_Intro_Text_12:
# 197 "data/maps/OldaleTown/scripts.pory"
	.string "Guy: A peculiar POkéMON?\n"
	.string "No, they looked ordinary to me.\l"
	.string "What do you mean by peculiar\l"
	.string "POkéMON?\p"
	.string "{RIVAL}: Oh...\n"
	.string "No...\l"
	.string "No, that's fine, then.$"

Script_PhenacCity_Intro_Text_13:
# 210 "data/maps/OldaleTown/scripts.pory"
	.string "Lady: Well, it's easy to see something's\n"
	.string "on your mind. You should go see our\l"
	.string "Mayor for his advice.\p"
	.string "He's a very kind person, I'm sure he'll\n"
	.string "be able to help you somehow.\p"
	.string "The Mayor's house is close from the\n"
	.string "town\n"
	.string "square here. Go up the stairs north and\l"
	.string "it's\l"
	.string "to your left.\p"
	.string "{RIVAL}: The Mayor! That's true.\n"
	.string "The Mayor might know something!$"

Script_PhenacCity_Intro_Text_14:
# 228 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Thank you, {PLAYER}!\n"
	.string "Eheh, I thought you might say that!\p"
	.string "If you're with me, {PLAYER},\n"
	.string "it doesn't matter if those guys\l"
	.string "come back again!\p"
	.string "Thank you!\n"
	.string "Thanks for joining me for a while!$"

Script_PhenacCity_Intro_Text_15:
# 238 "data/maps/OldaleTown/scripts.pory"
	.string "[RIVAL] Became a partner!$"

Script_AskEscortRival_Text_0:
# 258 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Hey {PLAYER}...\n"
	.string "I know I'm imposing, but I don't have\l"
	.string "anyone else that I can turn to.\p"
	.string "Please can I get you to\n"
	.string "escort me for a while?$"

Script_AskEscortRival_Text_1:
# 267 "data/maps/OldaleTown/scripts.pory"
	.string "I don't have anyone else that I\n"
	.string "can turn to.$"
