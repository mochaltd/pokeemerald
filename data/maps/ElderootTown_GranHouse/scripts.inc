ElderootTown_GranHouse_MapScripts::
	.byte 0


ElderootTown_GranHouse_EventScript_Grandpa::
# 6 "data/maps/ElderootTown_GranHouse/scripts.pory"
	lock
# 7 "data/maps/ElderootTown_GranHouse/scripts.pory"
	applymovement 1, ElderootTown_GranHouse_EventScript_Grandpa_Movement_0
# 8 "data/maps/ElderootTown_GranHouse/scripts.pory"
	waitmovement 1
# 9 "data/maps/ElderootTown_GranHouse/scripts.pory"
	msgbox ElderootTown_GranHouse_EventScript_Grandpa_Text_0
# 11 "data/maps/ElderootTown_GranHouse/scripts.pory"
	closemessage
# 12 "data/maps/ElderootTown_GranHouse/scripts.pory"
	release
	return


ElderootTown_GranHouse_EventScript_Boy::
# 16 "data/maps/ElderootTown_GranHouse/scripts.pory"
	lock
# 17 "data/maps/ElderootTown_GranHouse/scripts.pory"
	msgbox ElderootTown_GranHouse_EventScript_Boy_Text_0
# 18 "data/maps/ElderootTown_GranHouse/scripts.pory"
	closemessage
# 19 "data/maps/ElderootTown_GranHouse/scripts.pory"
	release
	return


ElderootTown_GranHouse_EventScript_Grandma::
# 23 "data/maps/ElderootTown_GranHouse/scripts.pory"
	goto_if_unset FLAG_GET_BERRIES, GiveBerry
# 24 "data/maps/ElderootTown_GranHouse/scripts.pory"
	goto_if_set FLAG_GET_BERRIES, ElderootTown_GranHouse_EventScript_SafeTravels
	return


GiveBerry::
# 28 "data/maps/ElderootTown_GranHouse/scripts.pory"
	lock
# 29 "data/maps/ElderootTown_GranHouse/scripts.pory"
	applymovement 3, ElderootTown_GranHouse_EventScript_Grandpa_Movement_0
# 30 "data/maps/ElderootTown_GranHouse/scripts.pory"
	waitmovement 3
# 31 "data/maps/ElderootTown_GranHouse/scripts.pory"
	msgbox GiveBerry_Text_0
# 33 "data/maps/ElderootTown_GranHouse/scripts.pory"
	closemessage
# 34 "data/maps/ElderootTown_GranHouse/scripts.pory"
	release
	return


ElderootTown_GranHouse_EventScript_SafeTravels::
# 38 "data/maps/ElderootTown_GranHouse/scripts.pory"
	lock
# 39 "data/maps/ElderootTown_GranHouse/scripts.pory"
	applymovement 3, ElderootTown_GranHouse_EventScript_Grandpa_Movement_0
# 40 "data/maps/ElderootTown_GranHouse/scripts.pory"
	waitmovement 3
# 41 "data/maps/ElderootTown_GranHouse/scripts.pory"
	msgbox ElderootTown_GranHouse_EventScript_SafeTravels_Text_0
# 42 "data/maps/ElderootTown_GranHouse/scripts.pory"
	closemessage
# 43 "data/maps/ElderootTown_GranHouse/scripts.pory"
	release
	return


# 7 "data/maps/ElderootTown_GranHouse/scripts.pory"
ElderootTown_GranHouse_EventScript_Grandpa_Movement_0:
# 7 "data/maps/ElderootTown_GranHouse/scripts.pory"
	face_player
	step_end

ElderootTown_GranHouse_EventScript_Grandpa_Text_0:
# 9 "data/maps/ElderootTown_GranHouse/scripts.pory"
	.string "Ah {PLAYER}, it's good to see you. Our\n"
	.string "grandson is visiting from Royalspur\l"
	.string "City, but he's spent the whole time on\l"
	.string "his game.\p"
	.string "Maybe you could convince him to spend\n"
	.string "some time with his grandparents?$"

ElderootTown_GranHouse_EventScript_Boy_Text_0:
# 17 "data/maps/ElderootTown_GranHouse/scripts.pory"
	.string "Don't mess me up, I'm trying to beat my\n"
	.string "high score!$"

GiveBerry_Text_0:
# 31 "data/maps/ElderootTown_GranHouse/scripts.pory"
	.string "Oh, hello {PLAYER}. Your mother\n"
	.string "mentioned you might be heading out of\l"
	.string "town soon, so I packed you a light\l"
	.string "snack.\p"
	.string "Do you mind getting it? My knees are\n"
	.string "hurting today. It's on the left side of\l"
	.string "the glass cabinet.$"

ElderootTown_GranHouse_EventScript_SafeTravels_Text_0:
# 41 "data/maps/ElderootTown_GranHouse/scripts.pory"
	.string "Be safe on your travels!$"
