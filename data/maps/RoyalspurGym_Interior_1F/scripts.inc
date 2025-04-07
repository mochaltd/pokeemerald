RoyalspurGym_Interior_1F_MapScripts::
# 2 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RoyalspurGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RoyalspurGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 5
	goto_if_ge RoyalspurGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RoyalspurGym_Interior_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	setmaplayoutindex LAYOUT_ROYALSPUR_GYM_INTERIOR_1F_POST_BATTLE
	return


RoyalspurGym_EventScript_Mollie_Trigger::
# 10 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	lock
# 11 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	applymovement 3, RoyalspurGym_EventScript_Mollie_Trigger_Movement_0
# 12 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmovement 3
# 13 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	goto RoyalspurGym_EventScript_Mollie
	return


RoyalspurGym_EventScript_Mollie::
# 17 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	trainerbattle_single TRAINER_MOLLIE, RoyalspurGym_Text_MollieIntro, RoyalspurGym_Text_MollieOutro, RoyalspurGym_EventScript_MollieDefeated
# 18 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmessage
	end


RoyalspurGym_EventScript_MollieDefeated::
# 34 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	lock
# 35 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_EventScript_MollieDefeated_Text_0
# 36 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	closemessage
# 37 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 5
# 38 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	setmetatile 7, 3, 0x232, FALSE
# 40 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	setmetatile 7, 2, 0x237, FALSE
# 41 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	playse SE_DOOR
# 42 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	release
	return


RoyalspurGym_EventScript_Takao::
# 52 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, RoyalspurGym_Text_TakaoIntro, RoyalspurGym_Text_TakaoOutro
# 53 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmessage
	end


RoyalspurGym_EventScript_Jocelyn::
# 71 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, RoyalspurGym_Text_JocelynIntro, RoyalspurGym_Text_JocelynOutro
# 72 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmessage
	end


RoyalspurGym_EventScript_Artist::
# 90 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	lock
# 91 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	applymovement 4, RoyalspurGym_EventScript_Mollie_Trigger_Movement_0
# 92 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmovement 4
# 93 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_EventScript_Artist_Text_0
# 94 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	applymovement 4, RoyalspurGym_EventScript_Artist_Movement_0
# 95 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmovement 4
# 96 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	closemessage
# 97 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	release
	return


RoyalspurGym_MartEmployee::
# 101 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	call_if_unset FLAG_ROYALSPUR_GYM_FRESH_WATER, RoyalspurGym_MartEmployee_FreshWater
# 102 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	call_if_set FLAG_ROYALSPUR_GYM_FRESH_WATER, RoyalspurGym_MartEmployee_Enjoy
	return


RoyalspurGym_MartEmployee_FreshWater::
# 106 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	lock
# 107 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	applymovement 5, RoyalspurGym_EventScript_Mollie_Trigger_Movement_0
# 108 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmovement 5
# 109 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_MartEmployee_FreshWater_Text_0
# 110 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	closemessage
# 111 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 112 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	setflag FLAG_ROYALSPUR_GYM_FRESH_WATER
# 113 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	release
	return


RoyalspurGym_MartEmployee_Enjoy::
# 117 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	lock
# 118 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	applymovement 5, RoyalspurGym_EventScript_Mollie_Trigger_Movement_0
# 119 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	waitmovement 5
# 120 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	msgbox RoyalspurGym_MartEmployee_Enjoy_Text_0
# 121 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	closemessage
# 122 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	release
	return


# 11 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
RoyalspurGym_EventScript_Mollie_Trigger_Movement_0:
# 11 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	face_player
	step_end

# 94 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
RoyalspurGym_EventScript_Artist_Movement_0:
# 94 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	face_original_direction
	step_end

RoyalspurGym_EventScript_MollieDefeated_Text_0:
# 35 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Raikov will be pleased to fight such a\n"
	.string "strong, young trainer. You may enter\l"
	.string "through the door behind me.$"

RoyalspurGym_EventScript_Artist_Text_0:
# 93 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Watching powerful Pokémon battles here\n"
	.string "inspires my art.$"

RoyalspurGym_MartEmployee_FreshWater_Text_0:
# 109 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Have a refreshment and enjoy your time\n"
	.string "in the temple.$"

RoyalspurGym_MartEmployee_Enjoy_Text_0:
# 120 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Enjoy your time in the temple.$"

RoyalspurGym_Text_MollieIntro::
# 23 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Fufufu...\p"
	.string "I was told of a new trainer taking the\n"
	.string "trials but I couldn't believe it until\l"
	.string "now.\p"
	.string "As this temple's protector, I will use\n"
	.string "the power of Electric-type Pokémon in\l"
	.string "honor of Raikov!$"

RoyalspurGym_Text_MollieOutro::
# 29 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Such trust already between you and\n"
	.string "your Pokémon.$"

RoyalspurGym_Text_MolliePostBattle::
# 47 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Raikov will be pleased to fight such a\n"
	.string "strong, young trainer. You may enter\l"
	.string "through the door behind me.$"

RoyalspurGym_Text_TakaoIntro::
# 58 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "How do we pay tribute to Raikov? By\n"
	.string "battling fiercely!$"

RoyalspurGym_Text_TakaoOutro::
# 62 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Raikov's memory is honored by your\n"
	.string "competitiveness.$"

RoyalspurGym_Text_TakaoPostBattle::
# 66 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Battle on!$"

RoyalspurGym_Text_JocelynIntro::
# 77 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Face me!$"

RoyalspurGym_Text_JocelynOutro::
# 81 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Your Pokémon fight with grace and\n"
	.string "power.$"

RoyalspurGym_Text_JocelynPostBattle::
# 85 "data/maps/RoyalspurGym_Interior_1F/scripts.pory"
	.string "Battling with our Pokémon makes us\n"
	.string "stronger too.$"
