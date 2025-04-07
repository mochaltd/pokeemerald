ShivervaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShivervaleTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ShivervaleTown_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SHIVERVALE_TOWN
	end


ShivervaleTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth::
# 21 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 23 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 24 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Text_0
# 26 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 27 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 28 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 29 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon::
# 33 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 35 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 5
# 36 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon_Text_0
# 38 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 39 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 40 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 5
# 41 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter::
# 45 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 46 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 47 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 6
# 48 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter_Text_0
# 50 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 51 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 52 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 6
# 53 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0:
# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 27 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1:
# 27 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Text_0:
# 24 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "The man at the house to the south of\n"
	.string "here gave me an HM!\p"
	.string "I used it to teach my Pokémon how to\n"
	.string "CUT down skinny trees.$"

ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon_Text_0:
# 36 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
	.string "female Pokémon.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.$"

ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter_Text_0:
# 48 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Technology has been changing so\n"
	.string "quickly. To think you can now heal\l"
	.string "Pokémon in an instant!\p"
	.string "What's next, a portable communication\n"
	.string "device?$"
