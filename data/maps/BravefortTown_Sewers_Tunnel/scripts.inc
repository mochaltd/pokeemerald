BravefortTown_Sewers_Tunnel_MapScripts::
# 2 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BravefortTown_Sewers_Tunnel_OnTransition
	.byte 0


BravefortTown_Sewers_Tunnel_OnTransition::
# 6 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	call_if_set FLAG_BRAVEFORT_SEWERS_GANG, BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle
	end


BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle::
# 11 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 2
	goto_if_ne BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle_1
# 15 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 2
	goto_if_eq BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle_4
	return

BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle_1:
# 12 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	setflag FLAG_BRAVEFORT_SEWERS_GANG
	return

BravefortTown_Sewers_Tunnel_EventScript_SetupGangBattle_4:
# 16 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	clearflag FLAG_BRAVEFORT_SEWERS_GANG
	return


BravefortTown_Sewers_Tunnel_EventScript_Vincent::
# 22 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, BravefortTown_Sewers_Tunnel_Text_VincentIntro, BravefortTown_Sewers_Tunnel_Text_VincentOutro
# 23 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	msgbox BravefortTown_Sewers_Tunnel_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_Tunnel_EventScript_Braxton::
# 41 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, BravefortTown_Sewers_Tunnel_Text_BraxtonIntro, BravefortTown_Sewers_Tunnel_Text_BraxtonOutro
# 42 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	msgbox BravefortTown_Sewers_Tunnel_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_Tunnel_EventScript_Edgar::
# 60 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, BravefortTown_Sewers_Tunnel_Text_EdgarIntro, BravefortTown_Sewers_Tunnel_Text_EdgarOutro
# 61 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	msgbox BravefortTown_Sewers_Tunnel_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_Tunnel_EventScript_Leroy::
# 79 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_LEROY, BravefortTown_Sewers_Tunnel_Text_LeroyIntro, BravefortTown_Sewers_Tunnel_Text_LeroyOutro, BravefortTown_Sewers_Tunnel_EventScript_LeroyArrested
	end


BravefortTown_Sewers_Tunnel_EventScript_LeroyArrested::
# 101 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	lock
# 102 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	msgbox BravefortTown_Sewers_Tunnel_EventScript_LeroyArrested_Text_0
# 103 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	closemessage
# 104 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 3
# 105 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	removeobject 1
# 107 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	removeobject 2
# 108 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	removeobject 3
# 109 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	removeobject 4
# 110 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 111 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	release
	return


BravefortTown_Sewers_Tunnel_EventScript_LeroyArrested_Text_0:
# 102 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You have stopped us for now, but there\n"
	.string "are others who will rise in our place.\l"
	.string "This isn't over.$"

BravefortTown_Sewers_Tunnel_Text_VincentIntro::
# 28 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "I'm stronger than the last guy!$"

BravefortTown_Sewers_Tunnel_Text_VincentOutro::
# 32 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "Not strong enough, I guess.$"

BravefortTown_Sewers_Tunnel_Text_VincentPostBattle::
# 36 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "Don't get any ideas just because you\n"
	.string "beat me.$"

BravefortTown_Sewers_Tunnel_Text_BraxtonIntro::
# 47 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You'll never stop us!$"

BravefortTown_Sewers_Tunnel_Text_BraxtonOutro::
# 51 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You're too late.$"

BravefortTown_Sewers_Tunnel_Text_BraxtonPostBattle::
# 55 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You may have been able to beat me, but\n"
	.string "Leroy is unstoppable.$"

BravefortTown_Sewers_Tunnel_Text_EdgarIntro::
# 66 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You think you can get past me? Think\n"
	.string "again!$"

BravefortTown_Sewers_Tunnel_Text_EdgarOutro::
# 70 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You're pretty strong, kid.$"

BravefortTown_Sewers_Tunnel_Text_EdgarPostBattle::
# 74 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "We'll make the owners of the towers pay\n"
	.string "for what they did.$"

BravefortTown_Sewers_Tunnel_Text_LeroyIntro::
# 83 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You're strong, kid, I'll give you that.\p"
	.string "The Venom Locust's goal has been to\n"
	.string "destroy the towers built on the remains\l"
	.string "of the fort that once stood strong\l"
	.string "above us.\p"
	.string "The owners of these towers polluted\n"
	.string "our waters, destroyed a historical\l"
	.string "landmark, and ruined the spectacle of\l"
	.string "our town.\p"
	.string "We thought we were going to need the\n"
	.string "rare Pokémon in the Egg in order to\l"
	.string "accomplish our goals, but I found a\l"
	.string "different one...\p"
	.string "...one much stronger and more capable.\p"
	.string "So now, once I defeat you, I will unleash\n"
	.string "my poison Pokémon to fill the towers\l"
	.string "with noxious gases until the residents\l"
	.string "are forced to leave, and the owners will\l"
	.string "be forced to bankruptcy!\p"
	.string "...\p"
	.string "You still wish to stand against us?\p"
	.string "...\p"
	.string "Fine, then show me how strong your\n"
	.string "resolve is!$"

BravefortTown_Sewers_Tunnel_Text_LeroyOutro::
# 96 "data/maps/BravefortTown_Sewers_Tunnel/scripts.pory"
	.string "You may have won this battle, but you\n"
	.string "won't win the war.$"
