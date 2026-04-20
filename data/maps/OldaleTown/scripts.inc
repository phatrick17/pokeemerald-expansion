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
	clearflag FLAG_WILLIE_APPEAR_1
# 279 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Script_AskEscortRival::
# 284 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_0, MSGBOX_YESNO
# 289 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_AskEscortRival_1
	return

Script_AskEscortRival_1:
# 290 "data/maps/OldaleTown/scripts.pory"
	msgbox Script_AskEscortRival_Text_1, MSGBOX_DEFAULT
# 294 "data/maps/OldaleTown/scripts.pory"
	call Script_AskEscortRival
	return


Phenac_Runner_1_Dialogue_1::
# 306 "data/maps/OldaleTown/scripts.pory"
	lock
# 307 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 308 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 311 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Runner_1_Dialogue_2::
# 319 "data/maps/OldaleTown/scripts.pory"
	lock
# 320 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 321 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_MAP_UNLOCK_PYRITE, Phenac_Runner_1_Dialogue_2_2
# 329 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Phenac_Runner_1_Dialogue_2_5
# 339 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_2, MSGBOX_YESNO
# 344 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phenac_Runner_1_Dialogue_2_8
# 348 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_4, MSGBOX_DEFAULT
Phenac_Runner_1_Dialogue_2_7:
# 363 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Runner_1_Dialogue_2_2:
# 322 "data/maps/OldaleTown/scripts.pory"
	lock
# 323 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 324 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_0, MSGBOX_DEFAULT
# 326 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_Runner_1_Dialogue_2_5:
# 330 "data/maps/OldaleTown/scripts.pory"
	lock
# 331 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 332 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_Runner_1_Dialogue_2_8:
# 345 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Runner_1_Dialogue_2_Text_3, MSGBOX_DEFAULT
	goto Phenac_Runner_1_Dialogue_2_7


Phenac_Lady_1_Dialogue_1::
# 371 "data/maps/OldaleTown/scripts.pory"
	lock
# 372 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 373 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_MAP_UNLOCK_PYRITE, Phenac_Lady_1_Dialogue_1_2
# 382 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Phenac_Lady_1_Dialogue_1_5
# 393 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Lady_1_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 397 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Lady_1_Dialogue_1_2:
# 374 "data/maps/OldaleTown/scripts.pory"
	lock
# 375 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 376 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Lady_1_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 379 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_Lady_1_Dialogue_1_5:
# 383 "data/maps/OldaleTown/scripts.pory"
	lock
# 384 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 385 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Lady_1_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 390 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_GuyCenter_Dialogue_1::
# 405 "data/maps/OldaleTown/scripts.pory"
	lock
# 406 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 407 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Phenac_GuyCenter_Dialogue_1_2
# 416 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyCenter_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 420 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_GuyCenter_Dialogue_1_2:
# 408 "data/maps/OldaleTown/scripts.pory"
	lock
# 409 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyCenter_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 413 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Azurill_Dialogue_1::
# 428 "data/maps/OldaleTown/scripts.pory"
	lock
# 429 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 430 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 431 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Azurill_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 432 "data/maps/OldaleTown/scripts.pory"
	release
# 433 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_MARILL, Script_PhenacCity_Intro_Movement_1
	end


Phenac_GuyMart_Dialogue_1::
# 443 "data/maps/OldaleTown/scripts.pory"
	lock
# 444 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 445 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyMart_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 452 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Drig1::
# 461 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_DEFEAT_DRIG, Phenac_Drig1_1
# 464 "data/maps/OldaleTown/scripts.pory"
	call Phenac_OldManDrig_Dialogue_1
	return

Phenac_Drig1_1:
# 462 "data/maps/OldaleTown/scripts.pory"
	call Phenac_OldManDrig_Dialogue_2
	return


Phenac_OldManDrig_Dialogue_1::
# 470 "data/maps/OldaleTown/scripts.pory"
	lock
# 471 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 472 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_0, MSGBOX_YESNO
# 477 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_OldManDrig_Dialogue_1_2
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 485 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_2, Phenac_OldManDrig_Dialogue_1_Text_3
# 487 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_4, MSGBOX_DEFAULT
# 490 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_DEFEAT_DRIG
# 491 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_OldManDrig_Dialogue_1_2:
# 478 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 481 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_OldManDrig_Dialogue_2::
# 497 "data/maps/OldaleTown/scripts.pory"
	lock
# 498 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 499 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldManDrig_Dialogue_2_Text_0, MSGBOX_DEFAULT
# 502 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_LadyTopRight_Dialogue_1::
# 510 "data/maps/OldaleTown/scripts.pory"
	lock
# 511 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 512 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_LadyTopRight_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 518 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_DudeGym_Dialogue_1::
# 526 "data/maps/OldaleTown/scripts.pory"
	lock
# 527 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 528 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Phenac_DudeGym_Dialogue_1_2
# 538 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_DudeGym_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 544 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_DudeGym_Dialogue_1_2:
# 529 "data/maps/OldaleTown/scripts.pory"
	lock
# 530 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 531 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_DudeGym_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 535 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_OldLadyMayor_Dialogue_1::
# 552 "data/maps/OldaleTown/scripts.pory"
	lock
# 553 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 554 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_MAP_UNLOCK_PYRITE, Phenac_OldLadyMayor_Dialogue_1_2
# 561 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Phenac_OldLadyMayor_Dialogue_1_5
# 568 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldLadyMayor_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 573 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_OldLadyMayor_Dialogue_1_2:
# 555 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldLadyMayor_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 558 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_OldLadyMayor_Dialogue_1_5:
# 562 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_OldLadyMayor_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 565 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_DudeStairs_Dialogue_1::
# 581 "data/maps/OldaleTown/scripts.pory"
	lock
