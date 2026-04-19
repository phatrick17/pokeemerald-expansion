PhenacMart_MapScripts::
	.byte 0


Phenac_Mart_Lady1::
# 7 "data/maps/PhenacMart/scripts.pory"
	lock
# 8 "data/maps/PhenacMart/scripts.pory"
	faceplayer
# 9 "data/maps/PhenacMart/scripts.pory"
	goto_if_set FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1, Phenac_Mart_Lady1_2
# 21 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_Mart_Lady1_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/PhenacMart/scripts.pory"
	release
	end

Phenac_Mart_Lady1_2:
# 10 "data/maps/PhenacMart/scripts.pory"
	lockall
# 11 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_Mart_Lady1_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/PhenacMart/scripts.pory"
	releaseall
	end


Phenac_MartClerk_Dialogue_1::
# 34 "data/maps/PhenacMart/scripts.pory"
	lock
# 35 "data/maps/PhenacMart/scripts.pory"
	faceplayer
# 36 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/PhenacMart/scripts.pory"
	pokemart Phenac_Mart_1
# 42 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/PhenacMart/scripts.pory"
	release
	end


Phenac_MartClerk_ExpandedItems::
# 48 "data/maps/PhenacMart/scripts.pory"
	pokemart Phenac_Mart_2
# 49 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/PhenacMart/scripts.pory"
	release
	end


	.align 2
# 54 "data/maps/PhenacMart/scripts.pory"
Phenac_Mart_1:
# 55 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POTION
# 56 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 57 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 58 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 59 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 60 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 61 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

	.align 2
# 65 "data/maps/PhenacMart/scripts.pory"
Phenac_Mart_2:
# 66 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 67 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 68 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 69 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POTION
# 70 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 71 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 72 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 73 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 74 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 75 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 76 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

# 80 "data/maps/PhenacMart/scripts.pory"


Phenac_Mart_Lady1_Text_0:
# 11 "data/maps/PhenacMart/scripts.pory"
	.string "Huh? Poké Balls?\p"
	.string "Come to think of it, I haven't seen any\n"
	.string "being sold in this town.\p"
	.string "Oh, wait...\p"
	.string "I think I heard someone saying that\n"
	.string "they sell Poké Balls at the Outskirt\l"
	.string "Stand.\p"
	.string "It's east from here, Phenac.\n"
	.string "It's modeled after a locomotive, so you\l"
	.string "won't have any trouble finding it.\l"
	.string "I think.$"

Phenac_Mart_Lady1_Text_1:
# 22 "data/maps/PhenacMart/scripts.pory"
	.string "If your POKéMON's hurt and weakened,\n"
	.string "you should use a Potion on it.\p"
	.string "Every trainer should be carrying at\n"
	.string "least a Potion or two.\p"
	.string "It's not as if there's always going to\n"
	.string "be a POKéMON Center when you need one.\l"
	.string "That's why a Potion comes in handy.$"

Phenac_MartClerk_Dialogue_1_Text_0:
# 36 "data/maps/PhenacMart/scripts.pory"
	.string "Hello! Welcome to our POKéMON Mart!\n"
	.string "How may I serve you?$"

Phenac_MartClerk_Dialogue_1_Text_1:
# 42 "data/maps/PhenacMart/scripts.pory"
	.string "We look forward to your next visit!$"
