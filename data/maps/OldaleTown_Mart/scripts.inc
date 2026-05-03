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
	goto_if_set FLAG_PHENAC_FOLLY_1, OutskirtNPC1_Text_2
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_1, MSGBOX_YESNO
# 125 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OutskirtNPC1_Text_5
# 137 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_3, MSGBOX_DEFAULT
OutskirtNPC1_Text_4:
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_NPC1, OutskirtNPC1_Text_Movement_0
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement 0
# 146 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OutskirtNPC1_Text_2:
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	lockall
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_0, MSGBOX_DEFAULT
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end

OutskirtNPC1_Text_5:
# 126 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC1_Text_Text_2, MSGBOX_DEFAULT
	goto OutskirtNPC1_Text_4


Outskirt_Shop_Guy_TEXT::
# 151 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 153 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, Outskirt_Shop_Guy_TEXT_2
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_PHENAC_PHENAC_SNAGEM_DEFEATED_1, Outskirt_Shop_Guy_TEXT_5
# 195 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_5
# 204 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

Outskirt_Shop_Guy_TEXT_2:
# 154 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_0, MSGBOX_DEFAULT
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Outskirt_Mart_1
# 157 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end

Outskirt_Shop_Guy_TEXT_5:
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OutskirtNPC1_Text_Movement_0
# 165 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement
# 166 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 167 "data/maps/OldaleTown_Mart/scripts.pory"
	playse SE_PIN
# 168 "data/maps/OldaleTown_Mart/scripts.pory"
	waitse
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_SHOP_GUY, OutskirtNPC1_Text_Movement_0
# 174 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_2, MSGBOX_DEFAULT
# 180 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_SHOP_GUY, Outskirt_Shop_Guy_TEXT_Movement_0
# 183 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_3, MSGBOX_DEFAULT
# 185 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 186 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_POKEBALLS_UNLOCKED
# 187 "data/maps/OldaleTown_Mart/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 4
# 188 "data/maps/OldaleTown_Mart/scripts.pory"
	clearflag FLAG_PHENAC_CITY_MAYOR_MIRORB
# 189 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Outskirt_Shop_Guy_TEXT_Text_4, MSGBOX_DEFAULT
# 191 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Outskirt_Mart_1
# 192 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end


	.align 2
# 208 "data/maps/OldaleTown_Mart/scripts.pory"
Outskirt_Mart_1:
# 209 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 211 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 212 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 213 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 214 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 215 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 216 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

OutskirtNPC2_Text::
# 220 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 221 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 222 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_PHENAC_FOLLY_1, OutskirtNPC2_Text_2
# 229 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC2_Text_Text_1
# 240 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement OUTSKIRT_NPC2, OutskirtNPC1_Text_Movement_0
# 243 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmovement
# 244 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OutskirtNPC2_Text_2:
# 223 "data/maps/OldaleTown_Mart/scripts.pory"
	lockall
# 224 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC2_Text_Text_0, MSGBOX_DEFAULT
# 226 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end


OutskirtNPC3_Text::
# 249 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 250 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 251 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_PHENAC_FOLLY_1, OutskirtNPC3_Text_2
# 259 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC3_Text_Text_1
# 270 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OutskirtNPC3_Text_2:
# 252 "data/maps/OldaleTown_Mart/scripts.pory"
	lockall
# 253 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OutskirtNPC3_Text_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/OldaleTown_Mart/scripts.pory"
	releaseall
	end


# 275 "data/maps/OldaleTown_Mart/scripts.pory"

# 276 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 277 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 278 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 279 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 280 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 281 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 282 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 283 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 284 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 285 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 286 "data/maps/OldaleTown_Mart/scripts.pory"

# 287 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 288 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 289 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 290 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 291 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 292 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 293 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 294 "data/maps/OldaleTown_Mart/scripts.pory"

# 295 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 296 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 297 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 298 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 299 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 300 "data/maps/OldaleTown_Mart/scripts.pory"

# 301 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 302 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 303 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 304 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 305 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 306 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 307 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 308 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 309 "data/maps/OldaleTown_Mart/scripts.pory"

# 310 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 311 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 312 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 313 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 314 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 315 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 316 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 317 "data/maps/OldaleTown_Mart/scripts.pory"

# 318 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 319 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 320 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 321 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 322 "data/maps/OldaleTown_Mart/scripts.pory"

