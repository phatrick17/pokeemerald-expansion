Script_PhenacCity_Intro::
# 7 "data/maps/OldaleTown/scripts.pory"
	lockall
# 8 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_0
# 11 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 12 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_1
# 28 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_1
# 31 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Common_Movement_ExclamationMark
# 32 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Common_Movement_ExclamationMark
# 33 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 34 "data/maps/OldaleTown/scripts.pory"
	waitse
# 35 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_2
# 43 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_3
# 49 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_1, Script_PhenacCity_Intro_Text_3
# 62 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 63 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_4, MSGBOX_DEFAULT
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Common_Movement_ExclamationMark
# 69 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 70 "data/maps/OldaleTown/scripts.pory"
	waitse
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Script_PhenacCity_Intro_Movement_4
# 85 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_5
# 90 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_0
# 93 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_0
# 94 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_6, MSGBOX_DEFAULT
# 108 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_1
# 109 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_7, MSGBOX_DEFAULT
# 117 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 118 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_FOLLY_1, Script_PhenacCity_Intro_Movement_6
# 122 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_TRUDLY_1, Script_PhenacCity_Intro_Movement_7
# 125 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_TRUDLY_1
# 128 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_FOLLY_1
# 130 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_8
# 133 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Script_PhenacCity_Intro_Movement_9
# 139 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_8, MSGBOX_DEFAULT
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_9, MSGBOX_DEFAULT
# 155 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 157 "data/maps/OldaleTown/scripts.pory"
	waitse
# 158 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI_IN_BAG
# 159 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_RUI
# 161 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Script_PhenacCity_Intro_Movement_10
# 165 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 169 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Common_Movement_ExclamationMark
# 170 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUNNER_1, Common_Movement_ExclamationMark
# 171 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 172 "data/maps/OldaleTown/scripts.pory"
	waitse
# 174 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_10, MSGBOX_DEFAULT
# 184 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_11, MSGBOX_DEFAULT
# 196 "data/maps/OldaleTown/scripts.pory"
	special DoRivalNameChoiceScreen
# 197 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 199 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_12, MSGBOX_DEFAULT
# 208 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_11
# 209 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_13, MSGBOX_DEFAULT
# 221 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_9
# 222 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_14, MSGBOX_DEFAULT
# 238 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI, Script_PhenacCity_Intro_Movement_1
# 239 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_15, MSGBOX_DEFAULT
# 247 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
# 249 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_16, MSGBOX_DEFAULT
# 258 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_PhenacCity_Intro_Text_17, MSGBOX_DEFAULT
# 262 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_EVOLVED
# 263 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 264 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 265 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 267 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 268 "data/maps/OldaleTown/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, FNPC_ALL
# 269 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 270 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_12
# 273 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUNNER_1_2
# 275 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 276 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_FOLLY_1
# 277 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_RUNNER
# 278 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Script_AskEscortRival::
# 283 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_0, MSGBOX_YESNO
# 288 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_AskEscortRival_1
	return

Script_AskEscortRival_1:
# 289 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
	return


Phenac_Runner_1_Dialogue_1::
# 305 "data/maps/OldaleTown/scripts.pory"
	lock
# 306 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 307 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 310 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Runner_1_Dialogue_2::
# 318 "data/maps/OldaleTown/scripts.pory"
	lock
# 319 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 320 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_0, MSGBOX_YESNO
# 325 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phenac_Runner_1_Dialogue_2_2
# 329 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_2, MSGBOX_DEFAULT
Phenac_Runner_1_Dialogue_2_1:
# 344 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Runner_1_Dialogue_2_2:
# 326 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_1, MSGBOX_DEFAULT
	goto Phenac_Runner_1_Dialogue_2_1


Phenac_Lady_1_Dialogue_1::
# 352 "data/maps/OldaleTown/scripts.pory"
	lock
# 353 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 354 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Lady_1_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 358 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_GuyCenter_Dialogue_1::
# 366 "data/maps/OldaleTown/scripts.pory"
	lock
