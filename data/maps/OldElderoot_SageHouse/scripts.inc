OldElderoot_SageHouse_MapScripts::
# 2 "data/maps/OldElderoot_SageHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldElderoot_SageHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldElderoot_SageHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/OldElderoot_SageHouse/scripts.pory"
	map_script_2 VAR_ELDEROOT_TOWN_STATE, 5, SageWelcome
	.2byte 0


SageWelcome::
# 8 "data/maps/OldElderoot_SageHouse/scripts.pory"
	lock
# 9 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SageWelcome_Movement_0
# 10 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement 1, SageWelcome_Movement_1
# 12 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement 1
# 13 "data/maps/OldElderoot_SageHouse/scripts.pory"
	playse SE_PIN
# 14 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox SageWelcome_Text_0
# 16 "data/maps/OldElderoot_SageHouse/scripts.pory"
	closemessage
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SageWelcome_Movement_2
# 18 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 19 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement 1, SageWelcome_Movement_3
# 20 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement 1
# 21 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox SageWelcome_Text_1
# 34 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox SageWelcome_Text_2, MSGBOX_YESNO
SageWelcome_2:
# 35 "data/maps/OldElderoot_SageHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SageWelcome_3
# 38 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox SageWelcome_Text_4
# 39 "data/maps/OldElderoot_SageHouse/scripts.pory"
	closemessage
# 40 "data/maps/OldElderoot_SageHouse/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 6
# 41 "data/maps/OldElderoot_SageHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/OldElderoot_SageHouse/scripts.pory"
	removeobject 1
# 43 "data/maps/OldElderoot_SageHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data/maps/OldElderoot_SageHouse/scripts.pory"
	release
	return

SageWelcome_3:
# 36 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox SageWelcome_Text_3, MSGBOX_YESNO
	goto SageWelcome_2


OldElderoot_SageHouse_EventScript_Sage::
# 48 "data/maps/OldElderoot_SageHouse/scripts.pory"
	goto_if_eq VAR_ELDEROOT_TOWN_STATE, 6, OldElderoot_SageHouse_EventScript_MeetMe
# 49 "data/maps/OldElderoot_SageHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OldElderoot_SageHouse_EventScript_GoForth
	return


OldElderoot_SageHouse_EventScript_MeetMe::
# 53 "data/maps/OldElderoot_SageHouse/scripts.pory"
	lock
# 54 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement 1, OldElderoot_SageHouse_EventScript_MeetMe_Movement_0
# 55 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement 1
# 56 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox OldElderoot_SageHouse_EventScript_MeetMe_Text_0
# 57 "data/maps/OldElderoot_SageHouse/scripts.pory"
	closemessage
# 58 "data/maps/OldElderoot_SageHouse/scripts.pory"
	release
	return


OldElderoot_SageHouse_EventScript_GoForth::
# 62 "data/maps/OldElderoot_SageHouse/scripts.pory"
	lock
# 63 "data/maps/OldElderoot_SageHouse/scripts.pory"
	applymovement 1, OldElderoot_SageHouse_EventScript_MeetMe_Movement_0
# 64 "data/maps/OldElderoot_SageHouse/scripts.pory"
	waitmovement 1
# 65 "data/maps/OldElderoot_SageHouse/scripts.pory"
	msgbox OldElderoot_SageHouse_EventScript_GoForth_Text_0
# 66 "data/maps/OldElderoot_SageHouse/scripts.pory"
	closemessage
# 67 "data/maps/OldElderoot_SageHouse/scripts.pory"
	release
	return


# 9 "data/maps/OldElderoot_SageHouse/scripts.pory"
SageWelcome_Movement_0:
# 9 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_up
	step_end

# 11 "data/maps/OldElderoot_SageHouse/scripts.pory"
SageWelcome_Movement_1:
# 11 "data/maps/OldElderoot_SageHouse/scripts.pory"
	face_down
