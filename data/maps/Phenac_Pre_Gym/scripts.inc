Phenac_Pre_Gym_MapScripts::
	.byte 0


Battlesim1::
# 4 "data/maps/Phenac_Pre_Gym/scripts.pory"
	lock
# 5 "data/maps/Phenac_Pre_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	goto_if_set FLAG_PHENAC_CITY_KRANE_CHALLENGE_1, Battlesim1_2
# 17 "data/maps/Phenac_Pre_Gym/scripts.pory"
	goto_if_set FLAG_PHENAC_CITY_KRANE_ASKS_1, Battlesim1_5
Battlesim1_4:
# 21 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_2
# 52 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setflag FLAG_PHENAC_CITY_KRANE_ASKS_1
# 53 "data/maps/Phenac_Pre_Gym/scripts.pory"
Phenac_Pre_Gym_Krane_YESNO_1_Loop:
# 54 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_3, MSGBOX_YESNO
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Battlesim1_11
# 65 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_5, MSGBOX_DEFAULT
# 70 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 71 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_CLICK
# 73 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 74 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_CLICK
# 75 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 76 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special SpawnCameraObject
# 77 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Battlesim1_Movement_0
# 80 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 81 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 33
# 82 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement PHENAC_PRE_GYM_KRANE, Battlesim1_Movement_1
# 85 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Battlesim1_Movement_1
# 88 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Battlesim1_Movement_2
# 91 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 92 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 30
# 93 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadenewbgm MUS_NONE
# 95 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_6, MSGBOX_DEFAULT
# 102 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 103 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Battlesim1_Movement_3
# 106 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 107 "data/maps/Phenac_Pre_Gym/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 108 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 109 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 110 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 20
# 111 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_7
# 112 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Battlesim1_Text_8
# 115 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_9
# 116 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, Battlesim1_Text_8
# 119 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_10
# 120 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 121 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_USE_ITEM
# 122 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 123 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_11
# 124 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_4, Battlesim1_Text_8
# 127 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_12
# 128 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_DECLAN, Battlesim1_Text_8
# 131 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 30
# 133 "data/maps/Phenac_Pre_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 134 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 135 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 136 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse MUS_HEAL
# 137 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 138 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_13
# 139 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 140 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 141 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special HealPlayerParty
# 142 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setflag FLAG_PHENAC_CITY_KRANE_CHALLENGE_1
# 143 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_14, MSGBOX_DEFAULT
# 150 "data/maps/Phenac_Pre_Gym/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 151 "data/maps/Phenac_Pre_Gym/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 152 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_15, MSGBOX_DEFAULT
# 157 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 158 "data/maps/Phenac_Pre_Gym/scripts.pory"
	warp MAP_OLDALE_TOWN, 25, 29
# 159 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end

Battlesim1_2:
# 7 "data/maps/Phenac_Pre_Gym/scripts.pory"
	goto_if_set FLAG_MAP_UNLOCK_PYRITE, Battlesim1_8
Battlesim1_7:
# 10 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end

Battlesim1_5:
# 18 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_1
# 19 "data/maps/Phenac_Pre_Gym/scripts.pory"
	goto Phenac_Pre_Gym_Krane_YESNO_1_Loop
	goto Battlesim1_4

Battlesim1_8:
# 8 "data/maps/Phenac_Pre_Gym/scripts.pory"
	goto Phenac_Pre_Gym_Krane_Event_2
	goto Battlesim1_7

Battlesim1_11:
# 60 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_4, MSGBOX_DEFAULT
# 62 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


Phenac_Pre_Gym_Krane_Event_2::
# 164 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_0, MSGBOX_DEFAULT
# 166 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadenewbgm MUS_WEATHER_GROUDON
# 167 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 174 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 175 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 60
# 176 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 33
# 178 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement PHENAC_PRE_GYM_KRANE, Battlesim1_Movement_1
# 181 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Battlesim1_Movement_1
# 184 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Battlesim1_Movement_2
# 187 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 188 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special RecenterCameraOnPlayer
# 189 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 190 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_2, MSGBOX_DEFAULT
# 196 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 197 "data/maps/Phenac_Pre_Gym/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 198 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 199 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 200 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data/maps/Phenac_Pre_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PHENAC_PRE_GYM
# 203 "data/maps/Phenac_Pre_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 19
# 205 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special RecenterCameraOnPlayer
# 207 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 60
# 208 "data/maps/Phenac_Pre_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playbgm MUS_NONE, FALSE
# 210 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_3
# 211 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 212 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 30
# 213 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 214 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_PIN
# 215 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 216 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Pre_Gym_Krane_Event_2_Movement_0
# 219 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 220 "data/maps/Phenac_Pre_Gym/scripts.pory"
	playse SE_WARP_IN