# 367 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 368 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyCenter_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 372 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Azurill_Dialogue_1::
# 380 "data/maps/OldaleTown/scripts.pory"
	lock
# 381 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 382 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 383 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Azurill_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 384 "data/maps/OldaleTown/scripts.pory"
	release
# 385 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_MARILL, Script_PhenacCity_Intro_Movement_1
	end


Phenac_GuyMart_Dialogue_1::
# 395 "data/maps/OldaleTown/scripts.pory"
	lock
# 396 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 397 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyMart_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 404 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Drig1::
# 413 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_DEFEAT_DRIG, Phenac_Drig1_1
# 416 "data/maps/OldaleTown/scripts.pory"
	call Phenac_OldManDrig_Dialogue_1
	return

Phenac_Drig1_1:
# 414 "data/maps/OldaleTown/scripts.pory"
	call Phenac_OldManDrig_Dialogue_2
	return


Phenac_OldManDrig_Dialogue_1::
# 422 "data/maps/OldaleTown/scripts.pory"
	lock
# 423 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 424 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_0, MSGBOX_YESNO
# 429 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_OldManDrig_Dialogue_1_2
# 436 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 437 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_2, Phenac_OldManDrig_Dialogue_1_Text_3
# 439 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_4, MSGBOX_DEFAULT
# 442 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_DEFEAT_DRIG
# 443 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_OldManDrig_Dialogue_1_2:
# 430 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 433 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_OldManDrig_Dialogue_2::
# 449 "data/maps/OldaleTown/scripts.pory"
	lock
# 450 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 451 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_2_Text_0, MSGBOX_DEFAULT
# 454 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_LadyTopRight_Dialogue_1::
# 462 "data/maps/OldaleTown/scripts.pory"
	lock
# 463 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 464 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_LadyTopRight_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 470 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_DudeGym_Dialogue_1::
# 478 "data/maps/OldaleTown/scripts.pory"
	lock
# 479 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 480 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_DudeGym_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 486 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_OldLadyMayor_Dialogue_1::
# 494 "data/maps/OldaleTown/scripts.pory"
	lock
# 495 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 496 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldLadyMayor_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 501 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_DudeStairs_Dialogue_1::
# 509 "data/maps/OldaleTown/scripts.pory"
	lock
# 510 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 511 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_DudeStairs_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 521 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Zigzagoon_Dialogue_1::
# 529 "data/maps/OldaleTown/scripts.pory"
	lock
# 530 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 531 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 532 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Zigzagoon_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 533 "data/maps/OldaleTown/scripts.pory"
	release
# 534 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_ZIG_1, Script_PhenacCity_Intro_Movement_11
	end


Phenac_Kaib1::
# 545 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_DEFEAT_KAIB, Phenac_Kaib1_1
# 548 "data/maps/OldaleTown/scripts.pory"
	call Phenac_SkaterKaib_Dialogue_1
	return

Phenac_Kaib1_1:
# 546 "data/maps/OldaleTown/scripts.pory"
	call Phenac_SkaterKaib_Dialogue_2
	return


Phenac_SkaterKaib_Dialogue_1::
# 552 "data/maps/OldaleTown/scripts.pory"
	lock
# 553 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 554 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_0, MSGBOX_YESNO
# 559 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_SkaterKaib_Dialogue_1_2
# 564 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 567 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_3, Phenac_SkaterKaib_Dialogue_1_Text_3
# 570 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_4, MSGBOX_DEFAULT
# 573 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 574 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_DEFEAT_KAIB
# 575 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_SkaterKaib_Dialogue_1_2:
# 560 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 561 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_SkaterKaib_Dialogue_2::
# 581 "data/maps/OldaleTown/scripts.pory"
	lock
# 582 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_2_Text_0, MSGBOX_DEFAULT
# 585 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_GuyStadium_Dialogue_1::
# 593 "data/maps/OldaleTown/scripts.pory"
	lock
# 594 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 595 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_0, MSGBOX_YESNO
# 597 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phenac_GuyStadium_Dialogue_1_2
# 600 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_2, MSGBOX_DEFAULT
Phenac_GuyStadium_Dialogue_1_1:
# 604 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_GuyStadium_Dialogue_1_2:
# 598 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_1, MSGBOX_DEFAULT
	goto Phenac_GuyStadium_Dialogue_1_1


