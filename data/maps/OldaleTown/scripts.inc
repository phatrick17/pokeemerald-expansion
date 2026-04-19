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


Phenac_Nascour_Encounter_1::
# 631 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_2
# 635 "data/maps/OldaleTown/scripts.pory"
	lockall
# 636 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 637 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 638 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 639 "data/maps/OldaleTown/scripts.pory"
	waitse
# 640 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/OldaleTown/scripts.pory"
	hidefollowernpc
# 642 "data/maps/OldaleTown/scripts.pory"
	delay 15
# 643 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Nascour_Encounter_1_Movement_0
# 647 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_NASCOUR_1
# 649 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 650 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_Movement_1
# 654 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 655 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 656 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Script_PhenacCity_Intro_Movement_9
# 659 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 660 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Nascour_Encounter_1_Text_0, MSGBOX_DEFAULT
# 667 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 668 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_Movement_2
# 671 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 672 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_NASCOUR_1
# 673 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_NASCOUR_1
# 674 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_Nascour_Encounter_1_2:
# 632 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Team_Snagem_First_Encounter_Stadium::
# 680 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 681 "data/maps/OldaleTown/scripts.pory"
	setobjectxy PHENAC_JIGGLY, 11, 0
# 682 "data/maps/OldaleTown/scripts.pory"
	setobjectxy PHENAC_FISHER_GUY, 11, 0
# 683 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_JIGGLY
# 684 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_FISHER_GUY
# 685 "data/maps/OldaleTown/scripts.pory"
	lockall
# 686 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_RUI_STADIUM_1
# 687 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_1
# 688 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_2
# 689 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_3
# 690 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_PALACE, FALSE
# 691 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_0
# 694 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 695 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 698 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 701 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 704 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 705 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_0, MSGBOX_DEFAULT
# 712 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 713 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Common_Movement_ExclamationMark
# 714 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 715 "data/maps/OldaleTown/scripts.pory"
	waitse
# 716 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_2
# 720 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 721 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_1, MSGBOX_DEFAULT
# 734 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 735 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_9
# 738 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 739 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_2, MSGBOX_DEFAULT
# 744 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 745 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_1
# 748 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 751 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 752 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_3, MSGBOX_DEFAULT
# 759 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 760 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 763 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 764 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_4, MSGBOX_DEFAULT
# 772 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 773 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_4
# 776 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_5, MSGBOX_DEFAULT
# 781 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 782 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 785 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 786 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_6, MSGBOX_DEFAULT
# 791 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Phenac_Team_Snagem_First_Encounter_Stadium_Text_7
# 794 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 795 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_8, MSGBOX_DEFAULT
# 799 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 800 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 803 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 806 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 809 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 810 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_9
# 813 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_11
# 816 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 817 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_1
# 818 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_2
# 819 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_3
# 820 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_9, MSGBOX_DEFAULT
# 834 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_6
# 837 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 838 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI_STADIUM_1
# 839 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_1
# 842 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 3
# 843 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1
# 844 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_WILLIE_APPEAR_1
# 845 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_MapScripts::
# 850 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 851 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 852 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, OldaleTown_EventScript_RunPhenacIntro
# 853 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 2, Phenac_Team_Snagem_First_Encounter_Stadium
	.2byte 0


# 866 "data/maps/OldaleTown/scripts.pory"

# 867 "data/maps/OldaleTown/scripts.pory"

# 868 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 869 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 870 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 871 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 872 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 873 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 874 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_CAR_AND_BAG_OUTSKIRT, OldaleTown_EventScript_HidePhenacRui
# 875 "data/maps/OldaleTown/scripts.pory"
    goto_if_set FLAG_PHENAC_FOLLY_1, OldaleTown_EventScript_EndTransition
# 876 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 877 "data/maps/OldaleTown/scripts.pory"
	end
# 878 "data/maps/OldaleTown/scripts.pory"

# 879 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_EndTransition:
# 880 "data/maps/OldaleTown/scripts.pory"
	end
# 881 "data/maps/OldaleTown/scripts.pory"

# 882 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RunPhenacIntro::
# 883 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 884 "data/maps/OldaleTown/scripts.pory"
	call Script_PhenacCity_Intro
# 885 "data/maps/OldaleTown/scripts.pory"
	return
# 886 "data/maps/OldaleTown/scripts.pory"

# 887 "data/maps/OldaleTown/scripts.pory"

