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

InsideBuilding_EventScript_Willie::
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 74 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_DEFEATED_WILLIE, InsideBuilding_EventScript_Willie_2
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_WILLIE_STATE, 1
	goto_if_eq InsideBuilding_EventScript_Willie_3
# 98 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/OldaleTown_Mart/scripts.pory"
	setvar VAR_WILLIE_STATE, 1
InsideBuilding_EventScript_Willie_1:
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

InsideBuilding_EventScript_Willie_2:
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_0, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1

InsideBuilding_EventScript_Willie_3:
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_1, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1


InsideBuilding_EventScript_Willie_Text_0:
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "WILLIE: But, yeah, you're tough.\n"
	.string "Real tough.\p"
	.string "You did a real number on us.\p"
	.string "Hey, I know. Why not test your\n"
	.string "skills in Phenac City?\p"
	.string "It's out west of here.\p"
	.string "You'll find trainers who are way\n"
	.string "better than me there.\p"
	.string "You should go out there and get\n"
	.string "some battling in.$"

InsideBuilding_EventScript_Willie_Text_1:
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "WILLIE: Heh... I can tell you're\n"
	.string "good. I can see it in your eyes.\p"
	.string "If the opportunity ever arises,\n"
	.string "I'd like to have a battle with you.$"

InsideBuilding_EventScript_Willie_Text_2:
# 99 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "WILLIE: You're a POKéMON Trainer\n"
	.string "too, aren't you?\p"
	.string "Heh... I can tell. And you're\n"
	.string "good. I can see it in your eyes.\p"
	.string "I bet your POKéMON are impressive,\n"
	.string "too.\p"
	.string "If the opportunity ever arises,\n"
	.string "I'd like to have a battle with you.\p"
	.string "Heh... though I doubt I'd have\n"
	.string "any chance of beating you.$"
