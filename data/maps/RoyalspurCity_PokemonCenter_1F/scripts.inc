RoyalspurCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RoyalspurCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


RoyalspurCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROYALSPUR_CITY
	end


RoyalspurCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	end


RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC::
# 21 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 5, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0
# 23 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 5
# 24 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Text_0
# 26 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 27 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 5, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1
# 28 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 5
# 29 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	return


RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat::
# 33 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0
# 35 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 36 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat_Text_0
# 38 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 39 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1
# 40 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 41 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	return


# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0:
# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 27 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1:
# 27 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Text_0:
# 24 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is for any\n"
	.string "Pokémon Trainer to use.\p"
	.string "Naturally, that means you're welcome to\n"
	.string "use it, too.$"

RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat_Text_0:
# 36 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon Centers are great! You can use\n"
	.string "their services as much as you like, and\l"
	.string "it's all for free.\p"
	.string "You never have to worry!$"
