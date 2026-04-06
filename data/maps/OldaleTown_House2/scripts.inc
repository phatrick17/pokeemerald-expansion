OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"

Phenac_House2_Lady1::
	msgbox Phenac_House2_Lady1_Dialogue, MSGBOX_NPC
	end

Phenac_House2_Lady1_Dialogue:
	.string "Hello! Are you travelers?\n"
	.string "Don't you think Phenac City is a very\l"
	.string "nice place?\p"
	.string "But if you're thinking about going on,\n"
	.string "you should be careful.\p"
	.string "There is a town called Pyrite ahead.\n"
	.string "The place is filled with thugs and other\l"
	.string "nasty people.$"

Phenac_House2_Man1::
	msgbox Phenac_House2_Man1_Dialogue, MSGBOX_NPC
	end

Phenac_House2_Man1_Dialogue:
	.string "A long time ago, this area was barren\n"
	.string "of life.\p"
	.string "Neither people nor POKéMON could live \n"
	.string "on this blighted land.\p"
	.string "It was the Mayor's grandfather, the\n"
	.string "first Mayor, who founded Phenac by\l"
	.string "drawing water to this parched land.$"