Phenac_Jigglypuff_Dialogue_1::
# 609 "data/maps/OldaleTown/scripts.pory"
	lock
# 610 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 611 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
# 612 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Jigglypuff_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 613 "data/maps/OldaleTown/scripts.pory"
	release
# 614 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_JIGGLY, Script_PhenacCity_Intro_Movement_1
	end


Phenac_Show_Runner1::
# 623 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_PHENAC_RUNNER
# 624 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 634 "data/maps/OldaleTown/scripts.pory"

# 635 "data/maps/OldaleTown/scripts.pory"

# 636 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 637 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_OnFrame
# 638 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 639 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 640 "data/maps/OldaleTown/scripts.pory"

# 641 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnFrame:
# 642 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, OldaleTown_EventScript_RunPhenacIntro
# 643 "data/maps/OldaleTown/scripts.pory"
	.2byte 0
# 644 "data/maps/OldaleTown/scripts.pory"

# 645 "data/maps/OldaleTown/scripts.pory"

# 646 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 647 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 648 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 649 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 650 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 651 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 652 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_CAR_AND_BAG_OUTSKIRT, OldaleTown_EventScript_HidePhenacRui
# 653 "data/maps/OldaleTown/scripts.pory"
    goto_if_set FLAG_PHENAC_FOLLY_1, OldaleTown_EventScript_EndTransition
# 654 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 655 "data/maps/OldaleTown/scripts.pory"
	end
# 656 "data/maps/OldaleTown/scripts.pory"

# 657 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_EndTransition:
# 658 "data/maps/OldaleTown/scripts.pory"
	end
# 659 "data/maps/OldaleTown/scripts.pory"

# 660 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RunPhenacIntro::
# 661 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 662 "data/maps/OldaleTown/scripts.pory"
	call Script_PhenacCity_Intro
# 663 "data/maps/OldaleTown/scripts.pory"
	return
# 664 "data/maps/OldaleTown/scripts.pory"

# 665 "data/maps/OldaleTown/scripts.pory"

# 666 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_HidePhenacRui::
# 667 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 668 "data/maps/OldaleTown/scripts.pory"
	return
# 669 "data/maps/OldaleTown/scripts.pory"

# 670 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 671 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 672 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 673 "data/maps/OldaleTown/scripts.pory"
	return
# 674 "data/maps/OldaleTown/scripts.pory"

# 675 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 676 "data/maps/OldaleTown/scripts.pory"
	return
# 677 "data/maps/OldaleTown/scripts.pory"

# 678 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 679 "data/maps/OldaleTown/scripts.pory"
	return
# 680 "data/maps/OldaleTown/scripts.pory"

# 681 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 682 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 683 "data/maps/OldaleTown/scripts.pory"
	end
# 684 "data/maps/OldaleTown/scripts.pory"

# 685 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 686 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 687 "data/maps/OldaleTown/scripts.pory"
	end
# 688 "data/maps/OldaleTown/scripts.pory"

# 689 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 690 "data/maps/OldaleTown/scripts.pory"
	lock
# 691 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 692 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 693 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 694 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 695 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 696 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 697 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 698 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 699 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 700 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 701 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 702 "data/maps/OldaleTown/scripts.pory"
	end
# 703 "data/maps/OldaleTown/scripts.pory"

# 704 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 705 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 706 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 707 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 709 "data/maps/OldaleTown/scripts.pory"
	end
# 710 "data/maps/OldaleTown/scripts.pory"

# 711 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 712 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 713 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 714 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 716 "data/maps/OldaleTown/scripts.pory"
	end
# 717 "data/maps/OldaleTown/scripts.pory"

# 718 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 719 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 720 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 721 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 723 "data/maps/OldaleTown/scripts.pory"
	end
# 724 "data/maps/OldaleTown/scripts.pory"

