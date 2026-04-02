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
	special TurnOnOutskirtStandTVScreen
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
	fadedefaultbgm
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Mart_SnaggHideoutBroadcast_Movement_1
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	special TurnOffOutskirtStandTVScreen
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	special RemoveCameraObject
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


OutskirtNPC1_Text::
# 113 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_0, MSGBOX_YESNO
# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OutskirtNPC1_Text_2
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_2, MSGBOX_DEFAULT
OutskirtNPC1_Text_1:
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_NPC1, OutskirtNPC1_Text_Movement_0
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OutskirtNPC1_Text_2:
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_1, MSGBOX_DEFAULT
	goto OutskirtNPC1_Text_1


Outskirt_Shop_Guy_TEXT::
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 146 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_0
# 155 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


OutskirtNPC2_Text::
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC2_Text_Text_0
# 173 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_NPC2, OutskirtNPC1_Text_Movement_0
# 176 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement
# 177 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


OutskirtNPC3_Text::
# 182 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 183 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC3_Text_Text_0
# 195 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


# 200 "data/maps/OldaleTown_Mart/scripts.pory"

# 201 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 202 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 203 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 204 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 205 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 206 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 207 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 208 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 209 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 211 "data/maps/OldaleTown_Mart/scripts.pory"

# 212 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 213 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 214 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 215 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 216 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 217 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 218 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 219 "data/maps/OldaleTown_Mart/scripts.pory"

# 220 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 221 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 222 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 223 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 224 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 225 "data/maps/OldaleTown_Mart/scripts.pory"

# 226 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 227 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 228 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 229 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 230 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 231 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 232 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 233 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 234 "data/maps/OldaleTown_Mart/scripts.pory"

# 235 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 236 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 237 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 238 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 239 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 240 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 241 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 242 "data/maps/OldaleTown_Mart/scripts.pory"

# 243 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 244 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 245 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 246 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 247 "data/maps/OldaleTown_Mart/scripts.pory"

# 248 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 249 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 250 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 251 "data/maps/OldaleTown_Mart/scripts.pory"

# 252 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 253 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 254 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 255 "data/maps/OldaleTown_Mart/scripts.pory"

# 256 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 257 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 258 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 259 "data/maps/OldaleTown_Mart/scripts.pory"

# 260 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 261 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 262 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 263 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 264 "data/maps/OldaleTown_Mart/scripts.pory"
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

# 22 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_SnaggHideoutBroadcast_Movement_1:
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_left
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/OldaleTown_Mart/scripts.pory"
OutskirtNPC1_Text_Movement_0:
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
	face_up
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

OutskirtNPC1_Text_Text_0:
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Hey, do you know about Team Snagem?$"

OutskirtNPC1_Text_Text_1:
# 120 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "They're a bunch of heartless crooks.\n"
	.string "They rip off POKéMON from trainers\l"
	.string "without any hesitation.\p"
	.string "I hear they use something called\n"
	.string "a Snag Ball to catch POKéMON from\l"
	.string "their rightfult trainer in battle.\p"
	.string "I'm guessing that you're a trainer.\n"
	.string "You'd best be careful.$"

OutskirtNPC1_Text_Text_2:
# 131 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "They're a seriously nasty lot! There's\n"
	.string "no telling how many trainers have\l"
	.string "suffered at their hands.$"

Outskirt_Shop_Guy_TEXT_Text_0:
# 148 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh?\n"
	.string "I haven't seen your face around these\l"
	.string "parts. A traveler, huh?\p"
	.string "Not that it matters any.\n"
	.string "I don't know where you might've come\l"
	.string "from, but relax, stick around for a\l"
	.string "while.$"

OutskirtNPC2_Text_Text_0:
# 164 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "You know, I don't quite understand\n"
	.string "what happened, but having your hideout\l"
	.string "blow up on you...\p"
	.string "Crime doesn't pay I guess.\p"
	.string "I live a crime-free life, so nothing's\n"
	.string "going to blow up on me.\l"
	.string "Wahaha!$"

OutskirtNPC3_Text_Text_0:
# 186 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "There's no forgiving that Team\n"
	.string "Snagem.\l"
	.string "They don't deserve it, not when they\l"
	.string "steal POKéMON from other trainers!\p"
	.string "Why, I'd give a hip hip hooray if\n"
	.string "they were wiped out with their wrecked\l"
	.string "hideout!$"

OldaleTown_Mart_Text_SnaggHideoutReport::
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Authorities have made a stunning\n"
	.string "announcement on the mysterious\l"
	.string "building that exploded in Eclo Canyon.\l"
	.string "It was Team Snagem's Hideout.\p"
	.string "Team Snagem is a gang of POKéMON\n"
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