# 582 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_DudeStairs_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 593 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Zigzagoon_Dialogue_1::
# 601 "data/maps/OldaleTown/scripts.pory"
	lock
# 602 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 603 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 604 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Zigzagoon_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 605 "data/maps/OldaleTown/scripts.pory"
	release
# 606 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_ZIG_1, Script_PhenacCity_Intro_Movement_11
	end


Phenac_Kaib1::
# 617 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_DEFEAT_KAIB, Phenac_Kaib1_1
# 620 "data/maps/OldaleTown/scripts.pory"
	call Phenac_SkaterKaib_Dialogue_1
	return

Phenac_Kaib1_1:
# 618 "data/maps/OldaleTown/scripts.pory"
	call Phenac_SkaterKaib_Dialogue_2
	return


Phenac_SkaterKaib_Dialogue_1::
# 624 "data/maps/OldaleTown/scripts.pory"
	lock
# 625 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 626 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_0, MSGBOX_YESNO
# 631 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_SkaterKaib_Dialogue_1_2
# 636 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_2, MSGBOX_DEFAULT
# 639 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_3, Phenac_SkaterKaib_Dialogue_1_Text_3
# 642 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_4, MSGBOX_DEFAULT
# 645 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 646 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_DEFEAT_KAIB
# 647 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_SkaterKaib_Dialogue_1_2:
# 632 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 633 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_SkaterKaib_Dialogue_2::
# 653 "data/maps/OldaleTown/scripts.pory"
	lock
# 654 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 655 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_SkaterKaib_Dialogue_2_Text_0, MSGBOX_DEFAULT
# 657 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_GuyStadium_Dialogue_1::
# 665 "data/maps/OldaleTown/scripts.pory"
	lock
# 666 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 667 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1, Phenac_GuyStadium_Dialogue_1_2
# 681 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_0, MSGBOX_YESNO
# 683 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phenac_GuyStadium_Dialogue_1_5
# 686 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_4, MSGBOX_DEFAULT
Phenac_GuyStadium_Dialogue_1_4:
# 690 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_GuyStadium_Dialogue_1_2:
# 668 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_0, MSGBOX_YESNO
# 670 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phenac_GuyStadium_Dialogue_1_9
# 673 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_2, MSGBOX_DEFAULT
Phenac_GuyStadium_Dialogue_1_8:
# 678 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_GuyStadium_Dialogue_1_5:
# 684 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_3, MSGBOX_DEFAULT
	goto Phenac_GuyStadium_Dialogue_1_4

Phenac_GuyStadium_Dialogue_1_9:
# 671 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_GuyStadium_Dialogue_1_Text_1, MSGBOX_DEFAULT
	goto Phenac_GuyStadium_Dialogue_1_8


Phenac_Jigglypuff_Dialogue_1::
# 695 "data/maps/OldaleTown/scripts.pory"
	lock
# 696 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 697 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
# 698 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Jigglypuff_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 699 "data/maps/OldaleTown/scripts.pory"
	release
# 700 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_JIGGLY, Script_PhenacCity_Intro_Movement_1
	end


Phenac_Show_Runner1::
# 709 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_PHENAC_RUNNER
# 710 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Nascour_Encounter_1::
# 717 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_2
# 721 "data/maps/OldaleTown/scripts.pory"
	lockall
# 722 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 723 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 724 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 725 "data/maps/OldaleTown/scripts.pory"
	waitse
# 726 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 727 "data/maps/OldaleTown/scripts.pory"
	hidefollowernpc
# 728 "data/maps/OldaleTown/scripts.pory"
	delay 15
# 729 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Nascour_Encounter_1_Movement_0
# 733 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_NASCOUR_1
# 735 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 736 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_Movement_1
# 740 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 741 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 742 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Script_PhenacCity_Intro_Movement_9
# 745 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 746 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Nascour_Encounter_1_Text_0, MSGBOX_DEFAULT
# 753 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 754 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_NASCOUR_1, Phenac_Nascour_Encounter_1_Movement_2
# 757 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 758 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_NASCOUR_1
# 759 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_NASCOUR_1
# 760 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

Phenac_Nascour_Encounter_1_2:
# 718 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Team_Snagem_First_Encounter_Stadium::
# 766 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 767 "data/maps/OldaleTown/scripts.pory"
	setobjectxy PHENAC_JIGGLY, 11, 0
# 768 "data/maps/OldaleTown/scripts.pory"
	setobjectxy PHENAC_FISHER_GUY, 11, 0
# 769 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_JIGGLY
# 770 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_FISHER_GUY
# 771 "data/maps/OldaleTown/scripts.pory"
	lockall
# 772 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_RUI_STADIUM_1
# 773 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_1
# 774 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_2
# 775 "data/maps/OldaleTown/scripts.pory"
	addobject PHENAC_SNAGEM_GRUNT_3
# 776 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_PALACE, FALSE
# 777 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_0
# 780 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 781 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 784 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 787 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1
# 790 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 791 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_0, MSGBOX_DEFAULT
# 798 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 799 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Common_Movement_ExclamationMark
# 800 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 801 "data/maps/OldaleTown/scripts.pory"
	waitse
