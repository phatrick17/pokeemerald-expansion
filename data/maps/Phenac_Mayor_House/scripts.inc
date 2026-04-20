Phenac_Mayor_House_MapScripts::
# 2 "data/maps/Phenac_Mayor_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Phenac_Mayor_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Phenac_Mayor_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Phenac_Mayor_House/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 0, Phenac_Mayor_House_Escade_Encounter_1
# 4 "data/maps/Phenac_Mayor_House/scripts.pory"
	map_script_2 VAR_PHENAC_CITY_STATE, 5, Phenac_Mayor_House_Miror_B_Encounter
	.2byte 0


Phenac_Mayor_House_Escade_Encounter_1::
# 9 "data/maps/Phenac_Mayor_House/scripts.pory"
	playbgm MUS_B_DOME_LOBBY, FALSE
# 10 "data/maps/Phenac_Mayor_House/scripts.pory"
	lock
# 11 "data/maps/Phenac_Mayor_House/scripts.pory"
	addobject PHENAC_MAYOR_HOUSE_RUI
# 12 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Mayor_House_Escade_Encounter_1_Movement_0
# 16 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 17 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Common_Movement_ExclamationMark
# 18 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 20 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement 0
# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_1
# 25 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 26 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Escade_Encounter_1_Movement_2
# 37 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 38 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Common_Movement_ExclamationMark
# 52 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 54 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_2, MSGBOX_DEFAULT
# 81 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_3
# 84 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 85 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Encounter_1_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/Phenac_Mayor_House/scripts.pory"
	closemessage
# 96 "data/maps/Phenac_Mayor_House/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 1
# 97 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_ESCADE_1, Phenac_Mayor_House_Escade_Encounter_1_Movement_4
# 102 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 103 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Escade_Encounter_1_Movement_5
# 106 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 107 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_RUI
# 108 "data/maps/Phenac_Mayor_House/scripts.pory"
	setflag FLAG_PHENAC_VISITED_MAYOR_1
# 109 "data/maps/Phenac_Mayor_House/scripts.pory"
	releaseall
	end


Phenac_Mayor_House_Escade_Dialogue_1::
# 115 "data/maps/Phenac_Mayor_House/scripts.pory"
	lockall
# 116 "data/maps/Phenac_Mayor_House/scripts.pory"
	faceplayer
# 117 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Escade_Dialogue_1_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/Phenac_Mayor_House/scripts.pory"
	releaseall
	end


Phenac_Mayor_House_Miror_B_Encounter::
# 131 "data/maps/Phenac_Mayor_House/scripts.pory"
	lockall
# 132 "data/maps/Phenac_Mayor_House/scripts.pory"
	playbgm MUS_B_FRONTIER, FALSE
# 133 "data/maps/Phenac_Mayor_House/scripts.pory"
	addobject PHENAC_MAYOR_HOUSE_RUI
# 134 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Miror_B_Encounter_Movement_0
# 138 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 139 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_FOLLY, Common_Movement_ExclamationMark
# 140 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_PIN
# 141 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 142 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_1
# 149 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_2
# 160 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_1
# 172 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_3, MSGBOX_DEFAULT
# 173 "data/maps/Phenac_Mayor_House/scripts.pory"
	playbgm MUS_B_PIKE, FALSE
# 174 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 240
# 175 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_2
# 178 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 179 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 30
# 180 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_1
# 183 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 184 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 30
# 185 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Escade_Encounter_1_Movement_3
# 188 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 189 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 30
# 190 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_3
# 193 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 194 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 30
# 195 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_MIROR, Phenac_Mayor_House_Miror_B_Encounter_Movement_4
# 199 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 200 "data/maps/Phenac_Mayor_House/scripts.pory"
	delay 30
# 201 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_MIROR
# 202 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_EXIT
# 203 "data/maps/Phenac_Mayor_House/scripts.pory"
	closemessage
# 204 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_VERDE, Phenac_Mayor_House_Miror_B_Encounter_Movement_5
# 207 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_ROSSO, Phenac_Mayor_House_Miror_B_Encounter_Movement_5
# 210 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_BLUNO, Phenac_Mayor_House_Miror_B_Encounter_Movement_5
# 213 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 214 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_BLUNO, Phenac_Mayor_House_Miror_B_Encounter_Movement_6
# 218 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 219 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_BLUNO
# 220 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_ROSSO, Phenac_Mayor_House_Miror_B_Encounter_Movement_7
# 225 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 226 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_ROSSO
# 227 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_VERDE, Phenac_Mayor_House_Miror_B_Encounter_Movement_8
# 232 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 233 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_VERDE
# 234 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_FOLLY, Phenac_Mayor_House_Miror_B_Encounter_Movement_9
# 237 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 238 "data/maps/Phenac_Mayor_House/scripts.pory"
	fadenewbgm MUS_NONE
# 239 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_4, MSGBOX_DEFAULT
# 242 "data/maps/Phenac_Mayor_House/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_2, Phenac_Mayor_House_Miror_B_Encounter_Text_5
# 245 "data/maps/Phenac_Mayor_House/scripts.pory"
	playbgm MUS_NONE, FALSE
