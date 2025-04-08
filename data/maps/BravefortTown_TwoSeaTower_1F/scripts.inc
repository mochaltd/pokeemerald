BravefortTown_TwoSeaTower_1F_MapScripts::
	.byte 0


BravefortTown_TwoSeaTower_1F_EventScript_Puking::
# 6 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	applymovement 1, BravefortTown_TwoSeaTower_1F_EventScript_Puking_Movement_0
# 8 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	waitmovement 1
# 9 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_1F_EventScript_Puking_Text_0
# 11 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	closemessage
# 12 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
BravefortTown_TwoSeaTower_1F_EventScript_Puking_Movement_0:
# 7 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	face_player
	step_end

BravefortTown_TwoSeaTower_1F_EventScript_Puking_Text_0:
# 9 "data/maps/BravefortTown_TwoSeaTower_1F/scripts.pory"
	.string "Some poor guy in there has been sick all\n"
	.string "morning.\p"
	.string "I'm not looking forward to cleaning\n"
	.string "that up...$"
