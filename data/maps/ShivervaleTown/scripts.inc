ShivervaleTown_MapScripts::
# 2 "data/maps/ShivervaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShivervaleTown_OnTransition
	.byte 0


ShivervaleTown_OnTransition::
# 6 "data/maps/ShivervaleTown/scripts.pory"
	setflag FLAG_VISITED_SHIVERVALE_TOWN
# 7 "data/maps/ShivervaleTown/scripts.pory"
	call_if_set FLAG_RECEIVED_STARTER_POTIONS, ShivervaleTown_EventScript_SetupRivalBattle
	end


ShivervaleTown_TempleSign::
# 12 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 13 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_TempleSign_Text_0
# 15 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_TownSign::
# 19 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 20 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_TownSign_Text_0
# 22 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_Mom::
# 26 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 27 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 3, ShivervaleTown_Mom_Movement_0
# 28 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 3
# 29 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_Mom_Text_0
# 31 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 3, ShivervaleTown_Mom_Movement_1
# 32 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 3
# 33 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_Boy::
# 37 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 38 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 1, ShivervaleTown_Mom_Movement_0
# 39 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 1
# 40 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_Boy_Text_0
# 41 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 1, ShivervaleTown_Mom_Movement_1
# 42 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 1
# 43 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_Girl::
# 47 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 48 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 2, ShivervaleTown_Mom_Movement_0
# 49 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 2
# 50 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_Girl_Text_0
# 51 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 2, ShivervaleTown_Mom_Movement_1
# 52 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 2
# 53 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_PC::
# 57 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 58 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 4, ShivervaleTown_Mom_Movement_0
# 59 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 4
# 60 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_PC_Text_0
# 61 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 4, ShivervaleTown_Mom_Movement_1
# 62 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 4
# 63 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


ShivervaleTown_EventScript_SetupRivalBattle::
# 67 "data/maps/ShivervaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_THIEF, ShivervaleTown_EventScript_SetupRivalBattle_1
# 70 "data/maps/ShivervaleTown/scripts.pory"
	compare VAR_SHIVERVALE_TOWN_STATE, 4
	goto_if_eq ShivervaleTown_EventScript_SetupRivalBattle_2
# 74 "data/maps/ShivervaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_THIEF, ShivervaleTown_EventScript_SetupRivalBattle_6
	return

ShivervaleTown_EventScript_SetupRivalBattle_1:
# 68 "data/maps/ShivervaleTown/scripts.pory"
	setflag FLAG_SHIVERVALE_RIVALBATTLE
	return

ShivervaleTown_EventScript_SetupRivalBattle_2:
# 71 "data/maps/ShivervaleTown/scripts.pory"
	setflag FLAG_SHIVERVALE_RIVALBATTLE
	return

ShivervaleTown_EventScript_SetupRivalBattle_6:
# 75 "data/maps/ShivervaleTown/scripts.pory"
	clearflag FLAG_SHIVERVALE_RIVALBATTLE
	return


ShivervaleTown_EventScript_RivalBattle::
# 81 "data/maps/ShivervaleTown/scripts.pory"
	trainerbattle_single TRAINER_SILVER_SHIVERVALE, ShivervaleTown_Text_RivalIntro, ShivervaleTown_Text_RivalOutro, ShivervaleTown_EventScript_RivalDefeated
# 82 "data/maps/ShivervaleTown/scripts.pory"
	release
	end


ShivervaleTown_EventScript_RivalDefeated::
# 96 "data/maps/ShivervaleTown/scripts.pory"
	lock
# 97 "data/maps/ShivervaleTown/scripts.pory"
	msgbox ShivervaleTown_EventScript_RivalDefeated_Text_0
# 101 "data/maps/ShivervaleTown/scripts.pory"
	closemessage
# 102 "data/maps/ShivervaleTown/scripts.pory"
	applymovement 5, RivalLeave
# 103 "data/maps/ShivervaleTown/scripts.pory"
	waitmovement 5
# 104 "data/maps/ShivervaleTown/scripts.pory"
	removeobject 5
# 105 "data/maps/ShivervaleTown/scripts.pory"
	setflag FLAG_SHIVERVALE_RIVALBATTLE
# 106 "data/maps/ShivervaleTown/scripts.pory"
	setvar VAR_SHIVERVALE_TOWN_STATE, 4
# 107 "data/maps/ShivervaleTown/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 0
# 108 "data/maps/ShivervaleTown/scripts.pory"
	release
	return


# 111 "data/maps/ShivervaleTown/scripts.pory"
RivalLeave:
# 112 "data/maps/ShivervaleTown/scripts.pory"
	face_down
# 113 "data/maps/ShivervaleTown/scripts.pory"
	walk_down
# 113 "data/maps/ShivervaleTown/scripts.pory"
	walk_down
# 113 "data/maps/ShivervaleTown/scripts.pory"
	walk_down
# 113 "data/maps/ShivervaleTown/scripts.pory"
	walk_down
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
# 114 "data/maps/ShivervaleTown/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/ShivervaleTown/scripts.pory"
ShivervaleTown_Mom_Movement_0:
# 27 "data/maps/ShivervaleTown/scripts.pory"
	face_player
	step_end

# 31 "data/maps/ShivervaleTown/scripts.pory"
ShivervaleTown_Mom_Movement_1:
# 31 "data/maps/ShivervaleTown/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_TempleSign_Text_0:
# 13 "data/maps/ShivervaleTown/scripts.pory"
	.string "{UP_ARROW} Shivervale Temple\p"
	.string "In honor of Selene, the Leader of\n"
	.string "Darkness.$"

ShivervaleTown_TownSign_Text_0:
# 20 "data/maps/ShivervaleTown/scripts.pory"
	.string "Shivervale Town\p"
	.string "A charming destination.$"

ShivervaleTown_Mom_Text_0:
# 29 "data/maps/ShivervaleTown/scripts.pory"
	.string "This park area is nice to let my kids run\n"
	.string "around in and burn off some energy.\p"
	.string "They can be a hassle if they're inside\n"
	.string "all day.$"

ShivervaleTown_Boy_Text_0:
# 40 "data/maps/ShivervaleTown/scripts.pory"
	.string "Weeeeee!!$"

ShivervaleTown_Girl_Text_0:
# 50 "data/maps/ShivervaleTown/scripts.pory"
	.string "Waaaaahhhh!!$"

ShivervaleTown_PC_Text_0:
# 60 "data/maps/ShivervaleTown/scripts.pory"
	.string "If you use a PC, you can store items and\n"
	.string "Pokémon. The power of science is\l"
	.string "staggering!$"

ShivervaleTown_EventScript_RivalDefeated_Text_0:
# 97 "data/maps/ShivervaleTown/scripts.pory"
	.string "You got lucky this time but don't\n"
	.string "expect that to happen again.\p"
	.string "The name's Kade, and I will be the one to\n"
	.string "claim the power from the League of\l"
	.string "Eight, not you.\p"
	.string "I will show this world what it truly\n"
	.string "means to be strong.\p"
	.string "Stay out of my way.$"

ShivervaleTown_Text_RivalIntro::
# 86 "data/maps/ShivervaleTown/scripts.pory"
	.string "I don't know how you found out about\n"
	.string "the trials but that power is mine and\l"
	.string "mine alone. You would be wise to not\l"
	.string "interfere.$"

ShivervaleTown_Text_RivalOutro::
# 90 "data/maps/ShivervaleTown/scripts.pory"
	.string "Hmph. This means nothing.$"
