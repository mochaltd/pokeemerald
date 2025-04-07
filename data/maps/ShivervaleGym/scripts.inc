ShivervaleGym_MapScripts::
# 2 "data/maps/ShivervaleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShivervaleGym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ShivervaleGym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ShivervaleGym/scripts.pory"
	compare VAR_SHIVERVALE_TOWN_STATE, 2
	goto_if_ge ShivervaleGym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ShivervaleGym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ShivervaleGym/scripts.pory"
	setmaplayoutindex LAYOUT_SHIVERVALE_GYM_POST_BATTLE
	return


ShivervaleGym_EventScript_Bill_Trigger::
# 10 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 11 "data/maps/ShivervaleGym/scripts.pory"
	applymovement 1, ShivervaleGym_EventScript_Bill_Trigger_Movement_0
# 12 "data/maps/ShivervaleGym/scripts.pory"
	waitmovement 1
# 13 "data/maps/ShivervaleGym/scripts.pory"
	goto Route2_EventScript_Bill
	return


Route2_EventScript_Bill::
# 17 "data/maps/ShivervaleGym/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_BILL_SHIVERVALEGYM, ShivervaleGym_Text_BillIntro, ShivervaleGym_Text_BillOutro, Shivervale_Gym_EventScript_BillDefeated
# 18 "data/maps/ShivervaleGym/scripts.pory"
	msgbox ShivervaleGym_Text_BillPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/ShivervaleGym/scripts.pory"
	waitmessage
	end


Shivervale_Gym_EventScript_BillDefeated::
# 38 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 39 "data/maps/ShivervaleGym/scripts.pory"
	msgbox Shivervale_Gym_EventScript_BillDefeated_Text_0
# 40 "data/maps/ShivervaleGym/scripts.pory"
	setflag FLAG_DEFEATED_BILL
# 41 "data/maps/ShivervaleGym/scripts.pory"
	setvar VAR_SHIVERVALE_TOWN_STATE, 2
# 42 "data/maps/ShivervaleGym/scripts.pory"
	closemessage
# 43 "data/maps/ShivervaleGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/ShivervaleGym/scripts.pory"
	setmetatile 7, 3, 0x232, FALSE
# 45 "data/maps/ShivervaleGym/scripts.pory"
	setmetatile 7, 2, 0x237, FALSE
# 46 "data/maps/ShivervaleGym/scripts.pory"
	playse SE_DOOR
# 47 "data/maps/ShivervaleGym/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/ShivervaleGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/ShivervaleGym/scripts.pory"
	release
	return


ShivervaleGym_EventScript_Girl3::
# 57 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 58 "data/maps/ShivervaleGym/scripts.pory"
	applymovement 2, ShivervaleGym_EventScript_Bill_Trigger_Movement_0
# 59 "data/maps/ShivervaleGym/scripts.pory"
	waitmovement 2
# 60 "data/maps/ShivervaleGym/scripts.pory"
	msgbox ShivervaleGym_EventScript_Girl3_Text_0
# 61 "data/maps/ShivervaleGym/scripts.pory"
	closemessage
# 62 "data/maps/ShivervaleGym/scripts.pory"
	release
	return


ShivervaleGym_EventScript_Boy2::
# 66 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 67 "data/maps/ShivervaleGym/scripts.pory"
	applymovement 3, ShivervaleGym_EventScript_Bill_Trigger_Movement_0
# 68 "data/maps/ShivervaleGym/scripts.pory"
	waitmovement 3
# 69 "data/maps/ShivervaleGym/scripts.pory"
	msgbox ShivervaleGym_EventScript_Boy2_Text_0
# 70 "data/maps/ShivervaleGym/scripts.pory"
	closemessage
# 71 "data/maps/ShivervaleGym/scripts.pory"
	release
	return


ShivervaleGym_MartEmployee::
# 75 "data/maps/ShivervaleGym/scripts.pory"
	call_if_unset FLAG_SHIVERVALE_GYM_FRESH_WATER, ShivervaleGym_MartEmployee_FreshWater
