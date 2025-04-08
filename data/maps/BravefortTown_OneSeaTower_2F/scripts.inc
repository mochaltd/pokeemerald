BravefortTown_OneSeaTower_2F_MapScripts::
	.byte 0


BravefortTown_OneSeaTower_2F_EventScript_Sign::
# 6 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	msgbox BravefortTown_OneSeaTower_2F_EventScript_Sign_Text_0
# 8 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	closemessage
# 9 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_2F_EventScript_LittleGirl::
# 13 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	lock
# 14 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Movement_0
# 15 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	waitmovement 1
# 16 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	msgbox BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Text_0
# 17 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Movement_1
# 18 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	waitmovement 1
# 19 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	closemessage
# 20 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	release
	return


# 14 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Movement_0:
# 14 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	face_player
	step_end

# 17 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Movement_1:
# 17 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	face_original_direction
	step_end

BravefortTown_OneSeaTower_2F_EventScript_Sign_Text_0:
# 7 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	.string "{UP_ARROW} 3rd Floor$"

BravefortTown_OneSeaTower_2F_EventScript_LittleGirl_Text_0:
# 16 "data/maps/BravefortTown_OneSeaTower_2F/scripts.pory"
	.string "I love running up and down the hallway!$"
