OldElderoot_MapScripts::
	.byte 0


OldElderoot_EventScript_SageHouseSign::
# 6 "data/maps/OldElderoot/scripts.pory"
	lockall
# 7 "data/maps/OldElderoot/scripts.pory"
	msgbox OldElderoot_EventScript_SageHouseSign_Text_0
# 8 "data/maps/OldElderoot/scripts.pory"
	releaseall
	return


OldElderoot_EventScript_Cave::
# 12 "data/maps/OldElderoot/scripts.pory"
	lock
# 13 "data/maps/OldElderoot/scripts.pory"
	msgbox OldElderoot_EventScript_Cave_Text_0
# 14 "data/maps/OldElderoot/scripts.pory"
	closemessage
# 15 "data/maps/OldElderoot/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldElderoot_EventScript_Cave_Movement_0
# 16 "data/maps/OldElderoot/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/OldElderoot/scripts.pory"
	release
	return


OldElderoot_EventScript_OldHouse::
# 21 "data/maps/OldElderoot/scripts.pory"
	lock
# 22 "data/maps/OldElderoot/scripts.pory"
	msgbox OldElderoot_EventScript_OldHouse_Text_0
# 23 "data/maps/OldElderoot/scripts.pory"
	closemessage
# 24 "data/maps/OldElderoot/scripts.pory"
	release
	return


OldElderoot_SageHouse_EventScript_AfterSageConvo::
# 28 "data/maps/OldElderoot/scripts.pory"
	lock
# 29 "data/maps/OldElderoot/scripts.pory"
	msgbox OldElderoot_SageHouse_EventScript_AfterSageConvo_Text_0
# 30 "data/maps/OldElderoot/scripts.pory"
	closemessage
# 31 "data/maps/OldElderoot/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldElderoot_SageHouse_EventScript_AfterSageConvo_Movement_0
# 32 "data/maps/OldElderoot/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 33 "data/maps/OldElderoot/scripts.pory"
	release
	return


# 15 "data/maps/OldElderoot/scripts.pory"
OldElderoot_EventScript_Cave_Movement_0:
# 15 "data/maps/OldElderoot/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/OldElderoot/scripts.pory"
OldElderoot_SageHouse_EventScript_AfterSageConvo_Movement_0:
# 31 "data/maps/OldElderoot/scripts.pory"
	walk_left
	step_end

OldElderoot_EventScript_SageHouseSign_Text_0:
# 7 "data/maps/OldElderoot/scripts.pory"
	.string "The Sage of Elderoot$"

OldElderoot_EventScript_Cave_Text_0:
# 13 "data/maps/OldElderoot/scripts.pory"
	.string "I probably shouldn't go in there until I\n"
	.string "know what's going on.$"

OldElderoot_EventScript_OldHouse_Text_0:
# 22 "data/maps/OldElderoot/scripts.pory"
	.string "It doesn't look like anyone has lived\n"
	.string "here for a really long time.$"

OldElderoot_SageHouse_EventScript_AfterSageConvo_Text_0:
# 29 "data/maps/OldElderoot/scripts.pory"
	.string "I can't leave now!$"
