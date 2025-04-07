RoyalspurCity_MayorHouse_1F_MapScripts::
	.byte 0


RoyalspurCity_MayorHouse_1F_EventScript_Husband::
# 6 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	lock
# 7 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 1, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_0
# 8 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	msgbox RoyalspurCity_MayorHouse_1F_EventScript_Husband_Text_0
# 10 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 1, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_1
# 11 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 1
# 12 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	closemessage
# 13 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	release
	return


RoyalspurCity_MayorHouse_1F_EventScript_Boy::
# 17 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	lock
# 18 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 2, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_0
# 19 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 2
# 20 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	msgbox RoyalspurCity_MayorHouse_1F_EventScript_Boy_Text_0
# 21 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 2, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_1
# 22 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 2
# 23 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	closemessage
# 24 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	release
	return


RoyalspurCity_MayorHouse_1F_EventScript_Girl::
# 28 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	lock
# 29 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 5, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_0
# 30 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 5
# 31 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	msgbox RoyalspurCity_MayorHouse_1F_EventScript_Girl_Text_0
# 32 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	applymovement 5, RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_1
# 33 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	waitmovement 5
# 34 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_0:
# 7 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	face_player
	step_end

# 10 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
RoyalspurCity_MayorHouse_1F_EventScript_Husband_Movement_1:
# 10 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_MayorHouse_1F_EventScript_Husband_Text_0:
# 9 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	.string "Oh, are you looking for my wife? She's\n"
	.string "working upstairs.$"

RoyalspurCity_MayorHouse_1F_EventScript_Boy_Text_0:
# 20 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	.string "Mom has to work a lot, being the mayor\n"
	.string "and all. But she's always there for the\l"
	.string "big moments.$"

RoyalspurCity_MayorHouse_1F_EventScript_Girl_Text_0:
# 31 "data/maps/RoyalspurCity_MayorHouse_1F/scripts.pory"
	.string "I love my Pokémon dolls!$"
