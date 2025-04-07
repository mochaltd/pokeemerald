RoyalspurCity_House3_MapScripts::
	.byte 0


RoyalspurCity_House3_EventScript_Boy::
# 6 "data/maps/RoyalspurCity_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROAR, GiveRoar
# 7 "data/maps/RoyalspurCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, NotScared
	return


GiveRoar::
# 11 "data/maps/RoyalspurCity_House3/scripts.pory"
	lock
# 12 "data/maps/RoyalspurCity_House3/scripts.pory"
	applymovement 1, GiveRoar_Movement_0
# 13 "data/maps/RoyalspurCity_House3/scripts.pory"
	waitmovement 1
# 14 "data/maps/RoyalspurCity_House3/scripts.pory"
	msgbox GiveRoar_Text_0
# 18 "data/maps/RoyalspurCity_House3/scripts.pory"
	closemessage
# 19 "data/maps/RoyalspurCity_House3/scripts.pory"
	giveitem ITEM_TM05
# 20 "data/maps/RoyalspurCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 21 "data/maps/RoyalspurCity_House3/scripts.pory"
	release
	return


NotScared::
# 25 "data/maps/RoyalspurCity_House3/scripts.pory"
	lock
# 26 "data/maps/RoyalspurCity_House3/scripts.pory"
	applymovement 1, GiveRoar_Movement_0
# 27 "data/maps/RoyalspurCity_House3/scripts.pory"
	waitmovement 1
# 28 "data/maps/RoyalspurCity_House3/scripts.pory"
	msgbox NotScared_Text_0
# 29 "data/maps/RoyalspurCity_House3/scripts.pory"
	closemessage
# 30 "data/maps/RoyalspurCity_House3/scripts.pory"
	release
	return


RoyalspurCity_House3_EventScript_Mom::
# 34 "data/maps/RoyalspurCity_House3/scripts.pory"
	lock
# 35 "data/maps/RoyalspurCity_House3/scripts.pory"
	applymovement 2, GiveRoar_Movement_0
# 36 "data/maps/RoyalspurCity_House3/scripts.pory"
	waitmovement 2
# 37 "data/maps/RoyalspurCity_House3/scripts.pory"
	msgbox RoyalspurCity_House3_EventScript_Mom_Text_0
# 38 "data/maps/RoyalspurCity_House3/scripts.pory"
	closemessage
# 39 "data/maps/RoyalspurCity_House3/scripts.pory"
	applymovement 2, RoyalspurCity_House3_EventScript_Mom_Movement_0
# 40 "data/maps/RoyalspurCity_House3/scripts.pory"
	waitmovement 2
# 41 "data/maps/RoyalspurCity_House3/scripts.pory"
	release
	return


# 12 "data/maps/RoyalspurCity_House3/scripts.pory"
GiveRoar_Movement_0:
# 12 "data/maps/RoyalspurCity_House3/scripts.pory"
	face_player
	step_end

# 39 "data/maps/RoyalspurCity_House3/scripts.pory"
RoyalspurCity_House3_EventScript_Mom_Movement_0:
# 39 "data/maps/RoyalspurCity_House3/scripts.pory"
	face_original_direction
	step_end

GiveRoar_Text_0:
# 14 "data/maps/RoyalspurCity_House3/scripts.pory"
	.string "ROOOAARRRR!\p"
	.string "Did I scare you?\p"
	.string "...\p"
	.string "Oh...well here, I guess you can have this\n"
	.string "anyways.$"

NotScared_Text_0:
# 28 "data/maps/RoyalspurCity_House3/scripts.pory"
	.string "You weren't even scared. You're tough!$"

RoyalspurCity_House3_EventScript_Mom_Text_0:
# 37 "data/maps/RoyalspurCity_House3/scripts.pory"
	.string "My son is silly, he's always trying to\n"
	.string "scare people. I wish he would stop when\l"
	.string "I'm trying to clean though.$"
