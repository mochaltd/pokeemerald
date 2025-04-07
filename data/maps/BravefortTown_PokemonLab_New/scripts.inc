BravefortTown_PokemonLab_New_MapScripts::
	.byte 0


BravefortTown_PokemonLab_New_Scientist::
# 6 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, BravefortTown_PokemonLab_New_Scientist_1
# 14 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, BravefortTown_PokemonLab_New_Scientist_2
	return

BravefortTown_PokemonLab_New_Scientist_1:
# 7 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	lock
# 8 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 1, BravefortTown_PokemonLab_New_Scientist_Movement_0
# 9 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 1
# 10 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	msgbox BravefortTown_PokemonLab_New_Scientist_Text_0
# 11 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	closemessage
# 12 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	release
	return

BravefortTown_PokemonLab_New_Scientist_2:
# 15 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 1, BravefortTown_PokemonLab_New_Scientist_Movement_0
# 16 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 1
# 17 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	msgbox BravefortTown_PokemonLab_New_Scientist_Text_1
# 21 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	closemessage
# 22 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	giveitem ITEM_HM06
# 23 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 24 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	msgbox BravefortTown_PokemonLab_New_Scientist_Text_2
# 26 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	release
	return


BravefortTown_PokemonLab_EventScript_New_ScientistIV::
# 60 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	lock
# 61 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 2, BravefortTown_PokemonLab_New_Scientist_Movement_0
# 62 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 2
# 63 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	msgbox BravefortTown_PokemonLab_EventScript_New_ScientistIV_Text_0
# 65 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 2, BravefortTown_PokemonLab_EventScript_New_ScientistIV_Movement_0
# 66 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 2
# 67 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	closemessage
# 68 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	release
	return


BravefortTown_PokemonLab_EventScript_New_Scientist2::
# 72 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	lock
# 73 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 3, BravefortTown_PokemonLab_New_Scientist_Movement_0
# 74 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 3
# 75 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	msgbox BravefortTown_PokemonLab_EventScript_New_Scientist2_Text_0
# 78 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	applymovement 3, BravefortTown_PokemonLab_EventScript_New_ScientistIV_Movement_0
# 79 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	waitmovement 3
# 80 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	closemessage
# 81 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	release
	return


# 8 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
BravefortTown_PokemonLab_New_Scientist_Movement_0:
# 8 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	face_player
	step_end

# 65 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
BravefortTown_PokemonLab_EventScript_New_ScientistIV_Movement_0:
# 65 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	face_original_direction
	step_end

BravefortTown_PokemonLab_New_Scientist_Text_0:
# 10 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	.string "Thank you for your help, {PLAYER}!$"

BravefortTown_PokemonLab_New_Scientist_Text_1:
# 17 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	.string "Oh! Hello, {PLAYER}!\p"
	.string "It's good to see you again under better\n"
	.string "circumstances.\p"
	.string "It looks like you've been getting some\n"
	.string "use out of the Exp. Share! That's great\l"
	.string "news, that was one of our projects that\l"
	.string "we were most excited about.\p"
	.string "We also work on optimizing the\n"
	.string "Technical and Hidden Machines that\l"
	.string "have become so popular recently. I\l"
	.string "actually have one for you as a thanks\l"
	.string "for saving me in Coaltine Tunnel.$"

BravefortTown_PokemonLab_New_Scientist_Text_2:
# 24 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	.string "That HM contains ROCK SMASH to help\n"
	.string "you break through rocks to find rare\l"
	.string "Pokémon or find new passages.\p"
	.string "I hope this is a great help to your\n"
	.string "journey.$"

BravefortTown_PokemonLab_EventScript_New_ScientistIV_Text_0:
# 63 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	.string "Have you seen our field workers at the\n"
	.string "Pokémon Centers around Shizen?\p"
	.string "They can tell you some deeper stats\n"
	.string "about your Pokémon than your Pokédex\l"
	.string "can.$"

BravefortTown_PokemonLab_EventScript_New_Scientist2_Text_0:
# 75 "data/maps/BravefortTown_PokemonLab_New/scripts.pory"
	.string "Pokémon are such mysteries.\p"
	.string "Our next big research project is to\n"
	.string "figure out how the Pokémon around the\l"
	.string "region are able to match their strength\l"
	.string "based on a trainer's strength.\p"
	.string "Research is so exciting!$"