# 888 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_HidePhenacRui::
# 889 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 890 "data/maps/OldaleTown/scripts.pory"
	return
# 891 "data/maps/OldaleTown/scripts.pory"

# 892 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 893 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 894 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 895 "data/maps/OldaleTown/scripts.pory"
	return
# 896 "data/maps/OldaleTown/scripts.pory"

# 897 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 898 "data/maps/OldaleTown/scripts.pory"
	return
# 899 "data/maps/OldaleTown/scripts.pory"

# 900 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 901 "data/maps/OldaleTown/scripts.pory"
	return
# 902 "data/maps/OldaleTown/scripts.pory"

# 903 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 904 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 905 "data/maps/OldaleTown/scripts.pory"
	end
# 906 "data/maps/OldaleTown/scripts.pory"

# 907 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 908 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 909 "data/maps/OldaleTown/scripts.pory"
	end
# 910 "data/maps/OldaleTown/scripts.pory"

# 911 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 912 "data/maps/OldaleTown/scripts.pory"
	lock
# 913 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 914 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 915 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 916 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 917 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 918 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 919 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 920 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 921 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 922 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 923 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 924 "data/maps/OldaleTown/scripts.pory"
	end
# 925 "data/maps/OldaleTown/scripts.pory"

# 926 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 927 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 928 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 929 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 930 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 931 "data/maps/OldaleTown/scripts.pory"
	end
# 932 "data/maps/OldaleTown/scripts.pory"

# 933 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 934 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 935 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 936 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 937 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 938 "data/maps/OldaleTown/scripts.pory"
	end
# 939 "data/maps/OldaleTown/scripts.pory"

# 940 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 941 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 942 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 943 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 944 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 945 "data/maps/OldaleTown/scripts.pory"
	end
# 946 "data/maps/OldaleTown/scripts.pory"

# 947 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 948 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 949 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 950 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 951 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 952 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 953 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 954 "data/maps/OldaleTown/scripts.pory"
	release
# 955 "data/maps/OldaleTown/scripts.pory"
	end
# 956 "data/maps/OldaleTown/scripts.pory"

# 957 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 958 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 959 "data/maps/OldaleTown/scripts.pory"
	release
# 960 "data/maps/OldaleTown/scripts.pory"
	end
# 961 "data/maps/OldaleTown/scripts.pory"

# 962 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 963 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 964 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 965 "data/maps/OldaleTown/scripts.pory"
	release
# 966 "data/maps/OldaleTown/scripts.pory"
	end
# 967 "data/maps/OldaleTown/scripts.pory"

# 968 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 969 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 970 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 971 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 972 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 973 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 974 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 975 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 976 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 977 "data/maps/OldaleTown/scripts.pory"
	step_end
# 978 "data/maps/OldaleTown/scripts.pory"

# 979 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 980 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 981 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 982 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 983 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 984 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 985 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 986 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 988 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 989 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 990 "data/maps/OldaleTown/scripts.pory"
	step_end
# 991 "data/maps/OldaleTown/scripts.pory"

# 992 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 993 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 994 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 995 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 996 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 997 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 998 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 999 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1000 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1001 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1002 "data/maps/OldaleTown/scripts.pory"

# 1003 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 1004 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1005 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1006 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1007 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1008 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1009 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1010 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1011 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1012 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1013 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1014 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1015 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1016 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1017 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1018 "data/maps/OldaleTown/scripts.pory"

# 1019 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 1020 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1021 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1022 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1023 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1024 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1025 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1026 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1027 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1028 "data/maps/OldaleTown/scripts.pory"

# 1029 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 1030 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1031 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1032 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1033 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1034 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1035 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1036 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1037 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1038 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1039 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1040 "data/maps/OldaleTown/scripts.pory"

# 1041 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 1042 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1044 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1045 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1046 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1047 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1048 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1049 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1050 "data/maps/OldaleTown/scripts.pory"

# 1051 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 1052 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1053 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1054 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1055 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1056 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1057 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1058 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1059 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1060 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1061 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1062 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1063 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1064 "data/maps/OldaleTown/scripts.pory"

# 1065 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 1066 "data/maps/OldaleTown/scripts.pory"
	lock
# 1067 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1068 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 1069 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 1070 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1071 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 1072 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1073 "data/maps/OldaleTown/scripts.pory"
	release
# 1074 "data/maps/OldaleTown/scripts.pory"
	end
# 1075 "data/maps/OldaleTown/scripts.pory"

