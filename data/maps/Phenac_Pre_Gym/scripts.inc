Phenac_Pre_Gym_MapScripts::
	.byte 0


Battlesim1::
# 4 "data/maps/Phenac_Pre_Gym/scripts.pory"
	lockall
# 5 "data/maps/Phenac_Pre_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_0, MSGBOX_YESNO
# 42 "data/maps/Phenac_Pre_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Battlesim1_2
# 46 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_CLICK
# 54 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 55 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_CLICK
# 56 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 57 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Battlesim1_Movement_0
# 61 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 62 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 33
# 63 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement PHENAC_PRE_GYM_KRANE, Battlesim1_Movement_1
# 66 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Battlesim1_Movement_1
# 69 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Battlesim1_Movement_2
# 72 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 73 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 30
# 74 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadenewbgm MUS_NONE
# 76 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_2, MSGBOX_DEFAULT
# 83 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 84 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Battlesim1_Movement_3
# 87 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 88 "data/maps/Phenac_Pre_Gym/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 89 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 90 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 91 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 60
# 92 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Battlesim1_Text_3
# 94 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 30
# 96 "data/maps/Phenac_Pre_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 97 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 98 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 99 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse MUS_HEAL
# 100 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 101 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 102 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_4, MSGBOX_DEFAULT
# 111 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 112 "data/maps/Phenac_Pre_Gym/scripts.pory"
	warp MAP_OLDALE_TOWN, 25, 29
# 113 "data/maps/Phenac_Pre_Gym/scripts.pory"
	releaseall
	end

Battlesim1_2:
# 43 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


GiveShadowMonTest::
# 118 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_QUILAVA_SHADOW, 100
# 119 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_BAYLEEF_SHADOW, 100
# 120 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


# 58 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_0:
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
	step_end

# 63 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_1:
# 64 "data/maps/Phenac_Pre_Gym/scripts.pory"
	face_player
	step_end

# 69 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_2:
# 70 "data/maps/Phenac_Pre_Gym/scripts.pory"
	face_down
	step_end

# 84 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_3:
# 85 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_in_place_slow_down
	step_end

Battlesim1_Text_0:
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Hey there! Welcome to the Pre Gym.\n"
	.string "My name is Professor Krane.\p"
	.string "Krane: I know - I'm not Justy -\n"
	.string "the Pre Gym Leader.\p"
	.string "Justy is actually training inside my\n"
	.string "novel invention: the Battle Simulator.\p"
	.string "The Battle Simulator is a prototype\n"
	.string "which projects you into an Augmented\l"
	.string "Reality space to do its name:\p"
	.string "Simulate battles!\p"
	.string "Perfect for trainers to practice and\n"
	.string "simulate certain scenarios in order to\l"
	.string "improve fast.\p"
	.string "I've been researching this invention\n"
	.string "for the past 5 years.\p"
	.string "I brought it to Justy's gym as\n"
	.string "he offered to test it out!\p"
	.string "You look like a strong trainer.\n"
	.string "Were you planning to undergo Justy's\l"
	.string "challenge?\p"
	.string "...\p"
	.string "You were! I see.\n"
	.string "Well I have a proposition for you.\p"
	.string "Why don't you try out my battle\n"
	.string "simulator while you're waiting for Justy\l"
	.string "to come back?\p"
	.string "You can get some training in while\n"
	.string "helping my cause!$"

Battlesim1_Text_1:
# 47 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Great! Give me one second to\n"
	.string "program the battle...\p"
	.string "I'll start with beginner difficulty...\p"
	.string "Okay! We're locked in. I'll just have you\n"
	.string "step onto the platform to you right.$"

Battlesim1_Text_2:
# 77 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Alright! Initiating protocol.\n"
	.string "challenger entering simulation in...\p"
	.string "3...\p"
	.string "2...\p"
	.string "1...$"

Battlesim1_Text_3:
# 93 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Simulation completed. Battle success.$"

Battlesim1_Text_4:
# 104 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Your party is fully healed.\n"
	.string "Well done!\p"
	.string "You cruised through that simulation no\n"
	.string "problem!\p"
	.string "...What's that? No sign of Justy in\n"
	.string "there?...\p"
	.string "Well he's training in a different, erm, I\n"
	.string "guess level compared to you. He might\l"
	.string "be a while so you might want to check\l"
	.string "back in later.\p"
	.string "Why don't you check back in a little\n"
	.string "bit? He'll definitely be here when you\l"
	.string "get back.\p"
	.string "Alright, see you next time!$"
