OldaleTown_Mart_MapScripts::
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OldaleTown_Mart_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

OldaleTown_Mart_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	map_script_2 FLAG_TV_SNAGGEM_HIDEOUT_BROADCAST, 0, OldaleTown_Mart_EventScript_SnaggHideoutBroadcast
	.2byte 0


OldaleTown_Mart_EventScript_SnaggHideoutBroadcast::
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	lockall
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOnTVScreen
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Mart_EventScript_SnaggHideoutBroadcast_Movement_0
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, FALSE
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	delay 30
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_SnaggHideoutReport, MSGBOX_DEFAULT
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOffTVScreen
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	fadedefaultbgm
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Mart_EventScript_SnaggHideoutBroadcast_Movement_1
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_TV_SNAGGEM_HIDEOUT_BROADCAST
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end


InsideBuilding_EventScript_Willie::
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_DEFEATED_WILLIE, InsideBuilding_EventScript_Willie_2
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_WILLIE_STATE, 1
	goto_if_eq InsideBuilding_EventScript_Willie_3
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_2, MSGBOX_DEFAULT
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
	setvar VAR_WILLIE_STATE, 1
InsideBuilding_EventScript_Willie_1:
# 97 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

InsideBuilding_EventScript_Willie_2:
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_0, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1

InsideBuilding_EventScript_Willie_3:
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox InsideBuilding_EventScript_Willie_Text_1, MSGBOX_DEFAULT
	goto InsideBuilding_EventScript_Willie_1


# 106 "data/maps/OldaleTown_Mart/scripts.pory"

# 107 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 108 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 109 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 110 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 111 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 112 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 113 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 117 "data/maps/OldaleTown_Mart/scripts.pory"

# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 120 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 121 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 123 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 124 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 125 "data/maps/OldaleTown_Mart/scripts.pory"

# 126 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 128 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 129 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 131 "data/maps/OldaleTown_Mart/scripts.pory"

# 132 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 133 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 134 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 137 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 140 "data/maps/OldaleTown_Mart/scripts.pory"

# 141 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 146 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 147 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 148 "data/maps/OldaleTown_Mart/scripts.pory"

# 149 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 150 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 151 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 153 "data/maps/OldaleTown_Mart/scripts.pory"

# 154 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 155 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 157 "data/maps/OldaleTown_Mart/scripts.pory"

# 158 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 159 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 161 "data/maps/OldaleTown_Mart/scripts.pory"

# 162 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 163 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 164 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 165 "data/maps/OldaleTown_Mart/scripts.pory"

# 166 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 167 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 168 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 170 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"

# 13 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_SnaggHideoutBroadcast_Movement_0:
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_SnaggHideoutBroadcast_Movement_1:
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
	step_end

InsideBuilding_EventScript_Willie_Text_0:
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
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
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "WILLIE: Heh... I can tell you're\n"
	.string "good. I can see it in your eyes.\p"
	.string "If the opportunity ever arises,\n"
	.string "I'd like to have a battle with you.$"

InsideBuilding_EventScript_Willie_Text_2:
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
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

OldaleTown_Mart_Text_SnaggHideoutReport::
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Authorities have made a stunning\n"
	.string "announcement on the mysterious\n"
	.string "building that exploded in Eclo Canyon.\p"
	.string "It was Team Snaggem's Hideout.\p"
	.string "Team Snaggem is a gang of POKéMON\n"
	.string "abductors who have already been\n"
	.string "marked for arrest.\p"
	.string "The hideout was discovered only as\n"
	.string "a result of the explosion.\p"
	.string "By the time police arrived, the\n"
	.string "ruined building had already\n"
	.string "been abandoned.\p"
	.string "The cause of the explosion is\n"
	.string "under investigation. It should\n"
	.string "become apparent eventually.$"