# 1076 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 1077 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1078 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 1079 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 1080 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1081 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 1082 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1083 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 1084 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1085 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 1086 "data/maps/OldaleTown/scripts.pory"
	end
# 1087 "data/maps/OldaleTown/scripts.pory"

# 1088 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 1089 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 1090 "data/maps/OldaleTown/scripts.pory"
	release
# 1091 "data/maps/OldaleTown/scripts.pory"
	end
# 1092 "data/maps/OldaleTown/scripts.pory"

# 1093 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 1094 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1095 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 1096 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1097 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 1098 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1099 "data/maps/OldaleTown/scripts.pory"
	end
# 1100 "data/maps/OldaleTown/scripts.pory"

# 1101 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 1102 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1103 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 1104 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1105 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1106 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1107 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1108 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1109 "data/maps/OldaleTown/scripts.pory"
	end
# 1110 "data/maps/OldaleTown/scripts.pory"

# 1111 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 1112 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1113 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 1114 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1115 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1116 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1117 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1118 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1119 "data/maps/OldaleTown/scripts.pory"
	end
# 1120 "data/maps/OldaleTown/scripts.pory"

# 1121 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 1122 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1123 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 1124 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1125 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1126 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1127 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1128 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1129 "data/maps/OldaleTown/scripts.pory"
	end
# 1130 "data/maps/OldaleTown/scripts.pory"

# 1131 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 1132 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1133 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 1134 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 1135 "data/maps/OldaleTown/scripts.pory"
	end
# 1136 "data/maps/OldaleTown/scripts.pory"

# 1137 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 1138 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 1139 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 1140 "data/maps/OldaleTown/scripts.pory"
	end
# 1141 "data/maps/OldaleTown/scripts.pory"

# 1142 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 1143 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 1144 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 1145 "data/maps/OldaleTown/scripts.pory"
	end
# 1146 "data/maps/OldaleTown/scripts.pory"

# 1147 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 1148 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1149 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 1150 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 1151 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1152 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1153 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 1154 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 1155 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 1156 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 1157 "data/maps/OldaleTown/scripts.pory"
	end
# 1158 "data/maps/OldaleTown/scripts.pory"

# 1159 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 1160 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 1161 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1162 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1163 "data/maps/OldaleTown/scripts.pory"
	return
# 1164 "data/maps/OldaleTown/scripts.pory"

# 1165 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 1166 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 1167 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1168 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1169 "data/maps/OldaleTown/scripts.pory"
	return
# 1170 "data/maps/OldaleTown/scripts.pory"

# 1171 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 1172 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1173 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1174 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1175 "data/maps/OldaleTown/scripts.pory"

# 1176 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 1177 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1178 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1179 "data/maps/OldaleTown/scripts.pory"

# 1180 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 1181 "data/maps/OldaleTown/scripts.pory"
	face_left
# 1182 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1183 "data/maps/OldaleTown/scripts.pory"

# 1184 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 1185 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1186 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1187 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1188 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1189 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1190 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1191 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1192 "data/maps/OldaleTown/scripts.pory"

# 1193 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 1194 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1195 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 1196 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1197 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1198 "data/maps/OldaleTown/scripts.pory"

# 1199 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 1200 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1201 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1202 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1203 "data/maps/OldaleTown/scripts.pory"

# 1204 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 1205 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 1206 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 1207 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1209 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 1210 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1211 "data/maps/OldaleTown/scripts.pory"

# 1212 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 1213 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1214 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1215 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1216 "data/maps/OldaleTown/scripts.pory"

# 1217 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 1218 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 1219 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 1220 "data/maps/OldaleTown/scripts.pory"

# 1221 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 1222 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 1223 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 1224 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 1225 "data/maps/OldaleTown/scripts.pory"

# 1226 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 1227 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 1228 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 1229 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 1230 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 1231 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 1232 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 1233 "data/maps/OldaleTown/scripts.pory"

# 1234 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 1235 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 1236 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 1237 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 1238 "data/maps/OldaleTown/scripts.pory"

# 1239 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 1240 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 1241 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 1242 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1243 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1244 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1245 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1246 "data/maps/OldaleTown/scripts.pory"

# 1247 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 1248 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1249 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1250 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1251 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1252 "data/maps/OldaleTown/scripts.pory"

# 1253 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 1254 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 1255 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 1256 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 1257 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 1258 "data/maps/OldaleTown/scripts.pory"