# 246 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_TRUDLY, Phenac_Mayor_House_Miror_B_Encounter_Movement_9
# 249 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 250 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_6, MSGBOX_DEFAULT
# 252 "data/maps/Phenac_Mayor_House/scripts.pory"
	setflag FLAG_TEMP_5
# 253 "data/maps/Phenac_Mayor_House/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_3, Phenac_Mayor_House_Miror_B_Encounter_Text_7
# 256 "data/maps/Phenac_Mayor_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 257 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_8, MSGBOX_DEFAULT
# 270 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_TRUDLY, Phenac_Mayor_House_Miror_B_Encounter_Movement_10
# 273 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 274 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_TRUDLY
# 275 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_EXIT
# 276 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 277 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_FOLLY, Phenac_Mayor_House_Miror_B_Encounter_Movement_11
# 281 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 282 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_FOLLY
# 283 "data/maps/Phenac_Mayor_House/scripts.pory"
	playse SE_EXIT
# 284 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitse
# 285 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Phenac_Mayor_House_Miror_B_Encounter_Movement_12
# 288 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Miror_B_Encounter_Movement_13
# 291 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 292 "data/maps/Phenac_Mayor_House/scripts.pory"
	msgbox Phenac_Mayor_House_Miror_B_Encounter_Text_9, MSGBOX_DEFAULT
# 296 "data/maps/Phenac_Mayor_House/scripts.pory"
	closemessage
# 297 "data/maps/Phenac_Mayor_House/scripts.pory"
	applymovement PHENAC_MAYOR_HOUSE_RUI, Phenac_Mayor_House_Escade_Encounter_1_Movement_5
# 300 "data/maps/Phenac_Mayor_House/scripts.pory"
	waitmovement
# 301 "data/maps/Phenac_Mayor_House/scripts.pory"
	removeobject PHENAC_MAYOR_HOUSE_RUI
# 302 "data/maps/Phenac_Mayor_House/scripts.pory"
	clearflag FLAG_PHENAC_CITY_CIPHER_TRIO
# 303 "data/maps/Phenac_Mayor_House/scripts.pory"
	setvar VAR_PHENAC_CITY_STATE, 6
# 304 "data/maps/Phenac_Mayor_House/scripts.pory"
	setflag FLAG_PHENAC_CITY_MAYOR_MIRORB
# 305 "data/maps/Phenac_Mayor_House/scripts.pory"
	releaseall
	end


# 12 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_0:
# 13 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 14 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 21 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_1:
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 22 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 23 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 23 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_2:
# 35 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_up
	step_end

# 81 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_3:
# 82 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
	step_end

# 97 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_4:
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_up
# 98 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_up
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 99 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 100 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 103 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Escade_Encounter_1_Movement_5:
# 104 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
	step_end

# 134 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_0:
# 135 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 136 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 146 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_1:
# 147 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_2:
# 158 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_up
	step_end

# 190 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_3:
# 191 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_left
	step_end

# 195 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_4:
# 196 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_left
# 197 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 197 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 204 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_5:
# 205 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
# 205 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
# 205 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
# 205 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_in_place_down
	step_end

# 214 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_6:
# 215 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 215 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 216 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 216 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 220 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_7:
# 221 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 222 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 222 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 223 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 223 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_8:
# 228 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 228 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 229 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 229 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_right
# 230 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 230 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 234 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_9:
# 235 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
# 235 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_down
	step_end

# 270 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_10:
# 271 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_fast_down
# 271 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_fast_down
	step_end

# 277 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_11:
# 278 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_fast_left
# 279 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_fast_down
# 279 "data/maps/Phenac_Mayor_House/scripts.pory"
	walk_fast_down
	step_end

# 285 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_12:
# 286 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_right
	step_end

# 288 "data/maps/Phenac_Mayor_House/scripts.pory"
Phenac_Mayor_House_Miror_B_Encounter_Movement_13:
# 289 "data/maps/Phenac_Mayor_House/scripts.pory"
	face_left
	step_end

Phenac_Mayor_House_Escade_Encounter_1_Text_0:
# 27 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Ah, you must be travelers!\n"
	.string "Welcome to Phenac City!\p"
	.string "I am Es Cade, the Mayor.\p"
	.string "Es Cade: Now, you wanted to see me.\n"
	.string "Is there something that I may be\l"
	.string "able to assist you with?$"

Phenac_Mayor_House_Escade_Encounter_1_Text_1:
# 39 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "{RIVAL}: Um... Er...\p"
	.string "Es Cade: Oh? What may I do for\n"
	.string "a pretty young lady like you?\p"
	.string "{RIVAL}: I... I saw it!\p"
	.string "Es Cade: Saw it?\n"
	.string "And what did you see?\p"
	.string "{RIVAL}: I saw a peculiar POkéMON...\p"
	.string "No, that's not quite right.\p"
	.string "What I saw was a POkéMON that gave\n"
	.string "off a black aura.\l"
	.string "It was like a fighting machine!\l"
	.string "And, that POkéMON would attack people!$"

