Phenac_Pre_Gym_MapScripts::
	.byte 0


Battlesim1::
# 4 "data/maps/Phenac_Pre_Gym/scripts.pory"
	lock
# 5 "data/maps/Phenac_Pre_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_0, MSGBOX_YESNO
# 17 "data/maps/Phenac_Pre_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Battlesim1_2
# 21 "data/maps/Phenac_Pre_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Battlesim1_Text_1
# 23 "data/maps/Phenac_Pre_Gym/scripts.pory"
	special HealPlayerParty
# 24 "data/maps/Phenac_Pre_Gym/scripts.pory"
	msgbox Battlesim1_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/Phenac_Pre_Gym/scripts.pory"
	releaseall
	end

Battlesim1_2:
# 18 "data/maps/Phenac_Pre_Gym/scripts.pory"
	releaseall
	end


Battlesim1_Text_0:
# 6 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Welcome to the Pre Gym.\p"
	.string "Are you interested in our Battle\n"
	.string "Simulator?\p"
	.string "We are currently conducting testing\n"
	.string "on our prototype.\p"
	.string "Trainers and POKéMON are projected\n"
	.string "using our Augmented Reality solution.\p"
	.string "The system's knowledge model was\n"
	.string "was trained by studying real\l"
	.string "trainer battles.\p"
	.string "Would you like to try?\n"
	.string "Free of charge!$"

Battlesim1_Text_1:
# 22 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "SIMULATION COMPLETED.$"

Battlesim1_Text_2:
# 25 "data/maps/Phenac_Pre_Gym/scripts.pory"
	.string "Your party is fully healed.\n"
	.string "Well done!\p"
	.string "We'll have more coming soon.$"