# 725 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 726 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 727 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 728 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 729 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 730 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 731 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 732 "data/maps/OldaleTown/scripts.pory"
	release
# 733 "data/maps/OldaleTown/scripts.pory"
	end
# 734 "data/maps/OldaleTown/scripts.pory"

# 735 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 736 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 737 "data/maps/OldaleTown/scripts.pory"
	release
# 738 "data/maps/OldaleTown/scripts.pory"
	end
# 739 "data/maps/OldaleTown/scripts.pory"

# 740 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 741 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 742 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 743 "data/maps/OldaleTown/scripts.pory"
	release
# 744 "data/maps/OldaleTown/scripts.pory"
	end
# 745 "data/maps/OldaleTown/scripts.pory"

# 746 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 747 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 748 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 749 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 750 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 751 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 752 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 753 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 754 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 755 "data/maps/OldaleTown/scripts.pory"
	step_end
# 756 "data/maps/OldaleTown/scripts.pory"

# 757 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 758 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 759 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 760 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 761 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 762 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 763 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 764 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 765 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 766 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 767 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 768 "data/maps/OldaleTown/scripts.pory"
	step_end
# 769 "data/maps/OldaleTown/scripts.pory"

# 770 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 771 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 772 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 773 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 774 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 775 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 776 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 777 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 778 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 779 "data/maps/OldaleTown/scripts.pory"
	step_end
# 780 "data/maps/OldaleTown/scripts.pory"

# 781 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 783 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 784 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 785 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 786 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 787 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 788 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 789 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 790 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 791 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 792 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 793 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 794 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 795 "data/maps/OldaleTown/scripts.pory"
	step_end
# 796 "data/maps/OldaleTown/scripts.pory"

# 797 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 798 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 799 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 800 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 802 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 803 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 804 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 805 "data/maps/OldaleTown/scripts.pory"
	step_end
# 806 "data/maps/OldaleTown/scripts.pory"

# 807 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 808 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 809 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 810 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 811 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 812 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 813 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 814 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 815 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 816 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 817 "data/maps/OldaleTown/scripts.pory"
	step_end
# 818 "data/maps/OldaleTown/scripts.pory"

# 819 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 820 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 821 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 822 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 823 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 824 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 825 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 826 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 827 "data/maps/OldaleTown/scripts.pory"
	step_end
# 828 "data/maps/OldaleTown/scripts.pory"

# 829 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 830 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 832 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 833 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 834 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 835 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 836 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 838 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 839 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 840 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 841 "data/maps/OldaleTown/scripts.pory"
	step_end
# 842 "data/maps/OldaleTown/scripts.pory"

# 843 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 844 "data/maps/OldaleTown/scripts.pory"
	lock
# 845 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 846 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 847 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 848 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 849 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 850 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 851 "data/maps/OldaleTown/scripts.pory"
	release
# 852 "data/maps/OldaleTown/scripts.pory"
	end
# 853 "data/maps/OldaleTown/scripts.pory"

# 854 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 855 "data/maps/OldaleTown/scripts.pory"
	lockall
# 856 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 857 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 858 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 859 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 860 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 861 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 862 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 863 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 864 "data/maps/OldaleTown/scripts.pory"
	end
# 865 "data/maps/OldaleTown/scripts.pory"

# 866 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 867 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 868 "data/maps/OldaleTown/scripts.pory"
	release
# 869 "data/maps/OldaleTown/scripts.pory"
	end
# 870 "data/maps/OldaleTown/scripts.pory"

# 871 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 872 "data/maps/OldaleTown/scripts.pory"
	lockall
# 873 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 874 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 875 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 876 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 877 "data/maps/OldaleTown/scripts.pory"
	end
# 878 "data/maps/OldaleTown/scripts.pory"

# 879 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 880 "data/maps/OldaleTown/scripts.pory"
	lockall
# 881 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 882 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 883 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 884 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 885 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 886 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 887 "data/maps/OldaleTown/scripts.pory"
	end
# 888 "data/maps/OldaleTown/scripts.pory"

# 889 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 890 "data/maps/OldaleTown/scripts.pory"
	lockall