# 802 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_2
# 806 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 807 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_1, MSGBOX_DEFAULT
# 820 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 821 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_9
# 824 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 825 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_2, MSGBOX_DEFAULT
# 830 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 831 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_1
# 834 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 837 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 838 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_3, MSGBOX_DEFAULT
# 845 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 846 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 849 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 850 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_4, MSGBOX_DEFAULT
# 858 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 859 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_4
# 862 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_5, MSGBOX_DEFAULT
# 867 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 868 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3
# 871 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 872 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_6, MSGBOX_DEFAULT
# 877 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Phenac_Team_Snagem_First_Encounter_Stadium_Text_7
# 880 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_B_ARENA, FALSE
# 881 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_8, MSGBOX_DEFAULT
# 885 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 886 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_2, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 889 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_3, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 892 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_SNAGEM_GRUNT_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5
# 895 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 896 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Script_PhenacCity_Intro_Movement_9
# 899 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_11
# 902 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 903 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_1
# 904 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_2
# 905 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_SNAGEM_GRUNT_3
# 906 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Team_Snagem_First_Encounter_Stadium_Text_9, MSGBOX_DEFAULT
# 920 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_RUI_STADIUM_1, Phenac_Team_Snagem_First_Encounter_Stadium_Movement_6
# 923 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 924 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI_STADIUM_1
# 925 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_1
# 928 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 3
# 929 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1
# 930 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_City_Lady_Needs_Help_1::
# 935 "data/maps/OldaleTown/scripts.pory"
	lock
# 936 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 937 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 938 "data/maps/OldaleTown/scripts.pory"
	waitse
# 939 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Script_PhenacCity_Intro_Movement_0
# 942 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Phenac_City_Lady_Needs_Help_1_Movement_0
# 946 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 947 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_City_Lady_Needs_Help_1_Text_0, MSGBOX_DEFAULT
# 952 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 953 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_LADY_1, Phenac_City_Lady_Needs_Help_1_Movement_1
# 957 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 958 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 5
# 959 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


Phenac_Castform_Dialogue_1::
# 964 "data/maps/OldaleTown/scripts.pory"
	lock
# 965 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 966 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
# 967 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 968 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Grimer_Dialogue_1::
# 973 "data/maps/OldaleTown/scripts.pory"
	lock
# 974 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 975 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_GRIMER, CRY_MODE_NORMAL
# 976 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 977 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Bayleef_Dialogue_1::
# 982 "data/maps/OldaleTown/scripts.pory"
	lock
# 983 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 984 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 985 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 986 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Quilava_Dialogue_1::
# 991 "data/maps/OldaleTown/scripts.pory"
	lock
# 992 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 993 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_QUILAVA, CRY_MODE_NORMAL
# 994 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 995 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Croconaw_Dialogue_1::
# 1000 "data/maps/OldaleTown/scripts.pory"
	lock
# 1001 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1002 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CROCONAW, CRY_MODE_NORMAL
# 1003 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 1004 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Verde_Battle_1::
# 1009 "data/maps/OldaleTown/scripts.pory"
	lock
# 1010 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1011 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Script_PhenacCity_Intro_Movement_11
# 1014 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1015 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_0, MSGBOX_YESNO
# 1017 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_Verde_Battle_1_2
# 1024 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_2, MSGBOX_DEFAULT
# 1028 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GABRIELLE_1, Phenac_Verde_Battle_1_Text_3
# 1031 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_BAYLEEF
# 1032 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_4, MSGBOX_DEFAULT
# 1035 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1036 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 1037 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1038 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1039 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_5, MSGBOX_DEFAULT
# 1041 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1042 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_VERDE_OUTSIDE_1, Phenac_Verde_Battle_1_Movement_0
# 1045 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1046 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_VERDE_OUTSIDE_1
# 1047 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Phenac_Verde_Battle_1_Movement_1
# 1050 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1051 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_6, MSGBOX_DEFAULT
# 1056 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 1057 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Verde_Battle_1_2:
# 1018 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_1, MSGBOX_DEFAULT
# 1021 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Rosso_Battle_1::
# 1062 "data/maps/OldaleTown/scripts.pory"
	lock
# 1063 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1064 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Script_PhenacCity_Intro_Movement_9
# 1067 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1068 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_0, MSGBOX_YESNO
# 1070 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_Rosso_Battle_1_2
# 1077 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_2, MSGBOX_DEFAULT
# 1081 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, Phenac_Rosso_Battle_1_Text_0
# 1084 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_QUILAVA
# 1085 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Rosso_Battle_1_Text_1, MSGBOX_DEFAULT
# 1088 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1089 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 1090 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1091 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1092 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Rosso_Battle_1_Text_2, MSGBOX_DEFAULT
# 1094 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1095 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1096 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_ROSSO_OUTSIDE_1, Phenac_Rosso_Battle_1_Movement_0
# 1099 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1100 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_ROSSO_OUTSIDE_1
# 1101 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Phenac_Verde_Battle_1_Movement_1
# 1104 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1105 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_6, MSGBOX_DEFAULT
# 1110 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 1111 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Rosso_Battle_1_2:
# 1071 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_1, MSGBOX_DEFAULT
# 1074 "data/maps/OldaleTown/scripts.pory"
	release
	end


Phenac_Bluno_Battle_1::
# 1116 "data/maps/OldaleTown/scripts.pory"
	lock
# 1117 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1118 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Script_PhenacCity_Intro_Movement_1
# 1121 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1122 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_0, MSGBOX_YESNO
# 1124 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_Bluno_Battle_1_2
# 1131 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_2, MSGBOX_DEFAULT
# 1135 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MARCEL, Phenac_Bluno_Battle_1_Text_0
# 1138 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_CROCONAW
# 1139 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_GRIMER
# 1140 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Bluno_Battle_1_Text_1, MSGBOX_DEFAULT
# 1143 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1144 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 1145 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1146 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1147 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Bluno_Battle_1_Text_2, MSGBOX_DEFAULT
# 1149 "data/maps/OldaleTown/scripts.pory"
	applymovement PHENAC_BLUNO_OUTSIDE_1, Phenac_Bluno_Battle_1_Movement_0
# 1152 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1153 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_BLUNO_OUTSIDE_1
# 1154 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Phenac_Verde_Battle_1_Movement_1
# 1157 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1158 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_6, MSGBOX_DEFAULT
# 1163 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 1164 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_MAP_UNLOCK_PYRITE
# 1165 "data/maps/OldaleTown/scripts.pory"
	release
	end