# 11 "data/maps/OldElderoot_SageHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
SageWelcome_Movement_2:
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_up
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_left
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_left
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_up
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	walk_up
# 17 "data/maps/OldElderoot_SageHouse/scripts.pory"
	face_right
	step_end

# 19 "data/maps/OldElderoot_SageHouse/scripts.pory"
SageWelcome_Movement_3:
# 19 "data/maps/OldElderoot_SageHouse/scripts.pory"
	face_left
	step_end

# 54 "data/maps/OldElderoot_SageHouse/scripts.pory"
OldElderoot_SageHouse_EventScript_MeetMe_Movement_0:
# 54 "data/maps/OldElderoot_SageHouse/scripts.pory"
	face_player
	step_end

SageWelcome_Text_0:
# 14 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "Ah, young {PLAYER}, it's so nice to\n"
	.string "finally meet you in person.\p"
	.string "Please come have a seat.$"

SageWelcome_Text_1:
# 21 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "I know you must have so many questions,\n"
	.string "young {PLAYER}, but allow me to\l"
	.string "introduce myself first.\p"
	.string "I am known as The Sage of Elderoot, an\n"
	.string "ancient guardian watching over Old\l"
	.string "Elderoot, a long past version of the\l"
	.string "Elderoot Town you call home.\p"
	.string "This past version of Elderoot Town was\n"
	.string "created by CELEBI, the original\l"
	.string "guardian of Shizen, as a way to\l"
	.string "preserve the energy needed to sustain\l"
	.string "life here in this region.\p"
	.string "Unfortunately, CELEBI has not been\n"
	.string "seen for roughly 200 years...not since\l"
	.string "the War of Time, when the ancient\l"
	.string "beings DIALGA and PALKIA threatened\l"
	.string "the very existence of this world...\p"
	.string "...and not since she appointed me as the\n"
	.string "new guardian of this place when she was\l"
	.string "forced to flee during the war that\l"
	.string "threatened her existence as well.\p"
	.string "Here in Old Elderoot lies the roots of\n"
	.string "the Primaroot Tree, the first tree on\l"
	.string "Shizen that birthed this region in its\l"
	.string "entirety...and continues to sustain it\l"
	.string "to this day.\p"
	.string "I don't know why I was chosen to guard\n"
	.string "over something so important to life\l"
	.string "itself, but I knew that I had to protect\l"
	.string "it at all costs.\p"
	.string "Now, I must ask you to do something of\n"
	.string "great importance...\p"
	.string "You being able to enter Old Elderoot\n"
	.string "confirms my fears...\p"
	.string "The energy that has sustained me for\n"
	.string "so long is beginning to wane and I fear\l"
	.string "my time is running out.\p"
	.string "I must ask you to bring CELEBI home\n"
	.string "before I'm gone...\p"
	.string "...before the barriers protecting this\n"
	.string "place break down completely.\p"
	.string "I'm not sure why the fates chose to\n"
	.string "bring us together, but it must have\l"
	.string "done it for a reason, and I believe you\l"
	.string "will be the one to bring balance back to\l"
	.string "the Shizen region.$"

SageWelcome_Text_2:
# 34 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "What do you say, {PLAYER}? Do you accept?$"

SageWelcome_Text_3:
# 36 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "Are you sure? I urge you to reconsider.$"

SageWelcome_Text_4:
# 38 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "Myself and Shizen are in your debt. Meet\n"
	.string "me at the cave just west of here and I\l"
	.string "will help you with your journey.$"

OldElderoot_SageHouse_EventScript_MeetMe_Text_0:
# 56 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "Don't worry, another aspect of me is\n"
	.string "waiting for you in the cave.$"

OldElderoot_SageHouse_EventScript_GoForth_Text_0:
# 65 "data/maps/OldElderoot_SageHouse/scripts.pory"
	.string "I have given you all of the help I can.\n"
	.string "Go forth, young one, and grow strong!$"
