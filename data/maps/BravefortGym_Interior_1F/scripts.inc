BravefortGym_Interior_1F_MapScripts::
# 2 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BravefortGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BravefortGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 5
	goto_if_ge BravefortGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BravefortGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	setmaplayoutindex LAYOUT_BRAVEFORT_GYM_INTERIOR_1F_POST_BATTLE
	return


BravefortGym_Interior_1F_EventScript_LeonardTrigger::
# 10 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 11 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 2, BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0
# 12 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 2
# 13 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	goto BravefortGym_Interior_1F_EventScript_Leonard
# 14 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


BravefortGym_Interior_1F_EventScript_Leonard::
# 18 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, BravefortGym_Interior_1F_Text_LeonardIntro, BravefortGym_Interior_1F_Text_LeonardOutro, BravefortGym_Interior_1F_EventScript_LeonardDefeated
# 19 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_Interior_1F_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmessage
	end


BravefortGym_Interior_1F_EventScript_LeonardDefeated::
# 36 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 37 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_Interior_1F_EventScript_LeonardDefeated_Text_0
# 42 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	closemessage
# 43 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 5
# 44 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	setmetatile 7, 3, 0x232, FALSE
# 46 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	setmetatile 7, 2, 0x237, FALSE
# 47 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	playse SE_DOOR
# 48 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


BravefortGym_Interior_1F_EventScript_Sailor::
# 58 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 59 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 1, BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0
# 60 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 1
# 61 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_Interior_1F_EventScript_Sailor_Text_0
# 62 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 1, BravefortGym_Interior_1F_EventScript_Sailor_Movement_0
# 63 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 1
# 64 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	closemessage
# 65 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


BravefortGym_Interior_1F_EventScript_OldWoman::
# 69 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 70 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 3, BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0
# 71 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 3
# 72 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_Interior_1F_EventScript_OldWoman_Text_0
# 73 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 3, BravefortGym_Interior_1F_EventScript_Sailor_Movement_0
# 74 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 3
# 75 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	closemessage
# 76 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


BravefortGym_MartEmployee::
# 80 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	call_if_unset FLAG_BRAVEFORT_GYM_FRESH_WATER, BravefortGym_MartEmployee_FreshWater
# 81 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	call_if_set FLAG_BRAVEFORT_GYM_FRESH_WATER, BravefortGym_MartEmployee_Enjoy
	return


BravefortGym_MartEmployee_FreshWater::
# 85 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 86 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 4, BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0
# 87 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 4
# 88 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_MartEmployee_FreshWater_Text_0
# 89 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	closemessage
# 90 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 91 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	setflag FLAG_BRAVEFORT_GYM_FRESH_WATER
# 92 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


BravefortGym_MartEmployee_Enjoy::
# 96 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	lock
# 97 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	applymovement 4, BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0
# 98 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	waitmovement 4
# 99 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	msgbox BravefortGym_MartEmployee_Enjoy_Text_0
# 100 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	closemessage
# 101 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	release
	return


# 11 "data/maps/BravefortGym_Interior_1F/scripts.pory"
BravefortGym_Interior_1F_EventScript_LeonardTrigger_Movement_0:
# 11 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	face_player
	step_end

# 62 "data/maps/BravefortGym_Interior_1F/scripts.pory"
BravefortGym_Interior_1F_EventScript_Sailor_Movement_0:
# 62 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	face_original_direction
	step_end

BravefortGym_Interior_1F_EventScript_LeonardDefeated_Text_0:
# 37 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "Wow, what a great battle!\p"
	.string "...\p"
	.string "Huh?...\p"
	.string "Oh, right! Ahem...\p"
	.string "As the future protector of this temple,\n"
	.string "I give you my blessing to challenge\l"
	.string "Captain Barlow. Enter the door behind\l"
	.string "me, and stay strong in the face of the\l"
	.string "storm.$"

BravefortGym_Interior_1F_EventScript_Sailor_Text_0:
# 61 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "This is a table of remembrance for\n"
	.string "sailors that have been lost to the sea.$"

BravefortGym_Interior_1F_EventScript_OldWoman_Text_0:
# 72 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "So young and full of life. Never lose\n"
	.string "that spark of youth.$"

BravefortGym_MartEmployee_FreshWater_Text_0:
# 88 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "Have a refreshment and enjoy your time\n"
	.string "in the temple.$"

BravefortGym_MartEmployee_Enjoy_Text_0:
# 99 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "Enjoy your time in the temple.$"

BravefortGym_Interior_1F_Text_LeonardIntro::
# 24 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "Oh...\p"
	.string "Uhh...I didn't know I was supposed to\n"
	.string "battle anyone.\p"
	.string "I was just keeping an eye on things for\n"
	.string "my father. But no matter!\p"
	.string "My father has taught me well in the\n"
	.string "ways of battling and in honor of\l"
	.string "Captain Barlow, I will be a worthy\l"
	.string "competitor!$"

BravefortGym_Interior_1F_Text_LeonardOutro::
# 31 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "You battle with the strength of the\n"
	.string "sea.$"

BravefortGym_Interior_1F_Text_LeonardPostBattle::
# 53 "data/maps/BravefortGym_Interior_1F/scripts.pory"
	.string "Stay strong in the face of the storm.$"
