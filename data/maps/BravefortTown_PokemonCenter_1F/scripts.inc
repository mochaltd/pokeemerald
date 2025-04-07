BravefortTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BravefortTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


BravefortTown_PokemonCenter_1F_OnTransition::
# 7 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BRAVEFORT_TOWN
	end


BravefortTown_PokemonCenter_1F_EventScript_RegionMap::
# 12 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Movement_0
# 14 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 15 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	msgbox BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Text_0
# 17 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 18 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Movement_1
# 19 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 20 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	release
	return


# 13 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Movement_0:
# 13 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 18 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Movement_1:
# 18 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	face_original_direction
	step_end

BravefortTown_PokemonCenter_1F_EventScript_RegionMap_Text_0:
# 15 "data/maps/BravefortTown_PokemonCenter_1F/scripts.pory"
	.string "It's convenient that these bulletin\n"
	.string "boards in the Pokémon Centers have a\l"
	.string "copy of the Shizen region map.\p"
	.string "It's really helpful if I ever feel lost!$"
