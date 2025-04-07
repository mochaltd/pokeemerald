ElderootTown_DonnaHouse_MapScripts::
	.byte 0


ElderootTown_DonnaHouse_EventScript_Donna::
# 6 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	lock
# 7 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	applymovement 1, ElderootTown_DonnaHouse_EventScript_Donna_Movement_0
# 8 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	waitmovement 1
# 9 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	msgbox ElderootTown_DonnaHouse_EventScript_Donna_Text_0
# 11 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	closemessage
# 12 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	release
	return


ElderootTown_DonnaHouse_EventScript_Boy::
# 16 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	lock
# 17 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	applymovement 2, ElderootTown_DonnaHouse_EventScript_Donna_Movement_0
# 18 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	waitmovement 2
# 19 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	msgbox ElderootTown_DonnaHouse_EventScript_Boy_Text_0
# 20 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	closemessage
# 21 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	release
	return


# 7 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
ElderootTown_DonnaHouse_EventScript_Donna_Movement_0:
# 7 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	face_player
	step_end

ElderootTown_DonnaHouse_EventScript_Donna_Text_0:
# 9 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	.string "Oh, look at you {PLAYER}, you're all\n"
	.string "grown up. I remember the day you were\l"
	.string "born...you've grown up so much.\p"
	.string "Soon you'll be off having new\n"
	.string "adventures and experiences. Just make\l"
	.string "sure to visit your mother once in a\l"
	.string "while, okay?$"

ElderootTown_DonnaHouse_EventScript_Boy_Text_0:
# 19 "data/maps/ElderootTown_DonnaHouse/scripts.pory"
	.string "Someday, I'm gonna be a Pokémon\n"
	.string "trainer!$"
