BravefortTown_OneSeaTower_4F_MapScripts::
	.byte 0


BravefortTown_OneSeaTower_4F_EventScript_SilkScarf::
# 6 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_1
# 14 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILK_SCARF, BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_2
	return

BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_1:
# 7 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	lock
# 8 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Movement_0
# 9 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	waitmovement 1
# 10 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	msgbox BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Text_0
# 11 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	closemessage
# 12 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	release
	return

BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_2:
# 15 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	applymovement 1, BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Movement_0
# 16 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	waitmovement 1
# 17 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	msgbox BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Text_1
# 18 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	closemessage
# 19 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 20 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 21 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	release
	return


# 8 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Movement_0:
# 8 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	face_player
	step_end

BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Text_0:
# 10 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	.string "You look splendid!$"

BravefortTown_OneSeaTower_4F_EventScript_SilkScarf_Text_1:
# 17 "data/maps/BravefortTown_OneSeaTower_4F/scripts.pory"
	.string "Oh dear child, we must get you\n"
	.string "something more fashionable. Here, I\l"
	.string "have just the thing!$"
