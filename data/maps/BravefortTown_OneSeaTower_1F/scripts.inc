BravefortTown_OneSeaTower_1F_MapScripts::
	.byte 0


BravefortTown_OneSeaTower_1F_EventScript_Sign::
# 6 "data/maps/BravefortTown_OneSeaTower_1F/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_OneSeaTower_1F/scripts.pory"
	msgbox BravefortTown_OneSeaTower_1F_EventScript_Sign_Text_0
# 8 "data/maps/BravefortTown_OneSeaTower_1F/scripts.pory"
	closemessage
# 9 "data/maps/BravefortTown_OneSeaTower_1F/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_1F_EventScript_Sign_Text_0:
# 7 "data/maps/BravefortTown_OneSeaTower_1F/scripts.pory"
	.string "{UP_ARROW} 2nd Floor$"