Phenac_Bluno_Battle_1_2:
# 1125 "data/maps/OldaleTown/scripts.pory"
	msgbox Phenac_Verde_Battle_1_Text_1, MSGBOX_DEFAULT
# 1128 "data/maps/OldaleTown/scripts.pory"
	release
	end


OldaleTown_MapScripts::
# 1170 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 1171 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 1172 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, OldaleTown_EventScript_RunPhenacIntro
# 1173 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 2, Phenac_Team_Snagem_First_Encounter_Stadium
# 1174 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 4, Phenac_City_Lady_Needs_Help_1
	.2byte 0


# 1187 "data/maps/OldaleTown/scripts.pory"

# 1188 "data/maps/OldaleTown/scripts.pory"

# 1189 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 1190 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 1191 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 1192 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 1193 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 1194 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 1195 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_CAR_AND_BAG_OUTSKIRT, OldaleTown_EventScript_HidePhenacRui
# 1196 "data/maps/OldaleTown/scripts.pory"
    goto_if_set FLAG_PHENAC_FOLLY_1, OldaleTown_EventScript_EndTransition
# 1197 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1198 "data/maps/OldaleTown/scripts.pory"
	end
# 1199 "data/maps/OldaleTown/scripts.pory"

# 1200 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_EndTransition:
# 1201 "data/maps/OldaleTown/scripts.pory"
	end
# 1202 "data/maps/OldaleTown/scripts.pory"

# 1203 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RunPhenacIntro::
# 1204 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 1205 "data/maps/OldaleTown/scripts.pory"
	call Script_PhenacCity_Intro
# 1206 "data/maps/OldaleTown/scripts.pory"
	return
# 1207 "data/maps/OldaleTown/scripts.pory"

# 1208 "data/maps/OldaleTown/scripts.pory"

# 1209 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_HidePhenacRui::
# 1210 "data/maps/OldaleTown/scripts.pory"
	removeobject PHENAC_RUI
# 1211 "data/maps/OldaleTown/scripts.pory"
	return
# 1212 "data/maps/OldaleTown/scripts.pory"

# 1213 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 1214 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 1215 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 1216 "data/maps/OldaleTown/scripts.pory"
	return
# 1217 "data/maps/OldaleTown/scripts.pory"

# 1218 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 1219 "data/maps/OldaleTown/scripts.pory"
	return
# 1220 "data/maps/OldaleTown/scripts.pory"

# 1221 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 1222 "data/maps/OldaleTown/scripts.pory"
	return
# 1223 "data/maps/OldaleTown/scripts.pory"

# 1224 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 1225 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 1226 "data/maps/OldaleTown/scripts.pory"
	end
# 1227 "data/maps/OldaleTown/scripts.pory"

# 1228 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 1229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 1230 "data/maps/OldaleTown/scripts.pory"
	end
# 1231 "data/maps/OldaleTown/scripts.pory"

# 1232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 1233 "data/maps/OldaleTown/scripts.pory"
	lock
# 1234 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1235 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 1236 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 1237 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 1238 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 1239 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 1240 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1241 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 1242 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 1243 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 1244 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 1245 "data/maps/OldaleTown/scripts.pory"
	end
# 1246 "data/maps/OldaleTown/scripts.pory"

# 1247 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 1248 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 1249 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 1250 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1251 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 1252 "data/maps/OldaleTown/scripts.pory"
	end
# 1253 "data/maps/OldaleTown/scripts.pory"

# 1254 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 1255 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 1256 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 1257 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1258 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 1259 "data/maps/OldaleTown/scripts.pory"
	end
# 1260 "data/maps/OldaleTown/scripts.pory"

# 1261 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 1262 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 1263 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 1264 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1265 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 1266 "data/maps/OldaleTown/scripts.pory"
	end
# 1267 "data/maps/OldaleTown/scripts.pory"

# 1268 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 1269 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 1270 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 1271 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 1272 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 1273 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 1274 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 1275 "data/maps/OldaleTown/scripts.pory"
	release
# 1276 "data/maps/OldaleTown/scripts.pory"
	end
# 1277 "data/maps/OldaleTown/scripts.pory"

# 1278 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 1279 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 1280 "data/maps/OldaleTown/scripts.pory"
	release
# 1281 "data/maps/OldaleTown/scripts.pory"
	end
# 1282 "data/maps/OldaleTown/scripts.pory"

# 1283 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 1284 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 1285 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 1286 "data/maps/OldaleTown/scripts.pory"
	release
# 1287 "data/maps/OldaleTown/scripts.pory"
	end
# 1288 "data/maps/OldaleTown/scripts.pory"

# 1289 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 1290 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1291 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1292 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1293 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1294 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1295 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1296 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1297 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1298 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1299 "data/maps/OldaleTown/scripts.pory"

# 1300 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 1301 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1302 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1303 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1304 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1305 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1306 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1307 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1308 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1309 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1310 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1311 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1312 "data/maps/OldaleTown/scripts.pory"

# 1313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 1314 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1315 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1316 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1317 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1318 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1319 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1320 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1321 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1322 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1323 "data/maps/OldaleTown/scripts.pory"

# 1324 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 1325 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1326 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1327 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1328 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1329 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1330 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1331 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1332 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1333 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1334 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1335 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1336 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1337 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1338 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1339 "data/maps/OldaleTown/scripts.pory"

# 1340 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 1341 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1342 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1343 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1344 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1345 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1346 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1347 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1348 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1349 "data/maps/OldaleTown/scripts.pory"

# 1350 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 1351 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1352 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1353 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1354 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 1355 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1356 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1357 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1358 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1359 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1360 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1361 "data/maps/OldaleTown/scripts.pory"

# 1362 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 1363 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1364 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1365 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1366 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1367 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1368 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1369 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1370 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1371 "data/maps/OldaleTown/scripts.pory"