# 323 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 324 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 325 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 326 "data/maps/OldaleTown_Mart/scripts.pory"

# 327 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 328 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 329 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 330 "data/maps/OldaleTown_Mart/scripts.pory"

# 331 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 332 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 333 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 334 "data/maps/OldaleTown_Mart/scripts.pory"

# 335 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 336 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 337 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 338 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 339 "data/maps/OldaleTown_Mart/scripts.pory"
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

# 142 "data/maps/OldaleTown_Mart/scripts.pory"
OutskirtNPC1_Text_Movement_0:
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	face_up
	step_end

# 180 "data/maps/OldaleTown_Mart/scripts.pory"
Outskirt_Shop_Guy_TEXT_Movement_0:
# 181 "data/maps/OldaleTown_Mart/scripts.pory"
	face_down
	step_end

InsideBuilding_EventScript_Willie_Text_0:
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Willie: But, yeah, you're tough.\n"
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
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Recently, there's been nothing but bad\n"
	.string "news.\p"
	.string "I wish there'd be a good piece of news\n"
	.string "that would brighten up the day for\l"
	.string "everyone.$"

OutskirtNPC1_Text_Text_1:
# 123 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Hey, do you know about Team Snagem?$"

OutskirtNPC1_Text_Text_2:
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "They're a bunch of heartless crooks.\n"
	.string "They rip off POKéMON from trainers\l"
	.string "without any hesitation.\p"
	.string "I hear they use something called\n"
	.string "a Snag Ball to catch POKéMON from\l"
	.string "their rightfult trainer in battle.\p"
	.string "I'm guessing that you're a trainer.\n"
	.string "You'd best be careful.$"

OutskirtNPC1_Text_Text_3:
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "They're a seriously nasty lot! There's\n"
	.string "no telling how many trainers have\l"
	.string "suffered at their hands.$"

Outskirt_Shop_Guy_TEXT_Text_0:
# 154 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Listen, pal. If you're intending to\n"
	.string "travel some more, you might want to\l"
	.string "stock up on supplies here.$"

Outskirt_Shop_Guy_TEXT_Text_1:
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "{RIVAL}: Hi, can I ask you\n"
	.string "something?\p"
	.string "Don't you sell any Poké Balls?$"

Outskirt_Shop_Guy_TEXT_Text_2:
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Huh? Poké Balls, you say?\n"
	.string "There's no call for those things around\l"
	.string "these parts...\p"
	.string "Where'd I put them now?\p"
	.string "Oh, yeah, here they are!\n"
	.string "A little dusty, I'm afraid, but otherwise\l"
	.string "perfectly useable.$"

Outskirt_Shop_Guy_TEXT_Text_3:
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Here! Take these. I'll let you have them\n"
	.string "for free.$"

Outskirt_Shop_Guy_TEXT_Text_4:
# 189 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Well, since I found them, I may just as\n"
	.string "well put them out with the rest of my\l"
	.string "merchandise.\p"
	.string "If you need some more, well, how about\n"
	.string "buying them from me?$"

Outskirt_Shop_Guy_TEXT_Text_5:
# 197 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh?\n"
	.string "I haven't seen your face around these\l"
	.string "parts. A traveler, huh?\p"
	.string "Not that it matters any.\n"
	.string "I don't know where you might've come\l"
	.string "from, but relax, stick around for a\l"
	.string "while.$"

OutskirtNPC2_Text_Text_0:
# 224 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Ah, so you've been to Phenac City.\p"
	.string "Oh, my! I'm quite surprised! You've\n"
	.string "already gotten yourself a girlfriend!$"

OutskirtNPC2_Text_Text_1:
# 231 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "You know, I don't quite understand\n"
	.string "what happened, but having your hideout\l"
	.string "blow up on you...\p"
	.string "Crime doesn't pay I guess.\p"
	.string "I live a crime-free life, so nothing's\n"
	.string "going to blow up on me.\l"
	.string "Wahaha!$"

OutskirtNPC3_Text_Text_0:
# 253 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh, so some thugs gave you a rough\n"
	.string "time?\p"
	.string "There wasn't anyone like that in the old\n"
	.string "days.\p"
	.string "Isn't it terrible?$"

OutskirtNPC3_Text_Text_1:
# 261 "data/maps/OldaleTown_Mart/scripts.pory"
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
