ElderootTown_MapScripts::
# 2 "data/maps/ElderootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ElderootTown_OnTransition
	.byte 0


ElderootTown_OnTransition::
# 6 "data/maps/ElderootTown/scripts.pory"
	setflag FLAG_VISITED_ELDEROOT_TOWN
	end


ElderootTown_EventScript_TownSign::
# 11 "data/maps/ElderootTown/scripts.pory"
	lockall
# 12 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_TownSign_Text_0
# 14 "data/maps/ElderootTown/scripts.pory"
	releaseall
	return


ElderootTown_EventScript_PlayerHouseSign::
# 18 "data/maps/ElderootTown/scripts.pory"
	lockall
# 19 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_PlayerHouseSign_Text_0
# 20 "data/maps/ElderootTown/scripts.pory"
	releaseall
	return


ElderootTown_EventScript_StrangeFeeling::
# 24 "data/maps/ElderootTown/scripts.pory"
	lockall
# 25 "data/maps/ElderootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElderootTown_EventScript_StrangeFeeling_Movement_0
# 26 "data/maps/ElderootTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/ElderootTown/scripts.pory"
	playse SE_PIN
# 28 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_StrangeFeeling_Text_0
# 29 "data/maps/ElderootTown/scripts.pory"
	call PathShake
# 30 "data/maps/ElderootTown/scripts.pory"
	delay 5
# 31 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_StrangeFeeling_Text_1
# 32 "data/maps/ElderootTown/scripts.pory"
	closemessage
# 33 "data/maps/ElderootTown/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/ElderootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ElderootTown_EventScript_StrangeFeeling_Movement_1
# 35 "data/maps/ElderootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 36 "data/maps/ElderootTown/scripts.pory"
	delay 10
# 37 "data/maps/ElderootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ElderootTown_EventScript_StrangeFeeling_Movement_2
# 38 "data/maps/ElderootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 39 "data/maps/ElderootTown/scripts.pory"
	special RemoveCameraObject
# 40 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_StrangeFeeling_Text_2
# 42 "data/maps/ElderootTown/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 4
# 43 "data/maps/ElderootTown/scripts.pory"
	releaseall
	return


PathShake::
# 47 "data/maps/ElderootTown/scripts.pory"
	delay 30
# 48 "data/maps/ElderootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 49 "data/maps/ElderootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 50 "data/maps/ElderootTown/scripts.pory"
	setvar VAR_0x8006, 15
# 51 "data/maps/ElderootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 52 "data/maps/ElderootTown/scripts.pory"
	special ShakeCamera
# 53 "data/maps/ElderootTown/scripts.pory"
	waitstate
# 54 "data/maps/ElderootTown/scripts.pory"
	delay 60
	return


ElderootTown_EventScript_BetterCheckItOut::
# 58 "data/maps/ElderootTown/scripts.pory"
	lockall
# 59 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_BetterCheckItOut_Text_0
# 60 "data/maps/ElderootTown/scripts.pory"
	closemessage
# 61 "data/maps/ElderootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElderootTown_EventScript_BetterCheckItOut_Movement_0
# 62 "data/maps/ElderootTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/ElderootTown/scripts.pory"
	releaseall
	return


ElderootTown_EventScript_TalkToMom::
# 67 "data/maps/ElderootTown/scripts.pory"
	lock
# 68 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_TalkToMom_Text_0
# 70 "data/maps/ElderootTown/scripts.pory"
	closemessage
# 71 "data/maps/ElderootTown/scripts.pory"
	release
	return


ElderootTown_EventScript_SayGoodbye::
# 75 "data/maps/ElderootTown/scripts.pory"
	lock
# 76 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_SayGoodbye_Text_0
# 77 "data/maps/ElderootTown/scripts.pory"
	closemessage
# 78 "data/maps/ElderootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElderootTown_EventScript_BetterCheckItOut_Movement_0
# 79 "data/maps/ElderootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/ElderootTown/scripts.pory"
	release
	return


ElderootTown_EventScript_DonnaHouseSign::
# 84 "data/maps/ElderootTown/scripts.pory"
	lockall
# 85 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_DonnaHouseSign_Text_0
# 86 "data/maps/ElderootTown/scripts.pory"
	releaseall
	return


ElderootTown_EventScript_LockedHouse::
# 90 "data/maps/ElderootTown/scripts.pory"
	lock
# 91 "data/maps/ElderootTown/scripts.pory"
	msgbox ElderootTown_EventScript_LockedHouse_Text_0
# 92 "data/maps/ElderootTown/scripts.pory"
	closemessage
# 93 "data/maps/ElderootTown/scripts.pory"
	release
	return


# 25 "data/maps/ElderootTown/scripts.pory"
ElderootTown_EventScript_StrangeFeeling_Movement_0:
# 25 "data/maps/ElderootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/ElderootTown/scripts.pory"
ElderootTown_EventScript_StrangeFeeling_Movement_1:
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_right
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_up
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_up
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_up
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_up
# 34 "data/maps/ElderootTown/scripts.pory"
	walk_fast_up
	step_end

# 37 "data/maps/ElderootTown/scripts.pory"
ElderootTown_EventScript_StrangeFeeling_Movement_2:
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_down
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_down
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_down
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_down
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_down
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
# 37 "data/maps/ElderootTown/scripts.pory"
	walk_fast_left
	step_end

# 61 "data/maps/ElderootTown/scripts.pory"
ElderootTown_EventScript_BetterCheckItOut_Movement_0:
# 61 "data/maps/ElderootTown/scripts.pory"
	walk_right
	step_end

ElderootTown_EventScript_TownSign_Text_0:
# 12 "data/maps/ElderootTown/scripts.pory"
	.string "Elderoot Town\l The Town of Beginnings$"

ElderootTown_EventScript_PlayerHouseSign_Text_0:
# 19 "data/maps/ElderootTown/scripts.pory"
	.string "{PLAYER}'s House$"

ElderootTown_EventScript_StrangeFeeling_Text_0:
# 28 "data/maps/ElderootTown/scripts.pory"
	.string "{PAUSE_MUSIC}Huh?$"

ElderootTown_EventScript_StrangeFeeling_Text_1:
# 31 "data/maps/ElderootTown/scripts.pory"
	.string "What was that?$"

ElderootTown_EventScript_StrangeFeeling_Text_2:
# 40 "data/maps/ElderootTown/scripts.pory"
	.string "{RESUME_MUSIC}Has that cave always been there?...\p"
	.string "I better go check it out.$"

ElderootTown_EventScript_BetterCheckItOut_Text_0:
# 59 "data/maps/ElderootTown/scripts.pory"
	.string "I'd better go check out that strange\n"
	.string "cave.$"

ElderootTown_EventScript_TalkToMom_Text_0:
# 68 "data/maps/ElderootTown/scripts.pory"
	.string "Wow, my very own Pokémon...\p"
	.string "I suppose I should go talk to my mom\n"
	.string "before I leave.$"

ElderootTown_EventScript_SayGoodbye_Text_0:
# 76 "data/maps/ElderootTown/scripts.pory"
	.string "Mom would kill me if I left without\n"
	.string "saying goodbye!$"

ElderootTown_EventScript_DonnaHouseSign_Text_0:
# 85 "data/maps/ElderootTown/scripts.pory"
	.string "Donna's House$"

ElderootTown_EventScript_LockedHouse_Text_0:
# 91 "data/maps/ElderootTown/scripts.pory"
	.string "The door is locked. I guess they don't\n"
	.string "want me to come in.$"
