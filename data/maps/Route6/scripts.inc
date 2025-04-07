Route6_MapScripts::
	.byte 0


Route6_EventScript_Foster::
# 6 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route6_Text_FosterIntro, Route6_Text_FosterOutro
# 7 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route6/scripts.pory"
	waitmessage
	end


Route6_EventScript_Builder::
# 25 "data/maps/Route6/scripts.pory"
	lock
# 26 "data/maps/Route6/scripts.pory"
	applymovement 4, Route6_EventScript_Builder_Movement_0
# 27 "data/maps/Route6/scripts.pory"
	waitmovement 4
# 28 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Builder_Text_0
# 30 "data/maps/Route6/scripts.pory"
	closemessage
# 31 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_Myles::
# 35 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route6_Text_MylesIntro, Route6_Text_MylesOutro
# 36 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route6/scripts.pory"
	waitmessage
	end


Route6_EventScript_Lydia::
# 54 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_LYDIA, Route6_Text_LydiaIntro, Route6_Text_LydiaOutro
# 55 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route6/scripts.pory"
	waitmessage
	end


Route6_EventScript_Donald::
# 73 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route6_Text_DonaldIntro, Route6_Text_DonaldOutro
# 74 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route6/scripts.pory"
	waitmessage
	end


Route6_EventScript_Huey::
# 92 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route6_Text_HueyIntro, Route6_Text_HueyOutro
# 93 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route6/scripts.pory"
	waitmessage
	end


Route6_EventScript_Ball1::
# 111 "data/maps/Route6/scripts.pory"
	lock
# 112 "data/maps/Route6/scripts.pory"
	removeobject 8
# 113 "data/maps/Route6/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 114 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_Ball2::
# 118 "data/maps/Route6/scripts.pory"
	lock
# 119 "data/maps/Route6/scripts.pory"
	removeobject 1
# 120 "data/maps/Route6/scripts.pory"
	giveitem ITEM_TM22
# 121 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_Guard::
# 125 "data/maps/Route6/scripts.pory"
	lock
# 126 "data/maps/Route6/scripts.pory"
	applymovement 11, Route6_EventScript_Builder_Movement_0
# 127 "data/maps/Route6/scripts.pory"
	waitmovement 11
# 128 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Guard_Text_0
# 130 "data/maps/Route6/scripts.pory"
	closemessage
# 131 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_DaycareSign::
# 135 "data/maps/Route6/scripts.pory"
	lock
# 136 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_DaycareSign_Text_0
# 137 "data/maps/Route6/scripts.pory"
	closemessage
# 138 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_BuilderSign::
# 142 "data/maps/Route6/scripts.pory"
	lock
# 143 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_BuilderSign_Text_0
# 144 "data/maps/Route6/scripts.pory"
	closemessage
# 145 "data/maps/Route6/scripts.pory"
	release
	return


Route6_EventScript_TunnelSign::
# 149 "data/maps/Route6/scripts.pory"
	lock
# 150 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_TunnelSign_Text_0
# 151 "data/maps/Route6/scripts.pory"
	closemessage
# 152 "data/maps/Route6/scripts.pory"
	release
	return


# 26 "data/maps/Route6/scripts.pory"
Route6_EventScript_Builder_Movement_0:
# 26 "data/maps/Route6/scripts.pory"
	face_player
	step_end

Route6_EventScript_Builder_Text_0:
# 28 "data/maps/Route6/scripts.pory"
	.string "With Bravefort Town expanding so much,\n"
	.string "it can be hard for goods to travel to\l"
	.string "and from there.\p"
	.string "That's why we're about to start a big\n"
	.string "project to make it easier to travel\l"
	.string "through the Coaltine Tunnel.$"

Route6_EventScript_Guard_Text_0:
# 128 "data/maps/Route6/scripts.pory"
	.string "Someone stole a rare Pokémon Egg from\n"
	.string "an employee of this day care, luckily we\l"
	.string "were able to get it back.\p"
	.string "We weren't able to catch the culprit,\n"
	.string "though...they escaped somewhere in\l"
	.string "Bravefort Town. Be careful out there.$"

Route6_EventScript_DaycareSign_Text_0:
# 136 "data/maps/Route6/scripts.pory"
	.string "Pokémon Day Care$"

Route6_EventScript_BuilderSign_Text_0:
# 143 "data/maps/Route6/scripts.pory"
	.string "Builder's House$"

Route6_EventScript_TunnelSign_Text_0:
# 150 "data/maps/Route6/scripts.pory"
	.string "Coaltine Tunnel$"

Route6_Text_FosterIntro::
# 12 "data/maps/Route6/scripts.pory"
	.string "Help me unwind after my long shift!$"

Route6_Text_FosterOutro::
# 16 "data/maps/Route6/scripts.pory"
	.string "I could use a cold drink after that\n"
	.string "battle.$"

Route6_Text_FosterPostBattle::
# 20 "data/maps/Route6/scripts.pory"
	.string "We're hoping to get the tunnel lit up so\n"
	.string "that it's easier to travel through.$"

Route6_Text_MylesIntro::
# 41 "data/maps/Route6/scripts.pory"
	.string "Aren't Pokémon just wonderful?$"

Route6_Text_MylesOutro::
# 45 "data/maps/Route6/scripts.pory"
	.string "Raising Pokémon is a fulfilling life.$"

Route6_Text_MylesPostBattle::
# 49 "data/maps/Route6/scripts.pory"
	.string "Make sure to stop by our Day Care!$"

Route6_Text_LydiaIntro::
# 60 "data/maps/Route6/scripts.pory"
	.string "Let me see how you raise your Pokémon!$"

Route6_Text_LydiaOutro::
# 64 "data/maps/Route6/scripts.pory"
	.string "They seem to trust you a lot.$"

Route6_Text_LydiaPostBattle::
# 68 "data/maps/Route6/scripts.pory"
	.string "Battling is my favorite way to raise my\n"
	.string "Pokémon.$"

Route6_Text_DonaldIntro::
# 79 "data/maps/Route6/scripts.pory"
	.string "They evolve quickly, adapt fast, and\n"
	.string "strike before you know it!$"

Route6_Text_DonaldOutro::
# 83 "data/maps/Route6/scripts.pory"
	.string "Your Pokémon were able to strike\n"
	.string "faster...$"

Route6_Text_DonaldPostBattle::
# 87 "data/maps/Route6/scripts.pory"
	.string "I don't care what people say, bug\n"
	.string "Pokémon are the best!$"

Route6_Text_HueyIntro::
# 98 "data/maps/Route6/scripts.pory"
	.string "No runnin' from this storm, matey!$"

Route6_Text_HueyOutro::
# 102 "data/maps/Route6/scripts.pory"
	.string "Aye, even the mightiest captain faces a\n"
	.string "storm now and then...$"

Route6_Text_HueyPostBattle::
# 106 "data/maps/Route6/scripts.pory"
	.string "Ye got the better of me this time, but\n"
	.string "the tides always turn!$"