# 221 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitse
# 222 "data/maps/Phenac_Pre_Gym/scripts.pory"
	addobject PHENAC_PRE_GYM_CIPHER_ANOMALY_1
# 223 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 15
# 224 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement PHENAC_PRE_GYM_CIPHER_ANOMALY_1, Phenac_Pre_Gym_Krane_Event_2_Movement_1
# 227 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 228 "data/maps/Phenac_Pre_Gym/scripts.pory"
	delay 60
# 229 "data/maps/Phenac_Pre_Gym/scripts.pory"
	applymovement PHENAC_PRE_GYM_CIPHER_ANOMALY_1, Phenac_Pre_Gym_Krane_Event_2_Movement_2
# 233 "data/maps/Phenac_Pre_Gym/scripts.pory"
	waitmovement
# 235 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_4, MSGBOX_DEFAULT
# 238 "data/maps/Phenac_Pre_Gym/scripts.pory"
	closemessage
# 239 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ALBERTO, Phenac_Pre_Gym_Krane_Event_2_Text_5
# 241 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Phenac_Pre_Gym_Krane_Event_2_Text_6
# 242 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


GiveShadowMonTest::
# 248 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_QUILAVA_SHADOW, 100
# 249 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_BAYLEEF_SHADOW, 100
# 250 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


# 77 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_0:
# 78 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 78 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 78 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 78 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
# 78 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_faster_right
	step_end

# 82 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_1:
# 83 "data/maps/Phenac_Pre_Gym/scripts.pory"
	face_player
	step_end

# 88 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_2:
# 89 "data/maps/Phenac_Pre_Gym/scripts.pory"
	face_down
	step_end

# 103 "data/maps/Phenac_Pre_Gym/scripts.pory"
Battlesim1_Movement_3:
# 104 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_in_place_slow_down
	step_end

# 216 "data/maps/Phenac_Pre_Gym/scripts.pory"
Phenac_Pre_Gym_Krane_Event_2_Movement_0:
# 217 "data/maps/Phenac_Pre_Gym/scripts.pory"
	face_up
	step_end

# 224 "data/maps/Phenac_Pre_Gym/scripts.pory"
Phenac_Pre_Gym_Krane_Event_2_Movement_1:
# 225 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/Phenac_Pre_Gym/scripts.pory"
Phenac_Pre_Gym_Krane_Event_2_Movement_2:
# 230 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_left
# 230 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_left
# 230 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_left
# 230 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_left
# 231 "data/maps/Phenac_Pre_Gym/scripts.pory"
	walk_down
	step_end

Battlesim1_Text_0:
# 11 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Hey {PLAYER}! Still no sign of\n"
	.string "Justy.\p"
	.string "Check back in later on and he'll\n"
	.string "certainly be here.\p"
	.string "It's too bad all the trainers in here are\n"
	.string "on break until he tells them to come\l"
	.string "back! Ahahaha!$"

Battlesim1_Text_1:
# 18 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: You must have changed your\n"
	.string "mind!$"

Battlesim1_Text_2:
# 21 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Hey there! Welcome to the Pre Gym.\n"
	.string "My name is Professor Krane.\p"
	.string "...Your name is {PLAYER}?\p"
	.string "Nice to meet you {PLAYER}!\p"
	.string "Krane: I know - I'm not Justy - the\n"
	.string "Pre Gym Leader.\p"
	.string "Justy is actually training inside my\n"
	.string "creation: the Battle Simulator!\p"
	.string "My idea was simple enough: project\n"
	.string "trainers into an augmented reality\l"
	.string "space to do the invention's name:\p"
	.string "simulate POKéMON battles against\n"
	.string "computers!\p"
	.string "I've been researching this invention\n"
	.string "for the past few months or so.\p"
	.string "It's still in the prototype stage but\n"
	.string "it's very much functional.\p"
	.string "I set it up here in Justy's gym as he\n"
	.string "was so excited to try it out.\p"
	.string "You look like a strong trainer!\n"
	.string "Were you planning to undergo Justy's\l"
	.string "challenge?\p"
	.string "...\p"
	.string "I figured you were going to {PLAYER}!\n"
	.string "Well I have a proposition for you.$"