# 1372 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 1373 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1374 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1375 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1376 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1377 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1378 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1379 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1380 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1381 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1382 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1383 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1384 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1385 "data/maps/OldaleTown/scripts.pory"

# 1386 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 1387 "data/maps/OldaleTown/scripts.pory"
	lock
# 1388 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 1389 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 1390 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 1391 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1392 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 1393 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1394 "data/maps/OldaleTown/scripts.pory"
	release
# 1395 "data/maps/OldaleTown/scripts.pory"
	end
# 1396 "data/maps/OldaleTown/scripts.pory"

# 1397 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 1398 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1399 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 1400 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 1401 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1402 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 1403 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1404 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 1405 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1406 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 1407 "data/maps/OldaleTown/scripts.pory"
	end
# 1408 "data/maps/OldaleTown/scripts.pory"

# 1409 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 1410 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 1411 "data/maps/OldaleTown/scripts.pory"
	release
# 1412 "data/maps/OldaleTown/scripts.pory"
	end
# 1413 "data/maps/OldaleTown/scripts.pory"

# 1414 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 1415 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1416 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 1417 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1418 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 1419 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1420 "data/maps/OldaleTown/scripts.pory"
	end
# 1421 "data/maps/OldaleTown/scripts.pory"

# 1422 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 1423 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1424 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 1425 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1426 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1427 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1428 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1429 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1430 "data/maps/OldaleTown/scripts.pory"
	end
# 1431 "data/maps/OldaleTown/scripts.pory"

# 1432 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 1433 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1434 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 1435 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1436 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1437 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1438 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1439 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1440 "data/maps/OldaleTown/scripts.pory"
	end
# 1441 "data/maps/OldaleTown/scripts.pory"

# 1442 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 1443 "data/maps/OldaleTown/scripts.pory"
	lockall
# 1444 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 1445 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1446 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1447 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1448 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 1449 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 1450 "data/maps/OldaleTown/scripts.pory"
	end
# 1451 "data/maps/OldaleTown/scripts.pory"

# 1452 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 1453 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1454 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 1455 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 1456 "data/maps/OldaleTown/scripts.pory"
	end
# 1457 "data/maps/OldaleTown/scripts.pory"

# 1458 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 1459 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 1460 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 1461 "data/maps/OldaleTown/scripts.pory"
	end
# 1462 "data/maps/OldaleTown/scripts.pory"

# 1463 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 1464 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 1465 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 1466 "data/maps/OldaleTown/scripts.pory"
	end
# 1467 "data/maps/OldaleTown/scripts.pory"

# 1468 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 1469 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1470 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 1471 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 1472 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1473 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1474 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 1475 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 1476 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 1477 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 1478 "data/maps/OldaleTown/scripts.pory"
	end
# 1479 "data/maps/OldaleTown/scripts.pory"

# 1480 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 1481 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 1482 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1483 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1484 "data/maps/OldaleTown/scripts.pory"
	return
# 1485 "data/maps/OldaleTown/scripts.pory"

# 1486 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 1487 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 1488 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 1489 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 1490 "data/maps/OldaleTown/scripts.pory"
	return
# 1491 "data/maps/OldaleTown/scripts.pory"

# 1492 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 1493 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1494 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1495 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1496 "data/maps/OldaleTown/scripts.pory"

# 1497 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 1498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1499 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1500 "data/maps/OldaleTown/scripts.pory"

# 1501 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 1502 "data/maps/OldaleTown/scripts.pory"
	face_left
# 1503 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1504 "data/maps/OldaleTown/scripts.pory"

# 1505 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 1506 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1507 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1508 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1509 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1510 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1511 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1512 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1513 "data/maps/OldaleTown/scripts.pory"

# 1514 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 1515 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1516 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 1517 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 1518 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1519 "data/maps/OldaleTown/scripts.pory"

# 1520 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 1521 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 1522 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1523 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1524 "data/maps/OldaleTown/scripts.pory"

# 1525 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 1526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 1527 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 1528 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 1529 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1530 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 1531 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1532 "data/maps/OldaleTown/scripts.pory"

# 1533 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 1534 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1535 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1536 "data/maps/OldaleTown/scripts.pory"
	step_end
# 1537 "data/maps/OldaleTown/scripts.pory"

# 1538 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 1539 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 1540 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 1541 "data/maps/OldaleTown/scripts.pory"

# 1542 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 1543 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 1544 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 1545 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 1546 "data/maps/OldaleTown/scripts.pory"

# 1547 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 1548 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 1549 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 1550 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 1551 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 1552 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 1553 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 1554 "data/maps/OldaleTown/scripts.pory"

# 1555 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 1556 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 1557 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 1558 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 1559 "data/maps/OldaleTown/scripts.pory"

# 1560 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 1561 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 1562 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 1563 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1564 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1565 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1566 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1567 "data/maps/OldaleTown/scripts.pory"

# 1568 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 1569 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 1570 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 1571 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 1572 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 1573 "data/maps/OldaleTown/scripts.pory"

# 1574 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 1575 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 1576 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 1577 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 1578 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 1579 "data/maps/OldaleTown/scripts.pory"

# 1580 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 1581 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 1582 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 1583 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 1584 "data/maps/OldaleTown/scripts.pory"

# 1585 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 1586 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 1587 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 1588 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 1589 "data/maps/OldaleTown/scripts.pory"

# 1590 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 1591 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 1592 "data/maps/OldaleTown/scripts.pory"
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