# 891 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 892 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 894 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 895 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 896 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 897 "data/maps/OldaleTown/scripts.pory"
	end
# 898 "data/maps/OldaleTown/scripts.pory"

# 899 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 900 "data/maps/OldaleTown/scripts.pory"
	lockall
# 901 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 902 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 903 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 904 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 905 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 906 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 907 "data/maps/OldaleTown/scripts.pory"
	end
# 908 "data/maps/OldaleTown/scripts.pory"

# 909 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 910 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 911 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 912 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 913 "data/maps/OldaleTown/scripts.pory"
	end
# 914 "data/maps/OldaleTown/scripts.pory"

# 915 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 916 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 917 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 918 "data/maps/OldaleTown/scripts.pory"
	end
# 919 "data/maps/OldaleTown/scripts.pory"

# 920 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 921 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 922 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 923 "data/maps/OldaleTown/scripts.pory"
	end
# 924 "data/maps/OldaleTown/scripts.pory"

# 925 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 926 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 927 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 928 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 929 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 930 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 931 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 932 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 933 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 934 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 935 "data/maps/OldaleTown/scripts.pory"
	end
# 936 "data/maps/OldaleTown/scripts.pory"

# 937 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 938 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 939 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 940 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 941 "data/maps/OldaleTown/scripts.pory"
	return
# 942 "data/maps/OldaleTown/scripts.pory"

# 943 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 944 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 945 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 946 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 947 "data/maps/OldaleTown/scripts.pory"
	return
# 948 "data/maps/OldaleTown/scripts.pory"

# 949 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 950 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 951 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 952 "data/maps/OldaleTown/scripts.pory"
	step_end
# 953 "data/maps/OldaleTown/scripts.pory"

# 954 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 955 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 956 "data/maps/OldaleTown/scripts.pory"
	step_end
# 957 "data/maps/OldaleTown/scripts.pory"

# 958 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 959 "data/maps/OldaleTown/scripts.pory"
	face_left
# 960 "data/maps/OldaleTown/scripts.pory"
	step_end
# 961 "data/maps/OldaleTown/scripts.pory"

# 962 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 963 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 964 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 965 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 966 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 967 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 968 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 969 "data/maps/OldaleTown/scripts.pory"
	step_end
# 970 "data/maps/OldaleTown/scripts.pory"

# 971 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 972 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 973 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 974 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 975 "data/maps/OldaleTown/scripts.pory"
	step_end
# 976 "data/maps/OldaleTown/scripts.pory"

# 977 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 978 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 979 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 980 "data/maps/OldaleTown/scripts.pory"
	step_end
# 981 "data/maps/OldaleTown/scripts.pory"

# 982 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 983 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 984 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 985 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 986 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 987 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 988 "data/maps/OldaleTown/scripts.pory"
	step_end
# 989 "data/maps/OldaleTown/scripts.pory"

# 990 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 991 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 992 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 993 "data/maps/OldaleTown/scripts.pory"
	step_end
# 994 "data/maps/OldaleTown/scripts.pory"

# 995 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 996 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 997 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 998 "data/maps/OldaleTown/scripts.pory"

# 999 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 1000 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 1001 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 1002 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 1003 "data/maps/OldaleTown/scripts.pory"

# 1004 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 1005 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 1006 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 1007 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 1008 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 1009 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 1010 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 1011 "data/maps/OldaleTown/scripts.pory"

# 1012 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 1013 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 1014 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 1015 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 1016 "data/maps/OldaleTown/scripts.pory"

# 1017 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 1018 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 1019 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 1020 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1021 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1022 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1023 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1024 "data/maps/OldaleTown/scripts.pory"

# 1025 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 1026 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1027 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1028 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1029 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1030 "data/maps/OldaleTown/scripts.pory"

# 1031 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 1032 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 1033 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 1034 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 1035 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 1036 "data/maps/OldaleTown/scripts.pory"

# 1037 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 1038 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 1039 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 1040 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 1041 "data/maps/OldaleTown/scripts.pory"

# 1042 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 1043 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 1044 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 1045 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 1046 "data/maps/OldaleTown/scripts.pory"

