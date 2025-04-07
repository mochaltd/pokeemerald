BravefortTown_OneSeaTower_Lobby_MapScripts::
	.byte 0


BravefortTown_OneSeaTower_Lobby_EventScript_OneSea::
# 6 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_0
# 8 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 1
# 9 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Text_0
# 11 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	closemessage
# 12 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_1
# 13 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 1
# 14 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Lobby_EventScript_Receptionist::
# 18 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	lock
# 19 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 2, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_0
# 20 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 2
# 21 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Lobby_EventScript_Receptionist_Text_0
# 23 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	closemessage
# 24 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 2, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_1
# 25 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 2
# 26 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Lobby_EventScript_RichBoy::
# 30 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	lock
# 31 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 3, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_0
# 32 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 3
# 33 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Lobby_EventScript_RichBoy_Text_0
# 35 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	closemessage
# 36 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	applymovement 3, BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_1
# 37 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	waitmovement 3
# 38 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_0:
# 7 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	face_player
	step_end

# 12 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Movement_1:
# 12 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	face_original_direction
	step_end

BravefortTown_OneSeaTower_Lobby_EventScript_OneSea_Text_0:
# 9 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	.string "Do you need assistance?\p"
	.string "Oh, you don't live here, never mind.\n"
	.string "Enjoy your visit to One Sea Tower.$"

BravefortTown_OneSeaTower_Lobby_EventScript_Receptionist_Text_0:
# 21 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	.string "Do you know someone who lives here,\n"
	.string "child?\p"
	.string "Please don't cause too much ruckus.$"

BravefortTown_OneSeaTower_Lobby_EventScript_RichBoy_Text_0:
# 33 "data/maps/BravefortTown_OneSeaTower_Lobby/scripts.pory"
	.string "They told me my apartment would be\n"
	.string "ready by the time I arrived, but the\l"
	.string "door was locked.\p"
	.string "This is outrageous!$"
