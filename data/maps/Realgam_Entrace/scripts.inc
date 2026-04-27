Realgam_Entrace_MapScripts::
	.byte 0


Realgam_Construction_Enter::
# 4 "data/maps/Realgam_Entrace/scripts.pory"
	goto_if_set FLAG_MAP_UNLOCK_PYRITE, Realgam_Construction_Enter_2
# 8 "data/maps/Realgam_Entrace/scripts.pory"
	lock
# 9 "data/maps/Realgam_Entrace/scripts.pory"
	applymovement Realgam_Construction_Man_1, Common_Movement_ExclamationMark
# 10 "data/maps/Realgam_Entrace/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Realgam_Entrace/scripts.pory"
	waitse
# 12 "data/maps/Realgam_Entrace/scripts.pory"
	msgbox Realgam_Construction_Enter_Text_0
# 14 "data/maps/Realgam_Entrace/scripts.pory"
	setflag FLAG_MAP_UNLOCK_PYRITE
# 15 "data/maps/Realgam_Entrace/scripts.pory"
	closemessage
# 16 "data/maps/Realgam_Entrace/scripts.pory"
	release
	end

Realgam_Construction_Enter_2:
# 5 "data/maps/Realgam_Entrace/scripts.pory"
	release
	end


Realgam_Construction_Man1::
# 21 "data/maps/Realgam_Entrace/scripts.pory"
	lock
# 22 "data/maps/Realgam_Entrace/scripts.pory"
	faceplayer
# 23 "data/maps/Realgam_Entrace/scripts.pory"
	msgbox Realgam_Construction_Enter_Text_0
# 25 "data/maps/Realgam_Entrace/scripts.pory"
	release
	end


Realgam_Construction_Man2::
# 31 "data/maps/Realgam_Entrace/scripts.pory"
	lock
# 32 "data/maps/Realgam_Entrace/scripts.pory"
	faceplayer
# 33 "data/maps/Realgam_Entrace/scripts.pory"
	msgbox Realgam_Construction_Man2_Text_0
# 35 "data/maps/Realgam_Entrace/scripts.pory"
	release
	end


Realgam_Construction_Man3::
# 40 "data/maps/Realgam_Entrace/scripts.pory"
	lock
# 41 "data/maps/Realgam_Entrace/scripts.pory"
	faceplayer
# 42 "data/maps/Realgam_Entrace/scripts.pory"
	msgbox Realgam_Construction_Man3_Text_0
# 45 "data/maps/Realgam_Entrace/scripts.pory"
	release
	end


Realgam_Construction_Enter_Text_0:
# 12 "data/maps/Realgam_Entrace/scripts.pory"
	.string "Woah, hold it there.\n"
	.string "This is a construction site.\l"
	.string "It's not a safe place to be.\p"
	.string "This is no place for tourists to visit.\n"
	.string "Go on, scram.\p"
	.string "You can go visit Pyrite for all I care -\n"
	.string "it's just west of here.$"

Realgam_Construction_Man2_Text_0:
# 33 "data/maps/Realgam_Entrace/scripts.pory"
	.string "Ayup, it's been a mighty long time.\n"
	.string "I can't rightly recall when it was that I\l"
	.string "was last at home.\p"
	.string "But, we're just about done here.\n"
	.string "All that's left is to clean up the site,\l"
	.string "and we're done.$"

Realgam_Construction_Man3_Text_0:
# 42 "data/maps/Realgam_Entrace/scripts.pory"
	.string "Aaaaaah...\n"
	.string "Been working hard, I have.\p"
	.string "Let me tell you, making this here huge\n"
	.string "tower's one massive job.\p"
	.string "It's hard to imagine, even for me.\p"
	.string "Y'all come back to visit when we're all\n"
	.string "done here.\p"
	.string "There'll be a Colosseum on top of the\n"
	.string "tower up ahead. Amazing stuff!$"
