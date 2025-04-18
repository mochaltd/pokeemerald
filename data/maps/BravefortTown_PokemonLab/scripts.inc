BravefortTown_PokemonLab_MapScripts::
	.byte 0


BravefortTown_PokemonLab_Scientist::
# 6 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	call_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, BravefortTown_PokemonLab_GiveRockSmash
# 7 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	call_if_set FLAG_RECEIVED_HM_ROCK_SMASH, BravefortTown_PokemonLab_ThankYou
	return


BravefortTown_PokemonLab_GiveRockSmash::
# 11 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 1, BravefortTown_PokemonLab_GiveRockSmash_Movement_0
# 12 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 1
# 13 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	msgbox BravefortTown_PokemonLab_GiveRockSmash_Text_0
# 17 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	closemessage
# 18 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	giveitem ITEM_HM06
# 19 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 20 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	msgbox BravefortTown_PokemonLab_GiveRockSmash_Text_1
# 22 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	release
	return


BravefortTown_PokemonLab_ThankYou::
# 26 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	lock
# 27 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 1, BravefortTown_PokemonLab_GiveRockSmash_Movement_0
# 28 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 1
# 29 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	msgbox BravefortTown_PokemonLab_ThankYou_Text_0
# 30 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	closemessage
# 31 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	release
	return


BravefortTown_PokemonLab_EventScript_ScientistIV::
# 35 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	lock
# 36 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 2, BravefortTown_PokemonLab_GiveRockSmash_Movement_0
# 37 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 2
# 38 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	msgbox BravefortTown_PokemonLab_EventScript_ScientistIV_Text_0
# 40 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 2, BravefortTown_PokemonLab_EventScript_ScientistIV_Movement_0
# 41 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 2
# 42 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	closemessage
# 43 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	release
	return


BravefortTown_PokemonLab_EventScript_Scientist2::
# 47 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	lock
# 48 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 3, BravefortTown_PokemonLab_GiveRockSmash_Movement_0
# 49 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 3
# 50 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	msgbox BravefortTown_PokemonLab_EventScript_Scientist2_Text_0
# 53 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	applymovement 3, BravefortTown_PokemonLab_EventScript_ScientistIV_Movement_0
# 54 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	waitmovement 3
# 55 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	closemessage
# 56 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	release
	return


# 11 "data/maps/BravefortTown_PokemonLab/scripts.pory"
BravefortTown_PokemonLab_GiveRockSmash_Movement_0:
# 11 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	face_player
	step_end

# 40 "data/maps/BravefortTown_PokemonLab/scripts.pory"
BravefortTown_PokemonLab_EventScript_ScientistIV_Movement_0:
# 40 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	face_original_direction
	step_end

BravefortTown_PokemonLab_GiveRockSmash_Text_0:
# 13 "data/maps/BravefortTown_PokemonLab/scripts.pory"
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

BravefortTown_PokemonLab_GiveRockSmash_Text_1:
# 20 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	.string "That HM contains ROCK SMASH to help\n"
	.string "you break through rocks to find rare\l"
	.string "Pokémon or find new passages.\p"
	.string "I hope this is a great help to your\n"
	.string "journey.$"

BravefortTown_PokemonLab_ThankYou_Text_0:
# 29 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	.string "Thank you for your help, {PLAYER}!$"

BravefortTown_PokemonLab_EventScript_ScientistIV_Text_0:
# 38 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	.string "Have you seen our field workers at the\n"
	.string "Pokémon Centers around Shizen?\p"
	.string "They can tell you some deeper stats\n"
	.string "about your Pokémon than your Pokédex\l"
	.string "can.$"

BravefortTown_PokemonLab_EventScript_Scientist2_Text_0:
# 50 "data/maps/BravefortTown_PokemonLab/scripts.pory"
	.string "Pokémon are such mysteries.\p"
	.string "Our next big research project is to\n"
	.string "figure out how the Pokémon around the\l"
	.string "region are able to match their strength\l"
	.string "based on a trainer's strength.\p"
	.string "Research is so exciting!$"