# 729 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_0:
# 730 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 731 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 736 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_1:
# 737 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 738 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 754 "data/maps/OldaleTown/scripts.pory"
Phenac_Nascour_Encounter_1_Movement_2:
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 777 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_0:
# 778 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 781 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_1:
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 782 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 802 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_2:
# 803 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 804 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 834 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_3:
# 835 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 859 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_4:
# 860 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 886 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_5:
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 887 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 920 "data/maps/OldaleTown/scripts.pory"
Phenac_Team_Snagem_First_Encounter_Stadium_Movement_6:
# 921 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 942 "data/maps/OldaleTown/scripts.pory"
Phenac_City_Lady_Needs_Help_1_Movement_0:
# 943 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 943 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 943 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 944 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 944 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 944 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 944 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 944 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
	step_end

# 953 "data/maps/OldaleTown/scripts.pory"
Phenac_City_Lady_Needs_Help_1_Movement_1:
# 954 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 954 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 954 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 955 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1042 "data/maps/OldaleTown/scripts.pory"
Phenac_Verde_Battle_1_Movement_0:
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1043 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1047 "data/maps/OldaleTown/scripts.pory"
Phenac_Verde_Battle_1_Movement_1:
# 1048 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 1096 "data/maps/OldaleTown/scripts.pory"
Phenac_Rosso_Battle_1_Movement_0:
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
# 1097 "data/maps/OldaleTown/scripts.pory"
	walk_fast_right
	step_end

# 1149 "data/maps/OldaleTown/scripts.pory"
Phenac_Bluno_Battle_1_Movement_0:
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1150 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
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
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "Please can I get you to escort me\n"
	.string "for a while?$"

Script_AskEscortRival_Text_1:
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "I don't have anyone else that I can\n"
	.string "turn to.$"

Phenac_Runner_1_Dialogue_1_Text_0:
# 308 "data/maps/OldaleTown/scripts.pory"
	.string "You know, you two make one attractive\n"
	.string "couple! It makes me a little envious.\l"
	.string "Ahahaha!$"

Phenac_Runner_1_Dialogue_2_Text_0:
# 324 "data/maps/OldaleTown/scripts.pory"
	.string "This town's been the very picture of\n"
	.string "peace, but now the mood is tense and\l"
	.string "nervous.\p"
	.string "There must be something terrible afoot.$"

Phenac_Runner_1_Dialogue_2_Text_1:
# 332 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you two! There's serious trouble!\p"
	.string "Those thugs came back with help!\n"
	.string "I think they went off towards what we\l"
	.string "call the Pre Gym!$"

Phenac_Runner_1_Dialogue_2_Text_2:
# 339 "data/maps/OldaleTown/scripts.pory"
	.string "Hiya! If it's not the good-looking\n"
	.string "couple from earlier!\p"
	.string "So, what's up?\n"
	.string "Did you manage to find anything out?$"

Phenac_Runner_1_Dialogue_2_Text_3:
# 345 "data/maps/OldaleTown/scripts.pory"
	.string "Is that right! Well, that's great, then!\n"
	.string "Ahahaha!$"

Phenac_Runner_1_Dialogue_2_Text_4:
# 348 "data/maps/OldaleTown/scripts.pory"
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
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "Isn't this awful?\n"
	.string "What are all these horrible people\l"
	.string "doing here?$"

Phenac_Lady_1_Dialogue_1_Text_1:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "Something terrible's happening!\p"
	.string "A whole lot of scary men came here!\n"
	.string "I think I even saw those two creeps\l"
	.string "who took off in the truck earlier!$"

Phenac_Lady_1_Dialogue_1_Text_2:
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "The Mayor's house is near the town\n"
	.string "square past here.\p"
	.string "Go up the stairs from the square, and\n"
	.string "it's on your left.$"

Phenac_GuyCenter_Dialogue_1_Text_0:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "What? What?\p"
	.string "Is something serious going on?$"

Phenac_GuyCenter_Dialogue_1_Text_1:
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "There was some ruckus going on\n"
	.string "near the town's entrance earlier.\p"
	.string "It'd better not be the goons again\n"
	.string "from the next town over.$"

Phenac_Azurill_Dialogue_1_Text_0:
# 431 "data/maps/OldaleTown/scripts.pory"
	.string "Ruri rurii.$"

Phenac_GuyMart_Dialogue_1_Text_0:
# 445 "data/maps/OldaleTown/scripts.pory"
	.string "If you're still traveling, you should\n"
	.string "stock up on supplies at the shop there.\p"
	.string "I recommend it.\n"
	.string "After all, it's my hou...\l"
	.string "Er... Ahem!\p"
	.string "Uh... Well, anyway, that shop has\n"
	.string "the best reputation around these\l"
	.string "parts!$"

Phenac_OldManDrig_Dialogue_1_Text_0:
# 472 "data/maps/OldaleTown/scripts.pory"
	.string "What fine weather this is!\n"
	.string "It's truly a perfect sort of day for\l"
	.string "a POKéMON battle.\p"
	.string "So, young one, how about indulging\n"
	.string "this old man? Let us battle.$"

Phenac_OldManDrig_Dialogue_1_Text_1:
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "Oh? How boring.\n"
	.string "You young people today…\l"
	.string "You have no gumption, I say.$"

Phenac_OldManDrig_Dialogue_1_Text_2:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "All right!$"

Phenac_OldManDrig_Dialogue_1_Text_3:
# 486 "data/maps/OldaleTown/scripts.pory"
	.string "Woah! I've got to concede this one lad!$"

Phenac_OldManDrig_Dialogue_1_Text_4:
# 487 "data/maps/OldaleTown/scripts.pory"
	.string "DRIG: Ah, yes.\n"
	.string "You're young, but you've got a bit\l"
	.string "of spine!$"

Phenac_OldManDrig_Dialogue_2_Text_0:
# 499 "data/maps/OldaleTown/scripts.pory"
	.string "DRIG: Why, you're just like me when\n"
	.string "I was young!\l"
	.string "Well done, indeed.$"

