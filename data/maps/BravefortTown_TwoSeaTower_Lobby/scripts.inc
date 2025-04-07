BravefortTown_TwoSeaTower_Lobby_MapScripts::
	.byte 0


BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea::
# 6 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 1, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_0
# 8 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 1
# 9 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Text_0
# 10 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	closemessage
# 11 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 1, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_1
# 12 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 1
# 13 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Lobby_EventScript_Receptionist::
# 17 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	lock
# 18 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 2, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_0
# 19 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 2
# 20 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Lobby_EventScript_Receptionist_Text_0
# 21 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	closemessage
# 22 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 2, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_1
# 23 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 2
# 24 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Lobby_EventScript_Woman::
# 28 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	lock
# 29 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 3, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_0
# 30 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 3
# 31 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Lobby_EventScript_Woman_Text_0
# 32 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	closemessage
# 33 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	applymovement 3, BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_1
# 34 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	waitmovement 3
# 35 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_0:
# 7 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	face_player
	step_end

# 11 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Movement_1:
# 11 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	face_original_direction
	step_end

BravefortTown_TwoSeaTower_Lobby_EventScript_TwoSea_Text_0:
# 9 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	.string "Please enjoy your visit to Two Sea\n"
	.string "Tower!$"

BravefortTown_TwoSeaTower_Lobby_EventScript_Receptionist_Text_0:
# 20 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	.string "People in Two Sea Tower love to battle\n"
	.string "in our state of the art battle-tested\l"
	.string "rooms!$"

BravefortTown_TwoSeaTower_Lobby_EventScript_Woman_Text_0:
# 31 "data/maps/BravefortTown_TwoSeaTower_Lobby/scripts.pory"
	.string "The employees here are much nicer than\n"
	.string "the ones at One Sea Tower.$"
