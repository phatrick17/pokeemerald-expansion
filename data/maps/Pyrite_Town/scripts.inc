testbattle1234::
# 2 "data/maps/Pyrite_Town/scripts.pory"
	lock
# 3 "data/maps/Pyrite_Town/scripts.pory"
	faceplayer
# 4 "data/maps/Pyrite_Town/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, testbattle1234_Text_0
# 6 "data/maps/Pyrite_Town/scripts.pory"
	release
	end


addshadowdebug::
# 11 "data/maps/Pyrite_Town/scripts.pory"
	lock
# 12 "data/maps/Pyrite_Town/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_BAYLEEF_SHADOW, 40, item = ITEM_NONE, nature = NATURE_HASTY, move1 = MOVE_SHADOW_BLITZ, move2 = MOVE_RAZOR_LEAF, move3 = MOVE_TAUNT, move4 = MOVE_PROTECT
# 13 "data/maps/Pyrite_Town/scripts.pory"
	createmon 0, PARTY_SIZE, SPECIES_QUILAVA_SHADOW, 40, item = ITEM_NONE, nature = NATURE_TIMID, move1 = MOVE_SHADOW_BLITZ, move2 = MOVE_BUBBLE_BEAM, move3 = MOVE_RETURN, move4 = MOVE_HELPING_HAND
# 14 "data/maps/Pyrite_Town/scripts.pory"
	release
	return


Pyrite_Town_MapScripts::
	.byte 0


testbattle1234_Text_0:
# 5 "data/maps/Pyrite_Town/scripts.pory"
	.string "SIMULATION: Battle success.$"
