Phenac_Pre_Gym_MapScripts::
	.byte 0


Battlesim1::
# 4 "data/maps/Phenac_Pre_Gym/scripts.pory"
	lock
# 5 "data/maps/Phenac_Pre_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_0, MSGBOX_YESNO
# 43 "data/maps/Phenac_Pre_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Battlesim1_2
# 47 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Battlesim1_Text_1
# 49 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special HealPlayerParty
# 50 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end

Battlesim1_2:
# 44 "data/maps/Phenac_Pre_Gym/scripts.pory"
	releaseall
	end


GiveShadowMonTest::
# 59 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_QUILAVA_SHADOW, 100
# 60 "data/maps/Phenac_Pre_Gym/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_BAYLEEF_SHADOW, 100
# 61 "data/maps/Phenac_Pre_Gym/scripts.pory"
	release
	end


Battlesim1_Text_0:
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Hey there! Welcome to the Pre Gym.\n"
	.string "My name is Professor Krane.\p"
	.string "Krane: I know - I'm not Justy -\n"
	.string "the Pre Gym Leader.\p"
	.string "Justy is actually training inside my\n"
	.string "novel invention:\l"
	.string "the Battle Simulator.\p"
	.string "The Battle Simulator is a prototype\n"
	.string "which projects you into an Augmented\l"
	.string "Reality space to do its name:\p"
	.string "Simulate battles!\p"
	.string "Perfect for trainers to practice and\n"
	.string "simulate certain scenarios in order to\l"
	.string "become a better trainer.\p"
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
	.string "simulator while you're waiting?\p"
	.string "Free of charge!$"

Battlesim1_Text_1:
# 48 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION COMPLETED.$"

Battlesim1_Text_2:
# 51 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Your party is fully healed.\n"
	.string "Well done!\p"
	.string "We'll have more coming soon.$"
