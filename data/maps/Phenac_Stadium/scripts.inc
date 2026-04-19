Phenac_Stadium_MapScripts::
	.byte 0


Phenac_Stadium_Receptionist_1::
# 4 "data/maps/Phenac_Stadium/scripts.pory"
	goto_if_set FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1, Phenac_Stadium_Receptionist_1_2
# 18 "data/maps/Phenac_Stadium/scripts.pory"
	goto_if_set FLAG_PHENAC_VISITED_MAYOR_1, Phenac_Stadium_Receptionist_1_5
# 33 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 34 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Receptionist_1_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end

Phenac_Stadium_Receptionist_1_2:
# 5 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 6 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Receptionist_1_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end

Phenac_Stadium_Receptionist_1_5:
# 19 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 20 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Receptionist_1_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/Phenac_Stadium/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 2
# 30 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end


Phenac_Stadium_Guy1::
# 48 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 49 "data/maps/Phenac_Stadium/scripts.pory"
	faceplayer
# 50 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Guy1_Text_0, MSGBOX_YESNO
# 52 "data/maps/Phenac_Stadium/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Phenac_Stadium_Guy1_2
# 61 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Guy1_Text_2, MSGBOX_DEFAULT
# 66 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end

Phenac_Stadium_Guy1_2:
# 53 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Guy1_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/Phenac_Stadium/scripts.pory"
	releaseall
	end


Phenac_Stadium_Lady1::
# 71 "data/maps/Phenac_Stadium/scripts.pory"
	lockall
# 72 "data/maps/Phenac_Stadium/scripts.pory"
	faceplayer
# 73 "data/maps/Phenac_Stadium/scripts.pory"
	msgbox Phenac_Stadium_Lady1_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/Phenac_Stadium/scripts.pory"
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

Phenac_Stadium_Guy1_Text_0:
# 50 "data/maps/Phenac_Stadium/scripts.pory"
	.string "Hi!\p"
	.string "Are you here to take part in the\n"
	.string "challenge, too?$"

Phenac_Stadium_Guy1_Text_1:
# 53 "data/maps/Phenac_Stadium/scripts.pory"
	.string "Oh, so you must be here to watch the\n"
	.string "battles.\p"
	.string "It's great to see some awesome POKeMON\n"
	.string "moves in a live setting.\p"
	.string "The winner gets cash and a TM, which is\n"
	.string "short for Technical Machine.\p"
	.string "A TM is used for teaching a move to a\n"
	.string "POKéMON, so it's important.$"

Phenac_Stadium_Guy1_Text_2:
# 61 "data/maps/Phenac_Stadium/scripts.pory"
	.string "Oh, yeah? Well, me, too. I came here\n"
	.string "hoping to participate in the challenge.\p"
	.string "But I was disappointed. By the time I\n"
	.string "arrived, the challenge had already\l"
	.string "started.\p"
	.string "The winner gets cash and a TM, which is\n"
	.string "short for Technical Machine.\p"
	.string "I wanted to win this knockout\n"
	.string "challenge. I would've liked to win the\l"
	.string "cash prize and the TM.$"

Phenac_Stadium_Lady1_Text_0:
# 73 "data/maps/Phenac_Stadium/scripts.pory"
	.string "Isn't this city's Stadium Amazing?\p"
	.string "Oh, I wish I could soon battle at a\n"
	.string "Stadium as fabulous as this one!$"
