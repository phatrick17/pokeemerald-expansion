# 1 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 2 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 3 "data/maps/OldaleTown_Mart/scripts.pory"

# 4 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 14 "data/maps/OldaleTown_Mart/scripts.pory"

# 15 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 22 "data/maps/OldaleTown_Mart/scripts.pory"

# 23 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 28 "data/maps/OldaleTown_Mart/scripts.pory"

# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 37 "data/maps/OldaleTown_Mart/scripts.pory"

# 38 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 45 "data/maps/OldaleTown_Mart/scripts.pory"

# 46 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 50 "data/maps/OldaleTown_Mart/scripts.pory"

# 51 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 54 "data/maps/OldaleTown_Mart/scripts.pory"

# 55 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"

# 59 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"

# 63 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"