Phenac_LadyTopRight_Dialogue_1_Text_0:
# 512 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, are you traveling?\n"
	.string "Aww, I envy you!\p"
	.string "Is it a journey to become an expert\n"
	.string "trainer?\l"
	.string "Or a quest to meet POKéMON?\l"
	.string "Either way, you make me jealous!$"

Phenac_DudeGym_Dialogue_1_Text_0:
# 531 "data/maps/OldaleTown/scripts.pory"
	.string "I saw a bunch of scary-looking people\n"
	.string "going towards the Mayor's house.\p"
	.string "But it won't matter if those guys do\n"
	.string "something bad.\p"
	.string "I'm sure Justy won't let them get away\n"
	.string "with anything!$"

Phenac_DudeGym_Dialogue_1_Text_1:
# 538 "data/maps/OldaleTown/scripts.pory"
	.string "Um ... I ...\n"
	.string "I really look up to Justy, the Leader\l"
	.string "of the Pregym.\p"
	.string "He's really cool!\n"
	.string "Of course, he's really a tough trainer\l"
	.string "at POKéMON battles, too!$"

Phenac_OldLadyMayor_Dialogue_1_Text_0:
# 556 "data/maps/OldaleTown/scripts.pory"
	.string "Oh? You were safe?\n"
	.string "The MAYOR wasn't home, either, I hear.\l"
	.string "All's well that ends well!$"

Phenac_OldLadyMayor_Dialogue_1_Text_1:
# 562 "data/maps/OldaleTown/scripts.pory"
	.string "My goodness! It's terrible!\p"
	.string "A big group of shady looking men\n"
	.string "marched into the MAYOR's house!$"

Phenac_OldLadyMayor_Dialogue_1_Text_2:
# 568 "data/maps/OldaleTown/scripts.pory"
	.string "That large house is the MAYOR's\n"
	.string "home.\p"
	.string "If something concerns you while\n"
	.string "you're traveling, you should visit\l"
	.string "the MAYOR for his advice.$"

Phenac_DudeStairs_Dialogue_1_Text_0:
# 583 "data/maps/OldaleTown/scripts.pory"
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
# 604 "data/maps/OldaleTown/scripts.pory"
	.string "Gwonn!$"

Phenac_SkaterKaib_Dialogue_1_Text_0:
# 626 "data/maps/OldaleTown/scripts.pory"
	.string "I'm no good at schoolwork, but I'm\n"
	.string "pretty hot stuff at POKéMON battles.\p"
	.string "You're a trainer, too, aren't you?\n"
	.string "Let's duke it out!\l"
	.string "Let's battle!$"

Phenac_SkaterKaib_Dialogue_1_Text_1:
# 632 "data/maps/OldaleTown/scripts.pory"
	.string "Awww, you cheapskate!$"

Phenac_SkaterKaib_Dialogue_1_Text_2:
# 636 "data/maps/OldaleTown/scripts.pory"
	.string "All right! Here we come,\n"
	.string "and there's no holding back!$"

Phenac_SkaterKaib_Dialogue_1_Text_3:
# 640 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Ouch, no!\n"
	.string "That wasn't supposed to happen!$"

Phenac_SkaterKaib_Dialogue_1_Text_4:
# 642 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Big guy, you're tough.\n"
	.string "I want you to have this since you're\l"
	.string "so good.$"

Phenac_SkaterKaib_Dialogue_2_Text_0:
# 655 "data/maps/OldaleTown/scripts.pory"
	.string "KAIB: Big guy, you're tough.\n"
	.string "I hope that TM comes in handy!$"

Phenac_GuyStadium_Dialogue_1_Text_0:
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
	.string "Did you know?!$"

Phenac_GuyStadium_Dialogue_1_Text_1:
# 671 "data/maps/OldaleTown/scripts.pory"
	.string "Isn't it terrifying!$"

Phenac_GuyStadium_Dialogue_1_Text_2:
# 673 "data/maps/OldaleTown/scripts.pory"
	.string "My, you're awfully calm!\p"
	.string "They tell me that Team Snagem appeared\n"
	.string "here a little while ago!\p"
	.string "That's terrifying! I must be careful!\p"
	.string "I mustn't let them steal away my\n"
	.string "precious POKéMON!$"

Phenac_GuyStadium_Dialogue_1_Text_3:
# 684 "data/maps/OldaleTown/scripts.pory"
	.string "Isn't it amazing!$"

Phenac_GuyStadium_Dialogue_1_Text_4:
# 686 "data/maps/OldaleTown/scripts.pory"
	.string "They say that Team Snagem's\n"
	.string "hideout was blown up!\p"
	.string "Who could have done such a thing?$"

Phenac_Jigglypuff_Dialogue_1_Text_0:
# 698 "data/maps/OldaleTown/scripts.pory"
	.string "Pururuun.$"

Phenac_Nascour_Encounter_1_Text_0:
# 746 "data/maps/OldaleTown/scripts.pory"
	.string "???: Hm?\n"
	.string "I'd guess you're a traveling trainer?\p"
	.string "Hm...\n"
	.string "I like what I see in your expression.\l"
	.string "Fufufu...\p"
	.string "I have a feeling I may see you again\n"
	.string "somewhere.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_0:
# 791 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "We finally found you!\l"
	.string "You filthy, double-crossing traitor!\p"
	.string "Wrecking the Hideout wasn't good\n"
	.string "enough for you?\p"
	.string "So you rip off the Snag Machine?\n"
	.string "You've got some nerve!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_1:
# 807 "data/maps/OldaleTown/scripts.pory"
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
# 825 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: No way! {PLAYER}?!\n"
	.string "Is that true?\p"
	.string "...\p"
	.string "{RIVAL}: So it is true!\n"
	.string "That's a little shocking!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_3:
