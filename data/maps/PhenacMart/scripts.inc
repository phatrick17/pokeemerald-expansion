PhenacMart_MapScripts::
	.byte 0


Phenac_Mart_Lady1::
# 7 "data/maps/PhenacMart/scripts.pory"
	lock
# 8 "data/maps/PhenacMart/scripts.pory"
	faceplayer
# 9 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_Mart_Lady1_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/PhenacMart/scripts.pory"
	release
	end


Phenac_MartClerk_Dialogue_1::
# 22 "data/maps/PhenacMart/scripts.pory"
	lock
# 23 "data/maps/PhenacMart/scripts.pory"
	faceplayer
# 24 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/PhenacMart/scripts.pory"
	goto_if_set FLAG_UNLOCK_POKEBALL, Phenac_MartClerk_Dialogue_1_2
Phenac_MartClerk_Dialogue_1_1:
# 29 "data/maps/PhenacMart/scripts.pory"
	pokemart Phenac_Mart_1
# 30 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/PhenacMart/scripts.pory"
	release
	end

Phenac_MartClerk_Dialogue_1_2:
# 27 "data/maps/PhenacMart/scripts.pory"
	goto Phenac_MartClerk_ExpandedItems
	goto Phenac_MartClerk_Dialogue_1_1


Phenac_MartClerk_ExpandedItems::
# 36 "data/maps/PhenacMart/scripts.pory"
	pokemart Phenac_Mart_2
# 37 "data/maps/PhenacMart/scripts.pory"
	msgbox Phenac_MartClerk_Dialogue_1_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/PhenacMart/scripts.pory"
	release
	end


	.align 2
# 42 "data/maps/PhenacMart/scripts.pory"
Phenac_Mart_1:
# 43 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POTION
# 44 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 45 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 46 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 47 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 48 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 49 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 50 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

	.align 2
# 53 "data/maps/PhenacMart/scripts.pory"
Phenac_Mart_2:
# 54 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 55 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 56 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 57 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_POTION
# 58 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 59 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 60 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 61 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 62 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 63 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 64 "data/maps/PhenacMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

# 67 "data/maps/PhenacMart/scripts.pory"


Phenac_Mart_Lady1_Text_0:
# 10 "data/maps/PhenacMart/scripts.pory"
	.string "If your POKéMON's hurt and weakened,\n"
	.string "you should use a Potion on it.\p"
	.string "Every trainer should be carrying at\n"
	.string "least a Potion or two.\p"
	.string "It's not as if there's always going to\n"
	.string "be a POKéMON Center when you need one.\l"
	.string "That's why a Potion comes in handy.$"

Phenac_MartClerk_Dialogue_1_Text_0:
# 24 "data/maps/PhenacMart/scripts.pory"
	.string "Hello! Welcome to our POKéMON Mart!\n"
	.string "How may I serve you?$"

Phenac_MartClerk_Dialogue_1_Text_1:
# 30 "data/maps/PhenacMart/scripts.pory"
	.string "We look forward to your next visit!$"
