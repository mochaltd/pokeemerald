ShivervaleTown_CuttersHouse_MapScripts::
	.byte 0


ShivervaleTown_CuttersHouse_EventScript_Hiker::
# 32 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, ShivervaleTown_CuttersHouse_EventScript_Hiker_1
# 40 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, ShivervaleTown_CuttersHouse_EventScript_Hiker_2
	return

ShivervaleTown_CuttersHouse_EventScript_Hiker_1:
# 33 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	lock
# 34 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	applymovement 1, ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0
# 35 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	waitmovement 1
# 36 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	msgbox ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_0
# 37 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	closemessage
# 38 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	release
	return

ShivervaleTown_CuttersHouse_EventScript_Hiker_2:
# 41 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	applymovement 1, ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0
# 42 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	waitmovement 1
# 43 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	msgbox ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_1
# 46 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	closemessage
# 47 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	giveitem ITEM_HM01
# 48 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 49 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	release
	return


# 34 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0:
# 34 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	face_player
	step_end

ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_0:
# 36 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	.string "I've heard stories of strange Pokémon\n"
	.string "in the Evergreen Forest. Stay safe!$"

ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_1:
# 43 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	.string "I've noticed some strange trees\n"
	.string "blocking the path to Evergreen Forest.\p"
	.string "I thought this Hidden Machine would\n"
	.string "help, but I can't get it to work. Maybe\l"
	.string "you can figure it out.\p"
	.string "Apparently, you don't even have to\n"
	.string "teach the move to a Pokémon. It can\l"
	.string "just use it if it's able to learn the\l"
	.string "move!$"