Phenac_Mayor_House_Escade_Encounter_1_Text_2:
# 55 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: O-o-o-oh, my!\n"
	.string "POkéMON like a fighting machine?\l"
	.string "And it attacks people?!\p"
	.string "Now if that were true, that would\n"
	.string "be truly frightening.\p"
	.string "However, it is a little hard to believe.\p"
	.string "{RIVAL}: It's true! It's true,\n"
	.string "Mr Mayor! Because I saw that POkéMON,\l"
	.string "I was made the prisoner of some\l"
	.string "frightening men until just a little\l"
	.string "while ago.\p"
	.string "Es Cade: Hmm... I see. I understand\n"
	.string "I will order an investigation at once.\p"
	.string "{RIVAL}: You will? Thank you\n"
	.string "Mr. Mayor!\p"
	.string "Es Cade: Oh, no, no.\n"
	.string "There is no need for thanks.\p"
	.string "We mustn't allow thugs to do as\n"
	.string "they wish.\p"
	.string "Especially thugs that endanger a\n"
	.string "a pretty young lady like you!\p"
	.string "I'll ask that you give me a little time\n"
	.string "on this matter.\p"
	.string "I promise we will get some useful\n"
	.string "information for you.$"

Phenac_Mayor_House_Escade_Encounter_1_Text_3:
# 86 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: Oh yes.\p"
	.string "You appear to be POkéMON trainers\n"
	.string "yourselves.\p"
	.string "If so, I urge you to visit our city's\n"
	.string "pride and joy, our POkéMON Stadium.\p"
	.string "It's all the way at the top of our city.\p"
	.string "It's a breathtakingly beautiful\n"
	.string "stadium benefitting our oasis city!$"

Phenac_Mayor_House_Escade_Dialogue_1_Text_0:
# 118 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Es Cade: I promise you, we will obtain\n"
	.string "useful information about those\l"
	.string "POkéMON.\p"
	.string "While we do so, I heartily recommend\n"
	.string "that you visit our POkéMON Stadium,\l"
	.string "the symbol of our civic pride!\p"
	.string "Head all the way north and you can't\n"
	.string "miss it!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_0:
# 143 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Folly: Master Miror B.!\n"
	.string "It's...It's him!\p"
	.string "He's the one that took the girl from us!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_1:
# 150 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Miror B.: Oh, now aren't you boys\n"
	.string "frightfully pathetic?\p"
	.string "You mean to tell me you were bested by\n"
	.string "these darling infants?\p"
	.string "Darling, did you say your name was\n"
	.string "{PLAYER} or something?\p"
	.string "I so don't like saying this, but we're\n"
	.string "not at liberty to keep your lady friend\l"
	.string "at liberty.\p"
	.string "That sweet young thing, she can see\n"
	.string "things that ordinary people aren't\l"
	.string "supposed to see.\p"
	.string "That just will not do for what we're\n"
	.string "planning to do. No, it just won't do at\l"
	.string "all.\p"
	.string "If you don't like pain, like most people,\n"
	.string "you can avoid the pain by keeping your\l"
	.string "nose out of places it needn't be.$"

Phenac_Mayor_House_Miror_B_Encounter_Text_2:
# 161 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Boys! Oh Boys!\p"
	.string "Folly: Yes! Yes, we will!\n"
	.string "Trudly: Yes! Yes, we will!\p"
	.string "Miror B.: Boys, I shall make my return to\n"
	.string "Pyrite now.\p"
	.string "Do remember that I will be waiting for\n"
	.string "you to return with the little lady.\p"
	.string "Am I making myself clear?\n"
	.string "I won't accept failure from you again,\l"
	.string "boys.\p"
	.string "Fuhohoho...$"

Phenac_Mayor_House_Miror_B_Encounter_Text_3:
# 172 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Let the music spin! Let's get it on!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_4:
# 239 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Folly: You, you, you!\p"
	.string "The last time, you caught me off guard!\n"
	.string "That's not gonna happen again!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_5:
# 243 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Folly: Awwww, blast it!\n"
	.string "I got tripped up again!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_6:
# 250 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Trudley: My turn now!\p"
	.string "I'm not going to end up like Folly!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_7:
# 254 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Trudly: Wh-What?!\n"
	.string "My POKeMON!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_8:
# 257 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "Trudley: Darn it, but you're good!\n"
	.string "You Snagged my POKeMON!\p"
	.string "Folly: Hey, what are you saying?\n"
	.string "You're not supposed to be impressed!\p"
	.string "Oh, man ...\n"
	.string "What are we supposed to do?\p"
	.string "We got flattened again.\n"
	.string "Miror B.'s going to chew us out!\p"
	.string "Trudley: What do we do?\n"
	.string "What is there to do?\p"
	.string "...\n"
	.string "...\p"
	.string "Run away!!$"

Phenac_Mayor_House_Miror_B_Encounter_Text_9:
# 292 "data/maps/Phenac_Mayor_House/scripts.pory"
	.string "{RIVAL}: You did it, {PLAYER}!\p"
	.string "You Snagged that POKeMON from that\n"
	.string "goon!\p"
	.string "But I'm sure there are others like it.\p"
	.string "Let's get all of them back from the bad\n"
	.string "guys!$"
