ElderootTown_PlayersHouse_2F_MapScripts::
# 5 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ElderootTown_HealLocation_OnTransition
# 2 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ElderootTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ElderootTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_ELDEROOT_TOWN_STATE, 0, IntroText
	.2byte 0


ElderootTown_HealLocation_OnTransition::
# 9 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_ELDEROOT_TOWN_PLAYERS_HOUSE_2F
	end


IntroText::
# 14 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	lockall
# 15 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	msgbox IntroText_Text_0
# 16 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 17 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 1
# 18 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


ElderootTown_EventScript_GetPotions::
# 22 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	lockall
# 23 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POTION, 5
# 24 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 25 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 26 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	msgbox ElderootTown_EventScript_GetPotions_Text_0
# 28 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	waitfanfare
# 29 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 30 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	removeobject 2
# 31 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 32 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	special SetUnlockedPokedexFlags
# 33 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	msgbox ElderootTown_EventScript_GetPotions_Text_1
# 35 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 36 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


ElderootTown_EventScript_PikachuDoll::
# 41 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	lockall
# 42 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	msgbox ElderootTown_EventScript_PikachuDoll_Text_0
# 43 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


IntroText_Text_0:
# 15 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	.string "Mom: {PLAYER}? Could you come\n"
	.string "downstairs please?$"

ElderootTown_EventScript_GetPotions_Text_0:
# 27 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} received a Pokédex!$"

ElderootTown_EventScript_GetPotions_Text_1:
# 33 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	.string "What is a Pokédex? I wonder what it\n"
	.string "does...\p"
	.string "I'll figure it out later.$"

ElderootTown_EventScript_PikachuDoll_Text_0:
# 42 "data/maps/ElderootTown_PlayersHouse_2F/scripts.pory"
	.string "Mom got me this Pikachu doll for my\n"
	.string "birthday a few years ago.$"
