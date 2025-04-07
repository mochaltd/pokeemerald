EvergreenForest_MapScripts::
	.byte 0


EvergreenForest_EventScript_Shrine1::
# 6 "data/maps/EvergeenForest/scripts.pory"
	lock
# 7 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 8 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 9 "data/maps/EvergeenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine1_Movement_0
# 10 "data/maps/EvergeenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/EvergeenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 12 "data/maps/EvergeenForest/scripts.pory"
	waitmovement 2
# 13 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 14 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 15 "data/maps/EvergeenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 16 "data/maps/EvergeenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine2::
# 20 "data/maps/EvergeenForest/scripts.pory"
	lock
# 21 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 22 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 23 "data/maps/EvergeenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine2_Movement_0
# 24 "data/maps/EvergeenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 25 "data/maps/EvergeenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 26 "data/maps/EvergeenForest/scripts.pory"
	waitmovement 2
# 27 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 28 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 29 "data/maps/EvergeenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 30 "data/maps/EvergeenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine3::
# 34 "data/maps/EvergeenForest/scripts.pory"
	lock
# 35 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 36 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 37 "data/maps/EvergeenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine3_Movement_0
# 38 "data/maps/EvergeenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 39 "data/maps/EvergeenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 40 "data/maps/EvergeenForest/scripts.pory"
	waitmovement 2
# 41 "data/maps/EvergeenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 42 "data/maps/EvergeenForest/scripts.pory"
	closemessage
# 43 "data/maps/EvergeenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 44 "data/maps/EvergeenForest/scripts.pory"
	release
	return


# 9 "data/maps/EvergeenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_0:
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 9 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
	step_end

# 11 "data/maps/EvergeenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_1:
# 11 "data/maps/EvergeenForest/scripts.pory"
	face_up
	step_end

# 23 "data/maps/EvergeenForest/scripts.pory"
EvergreenForest_EventScript_Shrine2_Movement_0:
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 23 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
	step_end

# 37 "data/maps/EvergeenForest/scripts.pory"
EvergreenForest_EventScript_Shrine3_Movement_0:
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_left
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
# 37 "data/maps/EvergeenForest/scripts.pory"
	walk_fast_down
	step_end

EvergreenForest_EventScript_Shrine1_Text_0:
# 7 "data/maps/EvergeenForest/scripts.pory"
	.string "Someone please help!$"

EvergreenForest_EventScript_Shrine1_Text_1:
# 13 "data/maps/EvergeenForest/scripts.pory"
	.string "Help! Those strange men came into the\n"
	.string "forest and are defacing the forest\l"
	.string "shrine. You have to do something!$"
