OldaleTown_Mart_MapScripts::
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	map_script_2 VAR_WILLIE_STATE, 0, OldaleTown_Mart_SnaggHideoutBroadcast
	.2byte 0


OldaleTown_Mart_SnaggHideoutBroadcast::
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	lockall
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOnTVScreen
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Mart_SnaggHideoutBroadcast_Movement_0
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, FALSE
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	delay 30
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_SnaggHideoutReport, MSGBOX_DEFAULT
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOnOutskirtStandTVScreen
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	fadedefaultbgm
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Mart_SnaggHideoutBroadcast_Movement_1
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOffOutskirtStandTVScreen
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	setvar VAR_WILLIE_STATE, 1
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end


InsideBuilding_EventScript_Willie::
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_DEFEATED_WILLIE, InsideBuilding_EventScript_Willie_2
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_1, MSGBOX_YESNO
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideBuilding_EventScript_Willie_5
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_3, MSGBOX_DEFAULT
InsideBuilding_EventScript_Willie_1:
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

InsideBuilding_EventScript_Willie_2:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_0, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1

InsideBuilding_EventScript_Willie_5:
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_2, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1


# 112 "data/maps/OldaleTown_Mart/scripts.pory"

# 113 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 120 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 121 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 123 "data/maps/OldaleTown_Mart/scripts.pory"

# 124 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 125 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 126 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 128 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 129 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 131 "data/maps/OldaleTown_Mart/scripts.pory"

# 132 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 133 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 134 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 137 "data/maps/OldaleTown_Mart/scripts.pory"

# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 140 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 141 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 146 "data/maps/OldaleTown_Mart/scripts.pory"

# 147 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 148 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 149 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 150 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 151 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 153 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 154 "data/maps/OldaleTown_Mart/scripts.pory"

# 155 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 157 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 158 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 159 "data/maps/OldaleTown_Mart/scripts.pory"

# 160 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 163 "data/maps/OldaleTown_Mart/scripts.pory"

# 164 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 165 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 166 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 167 "data/maps/OldaleTown_Mart/scripts.pory"

# 168 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 170 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 171 "data/maps/OldaleTown_Mart/scripts.pory"

# 172 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 173 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 174 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 176 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"

# 13 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_SnaggHideoutBroadcast_Movement_0:
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_right
# 15 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
# 15 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
# 15 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_SnaggHideoutBroadcast_Movement_1:
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
	step_end

InsideBuilding_EventScript_Willie_Text_0:
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "WILLIE: But, yeah, you're tough.\n"
	.string "Real tough.\p"
	.string "You did a real number on us.\p"
	.string "Hey, I know. Why not test your\n"
	.string "skills in Phenac City?\l"
	.string "It's out west of here.\p"
	.string "You'll find trainers who are way\n"
	.string "better than me there.\p"
	.string "You should go out there and get\n"
	.string "some battling in.$"

InsideBuilding_EventScript_Willie_Text_1:
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "You're a Pokémon Trainer too,\n"
	.string "aren't you?$"

InsideBuilding_EventScript_Willie_Text_2:
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Heh... I can tell. And you're\n"
	.string "good. I can see it in your eyes.\l"
	.string "I bet your POKéMON are impressive, too.\p"
	.string "If the opportunity ever arises,\n"
	.string "I'd like to have a battle with you.\l"
	.string "Heh... though I doubt I'd have\l"
	.string "any chance of beating you.$"

InsideBuilding_EventScript_Willie_Text_3:
# 92 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Heh... I can tell. And you're\n"
	.string "good. I can see it in your eyes.\l"
	.string "I bet your POKéMON are impressive, too.\p"
	.string "If the opportunity ever arises,\n"
	.string "I'd like to have a battle with you.\p"
	.string "Heh... though I doubt I'd have\n"
	.string "any chance of beating you.$"

OldaleTown_Mart_Text_SnaggHideoutReport::
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Authorities have made a stunning\n"
	.string "announcement on the mysterious\l"
	.string "building that exploded in Eclo Canyon.\l"
	.string "It was Team Snaggem's Hideout.\p"
	.string "Team Snaggem is a gang of POKéMON\n"
	.string "abductors who have already been\l"
	.string "marked for arrest.\p"
	.string "The hideout was discovered only as\n"
	.string "a result of the explosion.\p"
	.string "By the time police arrived, the\n"
	.string "ruined building had already been\l"
	.string "abandoned.\p"
	.string "The cause of the explosion is\n"
	.string "under investigation.\p"
	.string "It should become apparent eventually.$"
