ShivervaleGym_Exterior_MapScripts::
	.byte 0


ShivervaleGym_Exterior_EventScript_Woman::
# 6 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	lock
# 7 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	applymovement 1, ShivervaleGym_Exterior_EventScript_Woman_Movement_0
# 8 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	msgbox ShivervaleGym_Exterior_EventScript_Woman_Text_0
# 12 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	closemessage
# 13 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	release
	return


ShivervaleGym_Exterior_EventScript_BlackBelt::
# 17 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	lock
# 18 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	applymovement 2, ShivervaleGym_Exterior_EventScript_Woman_Movement_0
# 19 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	waitmovement 2
# 20 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	msgbox ShivervaleGym_Exterior_EventScript_BlackBelt_Text_0
# 21 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	closemessage
# 22 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	release
	return


ShivervaleGym_Exterior_EventScript_Statue::
# 26 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	lock
# 27 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	msgbox ShivervaleGym_Exterior_EventScript_Statue_Text_0
# 28 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	closemessage
# 29 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	release
	return


# 7 "data/maps/ShivervaleGym_Exterior/scripts.pory"
ShivervaleGym_Exterior_EventScript_Woman_Movement_0:
# 7 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	face_player
	step_end

ShivervaleGym_Exterior_EventScript_Woman_Text_0:
# 9 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	.string "Isn't this place wonderful?\p"
	.string "The ever-present life force of the\n"
	.string "League of Eight within these temples\l"
	.string "provides us with a constant snapshot\l"
	.string "in time of past Shizen.\p"
	.string "Around every temple is this picturesque\n"
	.string "view.$"

ShivervaleGym_Exterior_EventScript_BlackBelt_Text_0:
# 20 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	.string "Coming here makes me feel closer to my\n"
	.string "ancestors and the legacy they left\l"
	.string "behind.$"

ShivervaleGym_Exterior_EventScript_Statue_Text_0:
# 27 "data/maps/ShivervaleGym_Exterior/scripts.pory"
	.string "This statue depicts an ancient\n"
	.string "Pokémon.$"
