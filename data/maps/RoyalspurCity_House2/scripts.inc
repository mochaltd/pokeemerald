RoyalspurCity_House2_MapScripts::
	.byte 0


RoyalspurCity_House2_EventScript_Woman::
# 6 "data/maps/RoyalspurCity_House2/scripts.pory"
	lock
# 7 "data/maps/RoyalspurCity_House2/scripts.pory"
	applymovement 1, RoyalspurCity_House2_EventScript_Woman_Movement_0
# 8 "data/maps/RoyalspurCity_House2/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurCity_House2/scripts.pory"
	msgbox RoyalspurCity_House2_EventScript_Woman_Text_0
# 10 "data/maps/RoyalspurCity_House2/scripts.pory"
	closemessage
# 11 "data/maps/RoyalspurCity_House2/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurCity_House2/scripts.pory"
RoyalspurCity_House2_EventScript_Woman_Movement_0:
# 7 "data/maps/RoyalspurCity_House2/scripts.pory"
	face_player
	step_end

RoyalspurCity_House2_EventScript_Woman_Text_0:
# 9 "data/maps/RoyalspurCity_House2/scripts.pory"
	.string "The mountain air feels so nice in\n"
	.string "Royalspur, but if I ever need to travel\l"
	.string "to Bravefort Town, it can be a really\l"
	.string "long journey.$"
