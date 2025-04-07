RoyalspurCity_House4_MapScripts::
	.byte 0


RoyalspurCity_House4_EventScript_Boy::
# 6 "data/maps/RoyalspurCity_House4/scripts.pory"
	lock
# 7 "data/maps/RoyalspurCity_House4/scripts.pory"
	applymovement 1, RoyalspurCity_House4_EventScript_Boy_Movement_0
# 8 "data/maps/RoyalspurCity_House4/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurCity_House4/scripts.pory"
	msgbox RoyalspurCity_House4_EventScript_Boy_Text_0
# 10 "data/maps/RoyalspurCity_House4/scripts.pory"
	applymovement 1, RoyalspurCity_House4_EventScript_Boy_Movement_1
# 11 "data/maps/RoyalspurCity_House4/scripts.pory"
	waitmovement 1
# 12 "data/maps/RoyalspurCity_House4/scripts.pory"
	closemessage
# 13 "data/maps/RoyalspurCity_House4/scripts.pory"
	release
	return


RoyalspurCity_House4_EventScript_Girl::
# 17 "data/maps/RoyalspurCity_House4/scripts.pory"
	lock
# 18 "data/maps/RoyalspurCity_House4/scripts.pory"
	applymovement 2, RoyalspurCity_House4_EventScript_Boy_Movement_0
# 19 "data/maps/RoyalspurCity_House4/scripts.pory"
	waitmovement 2
# 20 "data/maps/RoyalspurCity_House4/scripts.pory"
	msgbox RoyalspurCity_House4_EventScript_Girl_Text_0
# 21 "data/maps/RoyalspurCity_House4/scripts.pory"
	applymovement 2, RoyalspurCity_House4_EventScript_Boy_Movement_1
# 22 "data/maps/RoyalspurCity_House4/scripts.pory"
	waitmovement 2
# 23 "data/maps/RoyalspurCity_House4/scripts.pory"
	closemessage
# 24 "data/maps/RoyalspurCity_House4/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurCity_House4/scripts.pory"
RoyalspurCity_House4_EventScript_Boy_Movement_0:
# 7 "data/maps/RoyalspurCity_House4/scripts.pory"
	face_player
	step_end

# 10 "data/maps/RoyalspurCity_House4/scripts.pory"
RoyalspurCity_House4_EventScript_Boy_Movement_1:
# 10 "data/maps/RoyalspurCity_House4/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_House4_EventScript_Boy_Text_0:
# 9 "data/maps/RoyalspurCity_House4/scripts.pory"
	.string "Every Pokémon has a unique ability that\n"
	.string "it can use.$"

RoyalspurCity_House4_EventScript_Girl_Text_0:
# 20 "data/maps/RoyalspurCity_House4/scripts.pory"
	.string "Pokémon are such strange creatures.$"