# 76 "data/maps/ShivervaleGym/scripts.pory"
	call_if_set FLAG_SHIVERVALE_GYM_FRESH_WATER, ShivervaleGym_MartEmployee_Enjoy
	return


ShivervaleGym_MartEmployee_FreshWater::
# 80 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 81 "data/maps/ShivervaleGym/scripts.pory"
	applymovement 4, ShivervaleGym_EventScript_Bill_Trigger_Movement_0
# 82 "data/maps/ShivervaleGym/scripts.pory"
	waitmovement 4
# 83 "data/maps/ShivervaleGym/scripts.pory"
	msgbox ShivervaleGym_MartEmployee_FreshWater_Text_0
# 84 "data/maps/ShivervaleGym/scripts.pory"
	closemessage
# 85 "data/maps/ShivervaleGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 86 "data/maps/ShivervaleGym/scripts.pory"
	setflag FLAG_SHIVERVALE_GYM_FRESH_WATER
# 87 "data/maps/ShivervaleGym/scripts.pory"
	release
	return


ShivervaleGym_MartEmployee_Enjoy::
# 91 "data/maps/ShivervaleGym/scripts.pory"
	lock
# 92 "data/maps/ShivervaleGym/scripts.pory"
	applymovement 4, ShivervaleGym_EventScript_Bill_Trigger_Movement_0
# 93 "data/maps/ShivervaleGym/scripts.pory"
	waitmovement 4
# 94 "data/maps/ShivervaleGym/scripts.pory"
	msgbox ShivervaleGym_MartEmployee_Enjoy_Text_0
# 95 "data/maps/ShivervaleGym/scripts.pory"
	closemessage
# 96 "data/maps/ShivervaleGym/scripts.pory"
	release
	return


# 11 "data/maps/ShivervaleGym/scripts.pory"
ShivervaleGym_EventScript_Bill_Trigger_Movement_0:
# 11 "data/maps/ShivervaleGym/scripts.pory"
	face_player
	step_end

Shivervale_Gym_EventScript_BillDefeated_Text_0:
# 39 "data/maps/ShivervaleGym/scripts.pory"
	.string "Please, go forth through these doors.\n"
	.string "Selene is waiting.$"

ShivervaleGym_EventScript_Girl3_Text_0:
# 60 "data/maps/ShivervaleGym/scripts.pory"
	.string "I like to come here when I need to\n"
	.string "refocus myself. Selene is a huge\l"
	.string "inspiration for me.$"

ShivervaleGym_EventScript_Boy2_Text_0:
# 69 "data/maps/ShivervaleGym/scripts.pory"
	.string "The gardens out back are so pretty.\n"
	.string "Sometimes it's just nice to sit here and\l"
	.string "relax.$"

ShivervaleGym_MartEmployee_FreshWater_Text_0:
# 83 "data/maps/ShivervaleGym/scripts.pory"
	.string "Have a refreshment and enjoy your time\n"
	.string "in the temple.$"

ShivervaleGym_MartEmployee_Enjoy_Text_0:
# 94 "data/maps/ShivervaleGym/scripts.pory"
	.string "Enjoy your time in the temple.$"

ShivervaleGym_Text_BillIntro::
# 23 "data/maps/ShivervaleGym/scripts.pory"
	.string "A second trainer wishes to begin the\n"
	.string "trials? How surprising.\p"
	.string "How were you made aware of the trials?\p"
	.string "...\n"
	.string "...\p"
	.string "I see.\p"
	.string "Well, in order to begin the trials, you\n"
	.string "must prove yourself first.\p"
	.string "My Pokémon and I may have been out of\n"
	.string "battle for a while, but we will not be so\l"
	.string "easily defeated.\p"
	.string "Prepare yourself!$"

ShivervaleGym_Text_BillOutro::
# 33 "data/maps/ShivervaleGym/scripts.pory"
	.string "You have proven yourself worthy, young\n"
	.string "trainer. A bright future you have,\l"
	.string "indeed.$"

ShivervaleGym_Text_BillPostBattle::
# 52 "data/maps/ShivervaleGym/scripts.pory"
	.string "Please, go forth through these doors.\n"
	.string "Selene is waiting.$"
