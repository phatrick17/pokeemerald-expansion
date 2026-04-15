Phenac_Stadium_MapScripts::
	.byte 0


Phenac_Stadium_Receptionist_1::
# 4 "data/maps/Phenac_Stadium/scripts.pory"
	goto_if_set FLAG_PHENAC_VISITED_MAYOR_1, Phenac_Stadium_Receptionist_1_2
# 19 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 20 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Receptionist_1_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end

Phenac_Stadium_Receptionist_1_2:
# 5 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 6 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Receptionist_1_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/Phenac_Stadium/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 2
# 16 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end


Phenac_Stadium_Receptionist_1_Text_0:
# 6 "data/maps/Phenac_Stadium/scripts.pory"
	.string "Welcome to Phenac Stadium.\p"
	.string "This is where we register trainers\n"
	.string "for challenges.\p"
	.string "However, the current challenge has\n"
	.string "already started.\p"
	.string "So, we are no longer accepting trainers\n"
	.string "for this challenge.\p"
	.string "Please come back and enter the next\n"
	.string "challenge.$"
