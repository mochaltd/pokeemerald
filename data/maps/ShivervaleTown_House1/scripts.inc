ShivervaleTown_House1_MapScripts::
	.byte 0


ShivervaleTown_House1_EventScript_Husband::
# 6 "data/maps/ShivervaleTown_House1/scripts.pory"
	lock
# 7 "data/maps/ShivervaleTown_House1/scripts.pory"
	applymovement 1, ShivervaleTown_House1_EventScript_Husband_Movement_0
# 8 "data/maps/ShivervaleTown_House1/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShivervaleTown_House1/scripts.pory"
	msgbox ShivervaleTown_House1_EventScript_Husband_Text_0
# 11 "data/maps/ShivervaleTown_House1/scripts.pory"
	applymovement 1, ShivervaleTown_House1_EventScript_Husband_Movement_1
# 12 "data/maps/ShivervaleTown_House1/scripts.pory"
	waitmovement 1
# 13 "data/maps/ShivervaleTown_House1/scripts.pory"
	release
	return


# 7 "data/maps/ShivervaleTown_House1/scripts.pory"
ShivervaleTown_House1_EventScript_Husband_Movement_0:
# 7 "data/maps/ShivervaleTown_House1/scripts.pory"
	face_player
	step_end

# 11 "data/maps/ShivervaleTown_House1/scripts.pory"
ShivervaleTown_House1_EventScript_Husband_Movement_1:
# 11 "data/maps/ShivervaleTown_House1/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_House1_EventScript_Husband_Text_0:
# 9 "data/maps/ShivervaleTown_House1/scripts.pory"
	.string "My wife took the kids out to the park so\n"
	.string "I'm making sure she has a clean house to\l"
	.string "come back to. The kids always leave\l"
	.string "their toys out...$"