# 838 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Hey, {PLAYER}!\n"
	.string "Come on, hand it over!\p"
	.string "Give back the Snag Machine you ripped\n"
	.string "off from the Hideout!\p"
	.string "{RIVAL}: Snag Machine?\p"
	.string "{PLAYER}, do you really have\n"
	.string "something like that?$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_4:
# 850 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: The Snag Machine was built\n"
	.string "for trainers.\p"
	.string "When a trainer puts the\n"
	.string "Snag Machine on, their Poké Balls are\l"
	.string "converted.\p"
	.string "Ordinary Poké Balls are turned into\n"
	.string "Snag Balls that can steal POKéMON\l"
	.string "from their trainers in battle.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_5:
# 862 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Hey you blabbermouth!\n"
	.string "Keep that stuff secret!\p"
	.string "{RIVAL}: I get it, {PLAYER}.\n"
	.string "That's why these creeps are chasing\l"
	.string "after you.$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_6:
# 872 "data/maps/OldaleTown/scripts.pory"
	.string "Grunt: Creeps? What do you mean\n"
	.string "by creeps!\p"
	.string "Gah, this is getting us nowhere!\n"
	.string "If you won't give it up willingly,\l"
	.string "we'll take it back by force!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_7:
# 878 "data/maps/OldaleTown/scripts.pory"
	.string "Wakin: No!\n"
	.string "I'm not good enough?!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_8:
# 881 "data/maps/OldaleTown/scripts.pory"
	.string "Wakin: Blast you {PLAYER}!\n"
	.string "Don't think this is over!\p"
	.string "We're going to get that Snag Machine\n"
	.string "back. Just you wait!$"

Phenac_Team_Snagem_First_Encounter_Stadium_Text_9:
# 906 "data/maps/OldaleTown/scripts.pory"
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

Phenac_City_Lady_Needs_Help_1_Text_0:
# 947 "data/maps/OldaleTown/scripts.pory"
	.string "Oh! It's you two!\n"
	.string "Something terrible's happening!\p"
	.string "A whole lot of scary men came here!\n"
	.string "I think I even saw those two creeps\l"
	.string "who took off in the truck earlier!$"

Phenac_Verde_Battle_1_Text_0:
# 1015 "data/maps/OldaleTown/scripts.pory"
	.string "Sorry to break it to you, but I'm not\n"
	.string "about to let you pass.\p"
	.string "Or do you have this idea that you can\n"
	.string "take me in a battle?$"

Phenac_Verde_Battle_1_Text_1:
# 1018 "data/maps/OldaleTown/scripts.pory"
	.string "Wahaha!\p"
	.string "Well, of course!\n"
	.string "I'm vastly superior to the other two!$"

Phenac_Verde_Battle_1_Text_2:
# 1024 "data/maps/OldaleTown/scripts.pory"
	.string "Wahaha!\n"
	.string "Who's going to beat me?\p"
	.string "You are?!\n"
	.string "Don't be crying out of regret later!$"

Phenac_Verde_Battle_1_Text_3:
# 1029 "data/maps/OldaleTown/scripts.pory"
	.string "Verde: Y-You...You're tough!\n"
	.string "Can't blame them for losing earlier!$"

Phenac_Verde_Battle_1_Text_4:
# 1032 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: What was that strange\n"
	.string "POKéMON?\p"
	.string "What did you people do to it?!\p"
	.string "Verde: It's a POKéMON that we turned\n"
	.string "into a fighting machine by artificially\l"
	.string "closing the door to its heart.$"

Phenac_Verde_Battle_1_Text_5:
# 1039 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: You artificially closed the\n"
	.string "door to that poor POKéMON's heart?!\p"
	.string "Verde: Humph. Knowing that's not going\n"
	.string "to help you do anything!$"

Phenac_Verde_Battle_1_Text_6:
# 1051 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: I know!\n"
	.string "When I was little, I heard about that.\p"
	.string "They say that if any POKéMON closes\n"
	.string "the door to its heart, it can be\l"
	.string "gradually reopened by battling\l"
	.string "together with it.\p"
	.string "{PLAYER}, let's go. Those guys are\n"
	.string "probably headed for PYRITE TOWN.\p"
	.string "After all, it was in PYRITE that they\n"
	.string "captured me.$"

Phenac_Rosso_Battle_1_Text_0:
# 1082 "data/maps/OldaleTown/scripts.pory"
	.string "Rosso: Y-You...You're tough!\n"
	.string "Can't blame them for losing earlier!$"

Phenac_Rosso_Battle_1_Text_1:
# 1085 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: What was that strange\n"
	.string "POKéMON?\p"
	.string "What did you people do to it?!\p"
	.string "Rosso: It's a POKéMON that we turned\n"
	.string "into a fighting machine by artificially\l"
	.string "closing the door to its heart.$"

Phenac_Rosso_Battle_1_Text_2:
# 1092 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: You artificially closed the\n"
	.string "door to that poor POKéMON's heart?!\p"
	.string "Rosso: Humph. Knowing that's not going\n"
	.string "to help you do anything!$"

Phenac_Bluno_Battle_1_Text_0:
# 1136 "data/maps/OldaleTown/scripts.pory"
	.string "Bluno: Y-You...You're tough!\n"
	.string "Can't blame them for losing earlier!$"

Phenac_Bluno_Battle_1_Text_1:
# 1140 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: What was that strange\n"
	.string "POKéMON?\p"
	.string "What did you people do to it?!\p"
	.string "Bluno: It's a POKéMON that we turned\n"
	.string "into a fighting machine by artificially\l"
	.string "closing the door to its heart.$"

Phenac_Bluno_Battle_1_Text_2:
# 1147 "data/maps/OldaleTown/scripts.pory"
	.string "{RIVAL}: You artificially closed the\n"
	.string "door to that poor POKéMON's heart?!\p"
	.string "Bluno: Humph. Knowing that's not going\n"
	.string "to help you do anything!$"
