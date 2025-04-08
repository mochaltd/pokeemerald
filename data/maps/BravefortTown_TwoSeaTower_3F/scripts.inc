BravefortTown_TwoSeaTower_3F_MapScripts::
	.byte 0


BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom::
# 6 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	applymovement 1, BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Movement_0
# 8 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	waitmovement 1
# 9 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Text_0
# 11 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	applymovement 1, BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Movement_1
# 12 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	waitmovement 1
# 13 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	closemessage
# 14 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Movement_0:
# 7 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	face_player
	step_end

# 11 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Movement_1:
# 11 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	face_original_direction
	step_end

BravefortTown_TwoSeaTower_3F_EventScript_InMyRoom_Text_0:
# 9 "data/maps/BravefortTown_TwoSeaTower_3F/scripts.pory"
	.string "I think there's someone in my room...\p"
	.string "I will not stand for this!$"