# 1047 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 1048 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 1049 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

# 8 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_0:
# 9 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 25 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_1:
# 26 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 40 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_2:
# 41 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 41 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_3:
# 44 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 44 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 44 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 45 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 46 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 79 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_4:
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 81 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 82 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 83 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 85 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_5:
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 88 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 118 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_6:
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_7:
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_8:
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 135 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_9:
# 136 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 161 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_10:
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 163 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 208 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_11:
# 208 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 270 "data/maps/OldaleTown/scripts.pory"
Script_PhenacCity_Intro_Movement_12:
# 271 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

Script_PhenacCity_Intro_Text_0:
# 13 "data/maps/OldaleTown/scripts.pory"
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
# 36 "data/maps/OldaleTown/scripts.pory"
	.string "???: Oh, drat!\n"
	.string "Did that punk there hear all of that?$"

Script_PhenacCity_Intro_Text_2:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "???: Since you overheard us, we don't\n"
	.string "have any choice.\p"
	.string "Blame it on your own bad luck!$"

Script_PhenacCity_Intro_Text_3:
# 59 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: Gaah!\n"
	.string "You're tougher than you look!$"

Script_PhenacCity_Intro_Text_4:
# 64 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: You took out my Whismur...\n"
	.string "You're no ordinary trainer, are you?!$"

Script_PhenacCity_Intro_Text_5:
# 73 "data/maps/OldaleTown/scripts.pory"
	.string "Folly: Huh? Wait a sec...\n"
	.string "That face...\l"
	.string "Might you be...\l"
	.string "Team Snagem's...$"

Script_PhenacCity_Intro_Text_6:
# 97 "data/maps/OldaleTown/scripts.pory"
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
# 112 "data/maps/OldaleTown/scripts.pory"
	.string "Don't get all happy just on\n"
	.string "account of winning this once.\p"
	.string "The next time we meet, I'll trash\n"
	.string "you, your POKéMON, and all!$"

Script_PhenacCity_Intro_Text_8:
# 140 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, yuck!\n"
	.string "There's someone inside there!\l"
	.string "Gah! This is tied good and tight.\p"
	.string "Can you believe those people?\n"
	.string "What a horrible thing to do!\p"
	.string "Can you give this rope a tug from\n"
	.string "the other side?$"

Script_PhenacCity_Intro_Text_9:
# 150 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER} tugged hard on the tightly\n"
	.string "knotted rope.\p"
	.string "The knot gradually loosened.$"

Script_PhenacCity_Intro_Text_10:
# 175 "data/maps/OldaleTown/scripts.pory"
	.string "???: Phew! Thank goodness!\n"
	.string "I'm saved!\p"
	.string "...Where is this? Where did those\n"
	.string "two bring me?\p"
	.string "Lady: This is Phenac City, the opulent\n"
	.string "city of water.\p"
	.string "This person saved you from those\n"
	.string "thugs.$"

Script_PhenacCity_Intro_Text_11:
# 185 "data/maps/OldaleTown/scripts.pory"
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
# 200 "data/maps/OldaleTown/scripts.pory"
	.string "My name's {RIVAL}!\n"
	.string "I'm sure glad I met you!\p"
	.string "{RIVAL}: I was in the neighboring\n"
	.string "town when those two grabbed me...\p"
	.string "Oh! Those guys, did they use\n"
	.string "a peculiar POKéMON?$"

Script_PhenacCity_Intro_Text_13:
# 212 "data/maps/OldaleTown/scripts.pory"
	.string "Guy: A peculiar POkéMON?\n"
	.string "No, they looked ordinary to me.\l"
	.string "What do you mean by peculiar\l"
	.string "POkéMON?\p"
	.string "{RIVAL}: Oh...\n"
	.string "No...\l"
	.string "No, that's fine, then.$"

Script_PhenacCity_Intro_Text_14:
# 225 "data/maps/OldaleTown/scripts.pory"
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
# 242 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Hey {PLAYER}...\n"
	.string "I know I'm imposing, but I don't have\l"
	.string "anyone else that I can turn to.$"

