DistortedPath_MapScripts::
# 2 "data/maps/DistortedPath/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DistortedPath_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DistortedPath_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/DistortedPath/scripts.pory"
	map_script_2 VAR_ELDEROOT_TOWN_STATE, 4, NewPlace
	.2byte 0


NewPlace::
# 8 "data/maps/DistortedPath/scripts.pory"
	lock
# 9 "data/maps/DistortedPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewPlace_Movement_0
# 10 "data/maps/DistortedPath/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/DistortedPath/scripts.pory"
	msgbox NewPlace_Text_0
# 13 "data/maps/DistortedPath/scripts.pory"
	closemessage
# 14 "data/maps/DistortedPath/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 5
# 15 "data/maps/DistortedPath/scripts.pory"
	release
	return


DistortedPath_EventScripts_PathClosed::
# 19 "data/maps/DistortedPath/scripts.pory"
	lock
# 20 "data/maps/DistortedPath/scripts.pory"
	msgbox DistortedPath_EventScripts_PathClosed_Text_0
# 22 "data/maps/DistortedPath/scripts.pory"
	closemessage
# 23 "data/maps/DistortedPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DistortedPath_EventScripts_PathClosed_Movement_0
# 24 "data/maps/DistortedPath/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 25 "data/maps/DistortedPath/scripts.pory"
	release
	return


# 9 "data/maps/DistortedPath/scripts.pory"
NewPlace_Movement_0:
# 9 "data/maps/DistortedPath/scripts.pory"
	walk_up
# 9 "data/maps/DistortedPath/scripts.pory"
	walk_up
# 9 "data/maps/DistortedPath/scripts.pory"
	walk_up
# 9 "data/maps/DistortedPath/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/DistortedPath/scripts.pory"
DistortedPath_EventScripts_PathClosed_Movement_0:
# 23 "data/maps/DistortedPath/scripts.pory"
	walk_up
	step_end

NewPlace_Text_0:
# 11 "data/maps/DistortedPath/scripts.pory"
	.string "What is this place? It doesn't even feel\n"
	.string "real...\p"
	.string "It looks like there might be another\n"
	.string "path ahead.$"

DistortedPath_EventScripts_PathClosed_Text_0:
# 20 "data/maps/DistortedPath/scripts.pory"
	.string "Looks like the path is closed...\p"
	.string "I guess I have no choice but to keep\n"
	.string "going.$"
