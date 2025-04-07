Route3_MapScripts::
	.byte 0


Route3_Text_RouteSign::
# 6 "data/maps/Route3/scripts.pory"
	lock
# 7 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RouteSign_Text_0
# 9 "data/maps/Route3/scripts.pory"
	closemessage
# 10 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Jacob::
# 14 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route3_Text_JacobIntro, Route2_Text_JacobOutro
# 15 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_EventScript_Davis::
# 33 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route3_Text_DavisIntro, Route2_Text_DavisOutro
# 34 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_EventScript_Autumn::
# 52 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, Route3_Text_AutumnIntro, Route2_Text_AutumnOutro
# 53 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Text_RouteSign_Text_0:
# 7 "data/maps/Route3/scripts.pory"
	.string "{UP_ARROW} Shivervale Town\l {DOWN_ARROW} Evergreen Forest$"

Route3_Text_JacobIntro::
# 20 "data/maps/Route3/scripts.pory"
	.string "I'm in the middle of my daily workout\n"
	.string "routine right now, but luckily my\l"
	.string "routine today includes a Pokémon\l"
	.string "battle!$"

Route2_Text_JacobOutro::
# 24 "data/maps/Route3/scripts.pory"
	.string "I'm actually feeling kind of tired now...$"

Route3_Text_JacobPostBattle::
# 28 "data/maps/Route3/scripts.pory"
	.string "Maybe today should just be a rest day.$"

Route3_Text_DavisIntro::
# 39 "data/maps/Route3/scripts.pory"
	.string "I just caught some new Pokémon in\n"
	.string "Evergreen Forest. I'm gonna test them\l"
	.string "out on you!$"

Route2_Text_DavisOutro::
# 43 "data/maps/Route3/scripts.pory"
	.string "My bugs were no match for your Pokémon.$"

Route3_Text_DavisPostBattle::
# 47 "data/maps/Route3/scripts.pory"
	.string "If you're going into the forest, make\n"
	.string "sure to take some Antidotes with you.$"

Route3_Text_AutumnIntro::
# 58 "data/maps/Route3/scripts.pory"
	.string "I'm heading into the forest to look for\n"
	.string "new ingredients!$"

Route2_Text_AutumnOutro::
# 62 "data/maps/Route3/scripts.pory"
	.string "Wow! You're really good!$"

Route3_Text_AutumnPostBattle::
# 66 "data/maps/Route3/scripts.pory"
	.string "Fresh ingredients are the best!$"