Script_PhenacCity_Intro_Text_16:
# 250 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Thank you, {PLAYER}!\n"
	.string "Eheh, I thought you might say that!\p"
	.string "If you're with me, {PLAYER}, it doesn't\n"
	.string "matter if those guys come back again!\p"
	.string "Thank you!\n"
	.string "Thanks for joining me for a while!$"

Script_PhenacCity_Intro_Text_17:
# 259 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL} became a partner!$"

Script_AskEscortRival_Text_0:
# 284 "data/maps/OldaleTown/scripts.pory"
	.string "Please can I get you to escort me\n"
	.string "for a while?$"

Script_AskEscortRival_Text_1:
# 290 "data/maps/OldaleTown/scripts.pory"
	.string "I don't have anyone else that I can\n"
	.string "turn to.$"

Phenac_Runner_1_Dialogue_1_Text_0:
# 307 "data/maps/OldaleTown/scripts.pory"
	.string "You know, you two make one attractive\n"
	.string "couple! It makes me a little envious.\l"
	.string "Ahahaha!$"

Phenac_Runner_1_Dialogue_2_Text_0:
# 320 "data/maps/OldaleTown/scripts.pory"
	.string "Hiya! If it's not the good-looking\n"
	.string "couple from earlier!\p"
	.string "So, what's up?\n"
	.string "Did you manage to find anything out?$"

Phenac_Runner_1_Dialogue_2_Text_1:
# 326 "data/maps/OldaleTown/scripts.pory"
	.string "Is that right! Well, that's great, then!\n"
	.string "Ahahaha!$"

Phenac_Runner_1_Dialogue_2_Text_2:
# 329 "data/maps/OldaleTown/scripts.pory"
	.string "Is that right. That's got to be vexing.\p"
	.string "I know! If it's about POKéMON, there's\n"
	.string "the Pre Gym!\p"
	.string "It's actually called Prestige\n"
	.string "Precept Center, but everyone just\l"
	.string "calls it Pre Gym.\p"
	.string "Pre Gym is a place where skilled\n"
	.string "trainers work on their own abilities\l"
	.string "as well as their POKéMON.\p"
	.string "You'll find many trainers there who\n"
	.string "are knowledgeable about POKéMON.\l"
	.string "I'm sure they can help you.\p"
	.string "It's on the raised middle part of the\n"
	.string "town.\n"
	.string "You should visit there.$"

Phenac_Lady_1_Dialogue_1_Text_0:
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "The Mayor's house is near the town\n"
	.string "square past here.\p"
	.string "Go up the stairs from the square, and\n"
	.string "it's on your left.$"

Phenac_GuyCenter_Dialogue_1_Text_0:
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "There was some ruckus going on\n"
	.string "near the town's entrance earlier.\p"
	.string "It'd better not be the goons again\n"
	.string "from the next town over.$"

Phenac_Azurill_Dialogue_1_Text_0:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "Ruri rurii.$"

Phenac_GuyMart_Dialogue_1_Text_0:
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "If you're still traveling, you should\n"
	.string "stock up on supplies at the shop there.\p"
	.string "I recommend it.\n"
	.string "After all, it's my hou...\l"
	.string "Er... Ahem!\p"
	.string "Uh... Well, anyway, that shop has\n"
	.string "the best reputation around these\l"
	.string "parts!$"

Phenac_OldManDrig_Dialogue_1_Text_0:
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "What fine weather this is!\n"
	.string "It's truly a perfect sort of day for\l"
	.string "a POKéMON battle.\p"
	.string "So, young one, how about indulging\n"
	.string "this old man? Let us battle.$"

Phenac_OldManDrig_Dialogue_1_Text_1:
# 430 "data/maps/OldaleTown/scripts.pory"
	.string "Oh? How boring.\n"
	.string "You young people today…\l"
	.string "You have no gumption, I say.$"

Phenac_OldManDrig_Dialogue_1_Text_2:
# 436 "data/maps/OldaleTown/scripts.pory"
	.string "All right!$"