# 1259 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 1260 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 1261 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 1262 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 1263 "data/maps/OldaleTown/scripts.pory"

# 1264 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 1265 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 1266 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 1267 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 1268 "data/maps/OldaleTown/scripts.pory"

# 1269 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 1270 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 1271 "data/maps/OldaleTown/scripts.pory"
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

# 643 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_0:
# 644 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 645 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 650 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_1:
# 651 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 652 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 668 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_2:
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 691 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_0:
# 692 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 695 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1:
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 716 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_2:
# 717 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 718 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 748 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3:
# 749 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 773 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_4:
# 774 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 800 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5:
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 801 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 834 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_6:
# 835 "data/maps/OldaleTown/scripts.pory"
	walk_right
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

Phenac_Nascour_Encounter_1_Text_0:
# 660 "data/maps/OldaleTown/scripts.pory"
	.string "???: Hm?\n"
	.string "I'd guess you're a traveling trainer?\p"
	.string "Hm...\n"
	.string "I like what I see in your expression.\l"
	.string "Fufufu...\p"
	.string "I have a feeling I may see you again\n"
	.string "somewhere.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_0:
# 705 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "We finally found you!\l"
	.string "You filthy, double-crossing traitor!\p"
	.string "Wrecking the Hideout wasn't good\n"
	.string "enough for you?\p"
	.string "So you rip off the Snag Machine?\n"
	.string "You've got some nerve!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_1:
# 721 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Who are these people?\n"
	.string "Huh?\l"
	.string "Are they Team Snagem?\p"
	.string "{RIVAL}: And what did they mean\n"
	.string "by traitor?\p"
	.string "{PLAYER}...\n"
	.string "You mean...\p"
	.string "Grunt: That's right, pretty lady!\n"
	.string "He's from Team Snagem, just like us!\p"
	.string "But he's no ordinary member.\n"
	.string "He's a Snagger.\l"
	.string "He's the best in Team Snagem at\l"
	.string "snagging POKéMON without fail!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_2:
# 739 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: No way! {PLAYER}?!\n"
	.string "Is that true?\p"
	.string "...\p"
	.string "{RIVAL}: So it is true!\n"
	.string "That's a little shocking!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_3:
# 752 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Hey, {PLAYER}!\n"
	.string "Come on, hand it over!\p"
	.string "Give back the Snag Machine you ripped\n"
	.string "off from the Hideout!\p"
	.string "{RIVAL}: Snag Machine?\p"
	.string "{PLAYER}, do you really have\n"
	.string "something like that?$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_4:
# 764 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: The Snag Machine was built\n"
	.string "for trainers.\p"
	.string "When a trainer puts the\n"
	.string "Snag Machine on, their Poké Balls are\l"
	.string "converted.\p"
	.string "Ordinary Poké Balls are turned into\n"
	.string "Snag Balls that can steal POKéMON\l"
	.string "from their trainers in battle.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_5:
# 776 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Hey you blabbermouth!\n"
	.string "Keep that stuff secret!\p"
	.string "{RIVAL}: I get it, {PLAYER}.\n"
	.string "That's why these creeps are chasing\l"
	.string "after you.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_6:
# 786 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Creeps? What do you mean\n"
	.string "by creeps!\p"
	.string "Gah, this is getting us nowhere!\n"
	.string "If you won't give it up willingly,\l"
	.string "we'll take it back by force!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_7:
# 792 "data/maps/OldaleTown/scripts.pory"
	.string "Wakin: No!\n"
	.string "I'm not good enough?!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_8:
# 795 "data/maps/OldaleTown/scripts.pory"
	.string "Wakin: Blast you {PLAYER}!\n"
	.string "Don't think this is over!\p"
	.string "We're going to get that Snag Machine\n"
	.string "back. Just you wait!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_9:
# 820 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: Well what do you know,\n"
	.string "{PLAYER}!\p"
	.string "So you're from Team Snagem.\p"
	.string "Oh right. To be accurate, I should\n"
	.string "say former Team Snagem.\p"
	.string "It's okay. {PLAYER}, it doesn't matter\n"
	.string "to me who you are.\p"
	.string "After all, you're my gallant prince\n"
	.string "who rescued me when I was in trouble.\p"
	.string "So, it doesn't matter.\n"
	.string "Besides, I thought up something after\l"
	.string "listening to those creeps.\p"
	.string "Listen, {PLAYER}, we should\n"
	.string "go shopping for some Poké Balls.$"
