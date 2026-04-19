Phenac_Mayor_House_MapScripts::
# 2 "data/maps/Phenac_Mayor_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Phenac_Mayor_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Phenac_Mayor_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Phenac_Mayor_House/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 0, Phenac_Mayor_House_Escade_Encounter_1
	.2byte 0


Phenac_Mayor_House_Escade_Encounter_1::
# 8 "data/maps/Phenac_Mayor_House/scripts.pory"
	playbgm MUS_B_DOME_LOBBY, FALSE
# 9 "data/maps/Phenac_Mayor_House/scripts.pory"
	lock
# 10 "data/maps/Phenac_Mayor_House/scripts.pory"
	addobject PHENAC_MAYOR_HOUSE_RUI
# 11 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Mayor_House_Escade_Encounter_1_Movement_0
# 15 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 16 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Common_Movement_ExclamationMark
# 17 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 19 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement 0
# 20 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_1
# 24 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 25 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Escade_Encounter_1_Movement_2
# 36 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 37 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Common_Movement_ExclamationMark
# 51 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 53 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_2, MSGBOX_DEFAULT
# 80 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_3
# 83 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 84 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/Phenac_Mayor_House/scripts.pory"
	closemessage
# 95 "data/maps/Phenac_Mayor_House/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 1
# 96 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_4
# 101 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 102 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Escade_Encounter_1_Movement_5
# 105 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 106 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_RUI
# 107 "data/maps/Phenac_Mayor_House/scripts.pory"
	setflag FLAG_PHENAC_VISITED_MAYOR_1
# 108 "data/maps/Phenac_Mayor_House/scripts.pory"
	releaseall
	end


Phenac_Mayor_House_Escade_Dialogue_1::
# 114 "data/maps/Phenac_Mayor_House/scripts.pory"
	lockall
# 115 "data/maps/Phenac_Mayor_House/scripts.pory"
	faceplayer
# 116 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 125 "data/maps/Phenac_Mayor_House/scripts.pory"
	releaseall
	end


# 11 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_0:
# 12 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 13 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 20 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_1:
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 33 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_2:
# 34 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_up
	step_end

# 80 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_3:
# 81 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
	step_end

# 96 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_4:
# 97 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_up
# 97 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_up
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 102 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_5:
# 103 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
	step_end

Phenac_Mayor_House_Escade_Encounter_1_Text_0:
# 26 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Ah, you must be travelers!\n"
	.string "Welcome to Phenac City!\p"
	.string "I am Es Cade, the Mayor.\p"
	.string "Es Cade: Now, you wanted to see me.\n"
	.string "Is there something that I may be\l"
	.string "able to assist you with?$"

Phenac_Mayor_House_Escade_Encounter_1_Text_1:
# 38 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "{RIVAL}: Um... Er...\p"
	.string "Es Cade: Oh? What may I do for\n"
	.string "a pretty young lady like you?\p"
	.string "{RIVAL}: I... I saw it!\p"
	.string "Es Cade: Saw it?\n"
	.string "And what did you see?\p"
	.string "{RIVAL}: I saw a peculiar POkéMON...\p"
	.string "No, that's not quite right.\p"
	.string "What I saw was a POkéMON that gave\n"
	.string "off a black aura.\l"
	.string "It was like a fighting machine!\l"
	.string "And, that POkéMON would attack people!$"

Phenac_Mayor_House_Escade_Encounter_1_Text_2:
# 54 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: O-o-o-oh, my!\n"
	.string "POkéMON like a fighting machine?\l"
	.string "And it attacks people?!\p"
	.string "Now if that were true, that would\n"
	.string "be truly frightening.\p"
	.string "However, it is a little hard to believe.\p"
	.string "{RIVAL}: It's true! It's true,\n"
	.string "Mr Mayor! Because I saw that POkéMON,\l"
	.string "I was made the prisoner of some\l"
	.string "frightening men until just a little\l"
	.string "while ago.\p"
	.string "Es Cade: Hmm... I see. I understand\n"
	.string "I will order an investigation at once.\p"
	.string "{RIVAL}: You will? Thank you\n"
	.string "Mr. Mayor!\p"
	.string "Es Cade: Oh, no, no.\n"
	.string "There is no need for thanks.\p"
	.string "We mustn't allow thugs to do as\n"
	.string "they wish.\p"
	.string "Especially thugs that endanger a\n"
	.string "a pretty young lady like you!\p"
	.string "I'll ask that you give me a little time\n"
	.string "on this matter.\p"
	.string "I promise we will get some useful\n"
	.string "information for you.$"

Phenac_Mayor_House_Escade_Encounter_1_Text_3:
# 85 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: Oh yes.\p"
	.string "You appear to be POkéMON trainers\n"
	.string "yourselves.\p"
	.string "If so, I urge you to visit our city's\n"
	.string "pride and joy, our POkéMON Stadium.\p"
	.string "It's all the way at the top of our city.\p"
	.string "It's a breathtakingly beautiful\n"
	.string "stadium benefitting our oasis city!$"

Phenac_Mayor_House_Escade_Dialogue_1_Text_0:
# 117 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: I promise you, we will obtain\n"
	.string "useful information about those\l"
	.string "POkéMON.\p"
	.string "While we do so, I heartily recommend\n"
	.string "that you visit our POkéMON Stadium,\l"
	.string "the symbol of our civic pride!\p"
	.string "Head all the way north and you can't\n"
	.string "miss it!$"
