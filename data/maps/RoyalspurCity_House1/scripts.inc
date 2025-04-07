RoyalspurCity_House1_MapScripts::
	.byte 0


RoyalspurCity_House1_EventScript_Camper::
# 6 "data/maps/RoyalspurCity_House1/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_115_GREAT_BALL, GiveGreatBalls
# 7 "data/maps/RoyalspurCity_House1/scripts.pory"
	goto_if_set FLAG_ITEM_ROUTE_115_GREAT_BALL, EnjoyGreatBalls
	return


GiveGreatBalls::
# 11 "data/maps/RoyalspurCity_House1/scripts.pory"
	lock
# 12 "data/maps/RoyalspurCity_House1/scripts.pory"
	applymovement 1, GiveGreatBalls_Movement_0
# 13 "data/maps/RoyalspurCity_House1/scripts.pory"
	waitmovement 1
# 14 "data/maps/RoyalspurCity_House1/scripts.pory"
	msgbox GiveGreatBalls_Text_0
# 16 "data/maps/RoyalspurCity_House1/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 17 "data/maps/RoyalspurCity_House1/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_GREAT_BALL
# 18 "data/maps/RoyalspurCity_House1/scripts.pory"
	applymovement 1, GiveGreatBalls_Movement_1
# 19 "data/maps/RoyalspurCity_House1/scripts.pory"
	waitmovement 1
# 20 "data/maps/RoyalspurCity_House1/scripts.pory"
	closemessage
# 21 "data/maps/RoyalspurCity_House1/scripts.pory"
	release
	return


EnjoyGreatBalls::
# 25 "data/maps/RoyalspurCity_House1/scripts.pory"
	lock
# 26 "data/maps/RoyalspurCity_House1/scripts.pory"
	applymovement 1, GiveGreatBalls_Movement_0
# 27 "data/maps/RoyalspurCity_House1/scripts.pory"
	waitmovement 1
# 28 "data/maps/RoyalspurCity_House1/scripts.pory"
	msgbox EnjoyGreatBalls_Text_0
# 29 "data/maps/RoyalspurCity_House1/scripts.pory"
	closemessage
# 30 "data/maps/RoyalspurCity_House1/scripts.pory"
	applymovement 1, GiveGreatBalls_Movement_1
# 31 "data/maps/RoyalspurCity_House1/scripts.pory"
	waitmovement 1
# 32 "data/maps/RoyalspurCity_House1/scripts.pory"
	closemessage
# 33 "data/maps/RoyalspurCity_House1/scripts.pory"
	release
	return


# 12 "data/maps/RoyalspurCity_House1/scripts.pory"
GiveGreatBalls_Movement_0:
# 12 "data/maps/RoyalspurCity_House1/scripts.pory"
	face_player
	step_end

# 18 "data/maps/RoyalspurCity_House1/scripts.pory"
GiveGreatBalls_Movement_1:
# 18 "data/maps/RoyalspurCity_House1/scripts.pory"
	face_original_direction
	step_end

GiveGreatBalls_Text_0:
# 14 "data/maps/RoyalspurCity_House1/scripts.pory"
	.string "Pokémon technology has advanced\n"
	.string "really fast in recent years. You used to\l"
	.string "only be able to use standard Poké Balls,\l"
	.string "but now there's even better ones.\p"
	.string "Here, I'll share some with you!$"

EnjoyGreatBalls_Text_0:
# 28 "data/maps/RoyalspurCity_House1/scripts.pory"
	.string "Be sure to catch lots of Pokémon!$"