Phenac_OldManDrig_Dialogue_1_Text_3:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "Woah! I've got to concede this one lad!$"

Phenac_OldManDrig_Dialogue_1_Text_4:
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "DRIG: Ah, yes.\n"
	.string "You're young, but you've got a bit\l"
	.string "of spine!$"

Phenac_OldManDrig_Dialogue_2_Text_0:
# 451 "data/maps/OldaleTown/scripts.pory"
	.string "DRIG: Why, you're just like me when\n"
	.string "I was young!\l"
	.string "Well done, indeed.$"

Phenac_LadyTopRight_Dialogue_1_Text_0:
# 464 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, are you traveling?\n"
	.string "Aww, I envy you!\p"
	.string "Is it a journey to become an expert\n"
	.string "trainer?\l"
	.string "Or a quest to meet POKéMON?\l"
	.string "Either way, you make me jealous!$"

Phenac_DudeGym_Dialogue_1_Text_0:
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "Um ... I ...\n"
	.string "I really look up to Justy, the Leader\l"
	.string "of the Pregym.\p"
	.string "He's really cool!\n"
	.string "Of course, he's really a tough trainer\l"
	.string "at POKéMON battles, too!$"

Phenac_OldLadyMayor_Dialogue_1_Text_0:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "That large house is the MAYOR's\n"
	.string "home.\p"
	.string "If something concerns you while\n"
	.string "you're traveling, you should visit\l"
	.string "the MAYOR for his advice.$"

Phenac_DudeStairs_Dialogue_1_Text_0:
# 511 "data/maps/OldaleTown/scripts.pory"
	.string "This town was peaceful before\n"
	.string "but lately, it's been turning rougher.\p"
	.string "It's because of the thugs that live\n"
	.string "in Pyrite Town, which is the next\l"
	.string "town over.\p"
	.string "They've been showing up here.\p"
	.string "I don't want to have anything to do\n"
	.string "with them.\p"
	.string "Let sleeping dogs lie; that's what\n"
	.string "I say!$"

Phenac_Zigzagoon_Dialogue_1_Text_0:
# 532 "data/maps/OldaleTown/scripts.pory"
	.string "Gwonn!$"

Phenac_SkaterKaib_Dialogue_1_Text_0:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "I'm no good at schoolwork, but I'm\n"
	.string "pretty hot stuff at POKéMON battles.\p"
	.string "You're a trainer, too, aren't you?\n"
	.string "Let's duke it out!\l"
	.string "Let's battle!$"

Phenac_SkaterKaib_Dialogue_1_Text_1:
# 560 "data/maps/OldaleTown/scripts.pory"
	.string "Awww, you cheapskate!$"

Phenac_SkaterKaib_Dialogue_1_Text_2:
# 564 "data/maps/OldaleTown/scripts.pory"
	.string "All right! Here we come,\n"
	.string "and there's no holding back!$"

Phenac_SkaterKaib_Dialogue_1_Text_3:
# 568 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Ouch, no!\n"
	.string "That wasn't supposed to happen!$"

Phenac_SkaterKaib_Dialogue_1_Text_4:
# 570 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Big guy, you're tough.\n"
	.string "I want you to have this since you're\l"
	.string "so good.$"

Phenac_SkaterKaib_Dialogue_2_Text_0:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Big guy, you're tough.\n"
	.string "I hope that TM comes in handy!$"

Phenac_GuyStadium_Dialogue_1_Text_0:
# 595 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
	.string "Did you know?!$"

Phenac_GuyStadium_Dialogue_1_Text_1:
# 598 "data/maps/OldaleTown/scripts.pory"
	.string "Isn't it amazing!$"

Phenac_GuyStadium_Dialogue_1_Text_2:
# 600 "data/maps/OldaleTown/scripts.pory"
	.string "They say that Team Snagem's\n"
	.string "hideout was blown up!\p"
	.string "Who could have done such a thing?$"

Phenac_Jigglypuff_Dialogue_1_Text_0:
# 612 "data/maps/OldaleTown/scripts.pory"
	.string "Pururuun.$"
