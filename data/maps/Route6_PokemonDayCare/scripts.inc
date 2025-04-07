Route6_PokemonDayCare_MapScripts::
	.byte 0


Route6_PokemonDayCare_EventScript_SetupBreeder::
# 6 "data/maps/Route6_PokemonDayCare/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ROUTE6_EGG, Route6_PokemonDayCare_EventScript_Breeder
# 7 "data/maps/Route6_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_RECEIVED_ROUTE6_EGG, Route6_PokemonDayCare_EventScript_TakeCare
	return


Route6_PokemonDayCare_EventScript_Breeder::
# 11 "data/maps/Route6_PokemonDayCare/scripts.pory"
	lock
# 12 "data/maps/Route6_PokemonDayCare/scripts.pory"
	applymovement 2, Route6_PokemonDayCare_EventScript_Breeder_Movement_0
# 13 "data/maps/Route6_PokemonDayCare/scripts.pory"
	waitmovement 2
# 14 "data/maps/Route6_PokemonDayCare/scripts.pory"
	msgbox Route6_PokemonDayCare_EventScript_Breeder_Text_0, MSGBOX_YESNO
# 19 "data/maps/Route6_PokemonDayCare/scripts.pory"
	closemessage
# 20 "data/maps/Route6_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route6_PokemonDayCare_EventScript_Breeder_2
# 40 "data/maps/Route6_PokemonDayCare/scripts.pory"
	msgbox Route6_PokemonDayCare_EventScript_Breeder_Text_3
Route6_PokemonDayCare_EventScript_Breeder_1:
# 42 "data/maps/Route6_PokemonDayCare/scripts.pory"
	waitmessage
# 43 "data/maps/Route6_PokemonDayCare/scripts.pory"
	release
	return

Route6_PokemonDayCare_EventScript_Breeder_2:
# 22 "data/maps/Route6_PokemonDayCare/scripts.pory"
	giveegg SPECIES_TOXEL
# 23 "data/maps/Route6_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route6_PokemonDayCare_EventScript_Breeder_5
# 30 "data/maps/Route6_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route6_PokemonDayCare_EventScript_Breeder_6
	goto Route6_PokemonDayCare_EventScript_Breeder_1

Route6_PokemonDayCare_EventScript_Breeder_5:
# 25 "data/maps/Route6_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/Route6_PokemonDayCare/scripts.pory"
	msgbox Route6_PokemonDayCare_EventScript_Breeder_Text_1
# 27 "data/maps/Route6_PokemonDayCare/scripts.pory"
	setflag FLAG_RECEIVED_ROUTE6_EGG
# 28 "data/maps/Route6_PokemonDayCare/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Route6_PokemonDayCare_EventScript_Breeder_1

Route6_PokemonDayCare_EventScript_Breeder_6:
# 32 "data/maps/Route6_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/Route6_PokemonDayCare/scripts.pory"
	msgbox Route6_PokemonDayCare_EventScript_Breeder_Text_2
# 35 "data/maps/Route6_PokemonDayCare/scripts.pory"
	setflag FLAG_RECEIVED_ROUTE6_EGG
	goto Route6_PokemonDayCare_EventScript_Breeder_1


Route6_PokemonDayCare_EventScript_TakeCare::
# 47 "data/maps/Route6_PokemonDayCare/scripts.pory"
	lock
# 48 "data/maps/Route6_PokemonDayCare/scripts.pory"
	applymovement 2, Route6_PokemonDayCare_EventScript_Breeder_Movement_0
# 49 "data/maps/Route6_PokemonDayCare/scripts.pory"
	waitmovement 2
# 50 "data/maps/Route6_PokemonDayCare/scripts.pory"
	msgbox Route6_PokemonDayCare_EventScript_TakeCare_Text_0
# 51 "data/maps/Route6_PokemonDayCare/scripts.pory"
	closemessage
# 52 "data/maps/Route6_PokemonDayCare/scripts.pory"
	release
	return


# 12 "data/maps/Route6_PokemonDayCare/scripts.pory"
Route6_PokemonDayCare_EventScript_Breeder_Movement_0:
# 12 "data/maps/Route6_PokemonDayCare/scripts.pory"
	face_player
	step_end

Route6_PokemonDayCare_EventScript_Breeder_Text_0:
# 14 "data/maps/Route6_PokemonDayCare/scripts.pory"
	.string "Hello, trainer! You may have heard about\n"
	.string "someone trying to steal a new egg that\l"
	.string "we got recently.\p"
	.string "Luckily, the police got it back for us!\p"
	.string "...\p"
	.string "You know, we were just going to raise it\n"
	.string "here, but on second thought, we find\l"
	.string "that Pokémon tend to be happier with a\l"
	.string "trustworthy trainer.\p"
	.string "Do you want to take this Pokémon egg\n"
	.string "with you?$"

Route6_PokemonDayCare_EventScript_Breeder_Text_1:
# 26 "data/maps/Route6_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received a Pokémon Egg!$"

Route6_PokemonDayCare_EventScript_Breeder_Text_2:
# 33 "data/maps/Route6_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received a Pokémon Egg!\p The Egg was sent to your PC.$"

Route6_PokemonDayCare_EventScript_Breeder_Text_3:
# 40 "data/maps/Route6_PokemonDayCare/scripts.pory"
	.string "Don't worry, we'll take good care of it\n"
	.string "here!$"

Route6_PokemonDayCare_EventScript_TakeCare_Text_0:
# 50 "data/maps/Route6_PokemonDayCare/scripts.pory"
	.string "Take good care of it for us!$"