Battlesim1_Text_3:
# 55 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Why don't you try out my simulation of\n"
	.string "the Pre Gym Challenge here?\p"
	.string "It would be 4 successive battles in a\n"
	.string "row.\p"
	.string "I'll give you a reward for completing it.\p"
	.string "You can get some training in, and you'll\n"
	.string "help me get more testing done!\n"
	.string "What do you say?$"

Battlesim1_Text_4:
# 61 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Alright. Well please come back if you\n"
	.string "change your mind!$"

Battlesim1_Text_5:
# 66 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Great! Give me one second to program\n"
	.string "the POKéMON battles...\p"
	.string "Okay! We're locked in {PLAYER}. I'll\n"
	.string "just have you step onto the platform\l"
	.string "to your right.$"

Battlesim1_Text_6:
# 96 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Alright! Initiating protocol.\n"
	.string "Challenger entering simulation in:\p"
	.string "3...\p"
	.string "2...\p"
	.string "1...$"

Battlesim1_Text_7:
# 111 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle 1 commence.$"

Battlesim1_Text_8:
# 113 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle success.$"

Battlesim1_Text_9:
# 115 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle 1 complete.\n"
	.string "Battle 2 commence.$"

Battlesim1_Text_10:
# 119 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle 2 complete.\n"
	.string "Healing trainer party.$"

Battlesim1_Text_11:
# 123 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle 3 commence.$"

Battlesim1_Text_12:
# 127 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION: Battle 3 complete.\n"
	.string "Final battle commence.$"

Battlesim1_Text_13:
# 138 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "POKéMON BATTLE Simulation succesful. Player defeated trainer with ease. In comparison, slower than\nJusty's clear. But POKéMON party is now healed. Exiting Augmented Reality space. No. 487. Exiting and closing the WORMHOLE protocol. No. 796.$"

Battlesim1_Text_14:
# 144 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Hmm. Strange message there.\p"
	.string "Oh {PLAYER} is back!\p"
	.string "Your party has been fully healed.\n"
	.string "Well done!\p"
	.string "You cruised through that challenge!\p"
	.string "Thank you so much for participating - I\n"
	.string "got plenty of good data from those\l"
	.string "POKéMON battles.\p"
	.string "Here's your reward.$"

Battlesim1_Text_15:
# 153 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "...What's that? No sign of Justy in\n"
	.string "there? He's not back either?\p"
	.string "Well, I guess I did send him into a more\n"
	.string "difficult battle scenario. Sorry about\l"
	.string "that. That might take a bit...\p"
	.string "Why don't you come back in a little\n"
	.string "while. I'm sure Justy'll be back by then.\p"
	.string "I'll see you soon {PLAYER}, okay?\n"
	.string "Thanks again!$"

Phenac_Pre_Gym_Krane_Event_2_Text_0:
# 165 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: {PLAYER}, I need your help.$"

Phenac_Pre_Gym_Krane_Event_2_Text_1:
# 168 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Justy...Justy hasn't come back.\p"
	.string "I...I feel horrible. I can see that he's\n"
	.string "still in the simulation but... I've lost\l"
	.string "contact with him.\p"
	.string "I need a trainer to go into the\n"
	.string "simulation. I...I don't know how to\l"
	.string "battle with POKéMON myself...\p"
	.string "Please {PLAYER}.\n"
	.string "I don't think we should wait.\p"
	.string "{PLAYER}, step into the platform and\n"
	.string "let's get you in there.$"

Phenac_Pre_Gym_Krane_Event_2_Text_2:
# 191 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Krane: Okay. Here we go {PLAYER}.\p"
	.string "You're set to go into the same\n"
	.string "simulation as Justy.\p"
	.string "Oh, goodness I hope he's okay.\p"
	.string "Initiating protocol and starting in...\p"
	.string "3...\p"
	.string "2...\p"
	.string "1...$"

Phenac_Pre_Gym_Krane_Event_2_Text_3:
# 210 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SYSTEM: Battle Simulation commence. ????Error No. 796 - anom?al....ous presence dete...?cted within WORMH...796OLE protoc...ol. Anal??yzing...Life form d???etected.........??????????$"

Phenac_Pre_Gym_Krane_Event_2_Text_4:
# 236 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "???: ...\n"
	.string "...\p"
	.string "You?!?$"

Phenac_Pre_Gym_Krane_Event_2_Text_5:
# 240 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "...$"

Phenac_Pre_Gym_Krane_Event_2_Text_6:
# 241 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SYSTEM: Battle detected. Battle complete. Battle data downloaded...???...{PLAYER} with a triumphant victory. Anomalous lifeform from .dif.??er?.n. d..?mentio... dispersed....\nRemoving {PLAYER} from simulation...$"
