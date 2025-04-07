Route4_MapScripts::
	.byte 0


Route4_EventScript_NorthSign::
# 6 "data/maps/Route4/scripts.pory"
	lock
# 7 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_NorthSign_Text_0
# 9 "data/maps/Route4/scripts.pory"
	closemessage
# 10 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_PokeParkSign::
# 14 "data/maps/Route4/scripts.pory"
	lock
# 15 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_PokeParkSign_Text_0
# 17 "data/maps/Route4/scripts.pory"
	closemessage
# 18 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_FishingHutSign::
# 22 "data/maps/Route4/scripts.pory"
	lock
# 23 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_FishingHutSign_Text_0
# 25 "data/maps/Route4/scripts.pory"
	closemessage
# 26 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Ball1::
# 30 "data/maps/Route4/scripts.pory"
	lock
# 31 "data/maps/Route4/scripts.pory"
	removeobject 5
# 32 "data/maps/Route4/scripts.pory"
	giveitem ITEM_TM44
# 33 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Hiker::
# 37 "data/maps/Route4/scripts.pory"
	lock
# 38 "data/maps/Route4/scripts.pory"
	applymovement 3, Route4_EventScript_Hiker_Movement_0
# 39 "data/maps/Route4/scripts.pory"
	waitmovement 3
# 40 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Hiker_Text_0
# 41 "data/maps/Route4/scripts.pory"
	closemessage
# 42 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Girl::
# 46 "data/maps/Route4/scripts.pory"
	lock
# 47 "data/maps/Route4/scripts.pory"
	applymovement 14, Route4_EventScript_Hiker_Movement_0
# 48 "data/maps/Route4/scripts.pory"
	waitmovement 14
# 49 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Girl_Text_0
# 50 "data/maps/Route4/scripts.pory"
	closemessage
# 51 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Ball2::
# 55 "data/maps/Route4/scripts.pory"
	lock
# 56 "data/maps/Route4/scripts.pory"
	removeobject 20
# 57 "data/maps/Route4/scripts.pory"
	giveitem ITEM_NUGGET
# 58 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Dawson::
# 62 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route4_Text_DawsonIntro, Route4_Text_DawsonOutro
# 63 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Abigail::
# 81 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route4_Text_AbigailIntro, Route4_Text_AbigailOutro
# 82 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Beau::
# 100 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route4_Text_BeauIntro, Route4_Text_BeauOutro
# 101 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Andrew::
# 119 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route4_Text_AndrewIntro, Route4_Text_AndrewOutro
# 120 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Fisher1::
# 138 "data/maps/Route4/scripts.pory"
	lock
# 139 "data/maps/Route4/scripts.pory"
	applymovement 1, Route4_EventScript_Hiker_Movement_0
# 140 "data/maps/Route4/scripts.pory"
	waitmovement 1
# 141 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Fisher1_Text_0
# 142 "data/maps/Route4/scripts.pory"
	closemessage
# 143 "data/maps/Route4/scripts.pory"
	applymovement 1, Route4_EventScript_Fisher1_Movement_0
# 144 "data/maps/Route4/scripts.pory"
	waitmovement 1
# 145 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Mom::
# 149 "data/maps/Route4/scripts.pory"
	lock
# 150 "data/maps/Route4/scripts.pory"
	applymovement 19, Route4_EventScript_Hiker_Movement_0
# 151 "data/maps/Route4/scripts.pory"
	waitmovement 19
# 152 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Mom_Text_0
# 153 "data/maps/Route4/scripts.pory"
	closemessage
# 154 "data/maps/Route4/scripts.pory"
	applymovement 19, Route4_EventScript_Fisher1_Movement_0
# 155 "data/maps/Route4/scripts.pory"
	waitmovement 19
# 156 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Son::
# 160 "data/maps/Route4/scripts.pory"
	lock
# 161 "data/maps/Route4/scripts.pory"
	applymovement 11, Route4_EventScript_Hiker_Movement_0
# 162 "data/maps/Route4/scripts.pory"
	waitmovement 11
# 163 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Son_Text_0
# 164 "data/maps/Route4/scripts.pory"
	closemessage
# 165 "data/maps/Route4/scripts.pory"
	applymovement 11, Route4_EventScript_Fisher1_Movement_0
# 166 "data/maps/Route4/scripts.pory"
	waitmovement 11
# 167 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Daughter::
# 171 "data/maps/Route4/scripts.pory"
	lock
# 172 "data/maps/Route4/scripts.pory"
	applymovement 12, Route4_EventScript_Hiker_Movement_0
# 173 "data/maps/Route4/scripts.pory"
	waitmovement 12
# 174 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Daughter_Text_0
# 175 "data/maps/Route4/scripts.pory"
	closemessage
# 176 "data/maps/Route4/scripts.pory"
	applymovement 12, Route4_EventScript_Fisher1_Movement_0
# 177 "data/maps/Route4/scripts.pory"
	waitmovement 12
# 178 "data/maps/Route4/scripts.pory"
	release
	return


Route4_EventScript_Eli::
# 182 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ELI, Route4_Text_EliIntro, Route4_Text_EliOutro
# 183 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Daisy::
# 201 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route4_Text_DaisyIntro, Route4_Text_DaisyOutro
# 202 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_EventScript_Ivan::
# 220 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route4_Text_IvanIntro, Route4_Text_IvanOutro
# 221 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route4/scripts.pory"
	waitmessage
	end


# 38 "data/maps/Route4/scripts.pory"
Route4_EventScript_Hiker_Movement_0:
# 38 "data/maps/Route4/scripts.pory"
	face_player
	step_end

# 143 "data/maps/Route4/scripts.pory"
Route4_EventScript_Fisher1_Movement_0:
# 143 "data/maps/Route4/scripts.pory"
	face_original_direction
	step_end

Route4_EventScript_NorthSign_Text_0:
# 7 "data/maps/Route4/scripts.pory"
	.string "{UP_ARROW} Evergreen Forest\n"
	.string "{DOWN_ARROW} Royalspur City$"

Route4_EventScript_PokeParkSign_Text_0:
# 15 "data/maps/Route4/scripts.pory"
	.string "The Poké Park\n"
	.string "Paid for by the citizens of Royalspur\l"
	.string "City$"

Route4_EventScript_FishingHutSign_Text_0:
# 23 "data/maps/Route4/scripts.pory"
	.string "The Fishing Lodge:\n"
	.string "Come in and brag about your catch of\l"
	.string "the day!$"

Route4_EventScript_Hiker_Text_0:
# 40 "data/maps/Route4/scripts.pory"
	.string "There's a strange cave up there but I\n"
	.string "can't move that boulder blocking the\l"
	.string "path. It's too heavy!$"

Route4_EventScript_Girl_Text_0:
# 49 "data/maps/Route4/scripts.pory"
	.string "I love coming out here to pick the\n"
	.string "wildflowers and decorating my home in\l"
	.string "Royalspur with them!$"

Route4_EventScript_Fisher1_Text_0:
# 141 "data/maps/Route4/scripts.pory"
	.string "You definitely look like the fishing\n"
	.string "type. You should go check out the\l"
	.string "Fishing Lodge just south of here!$"

Route4_EventScript_Mom_Text_0:
# 152 "data/maps/Route4/scripts.pory"
	.string "This Poké Park is so great. My kids love\n"
	.string "the Lapras slide!$"

Route4_EventScript_Son_Text_0:
# 163 "data/maps/Route4/scripts.pory"
	.string "These Pokémon are soooo big!$"

Route4_EventScript_Daughter_Text_0:
# 174 "data/maps/Route4/scripts.pory"
	.string "Do you think I could have a Pokémon\n"
	.string "someday?!$"

Route4_Text_DawsonIntro::
# 68 "data/maps/Route4/scripts.pory"
	.string "My dad bought me these Pokémon!$"

Route4_Text_DawsonOutro::
# 72 "data/maps/Route4/scripts.pory"
	.string "How could he buy me weak Pokémon?!$"

Route4_Text_DawsonPostBattle::
# 76 "data/maps/Route4/scripts.pory"
	.string "You certainly have an...interesting\n"
	.string "choice of fashion. You must not be from\l"
	.string "around here.$"

Route4_Text_AbigailIntro::
# 87 "data/maps/Route4/scripts.pory"
	.string "If I beat you, you have to run laps with\n"
	.string "me!$"

Route4_Text_AbigailOutro::
# 91 "data/maps/Route4/scripts.pory"
	.string "I guess you don't care about your\n"
	.string "fitness.$"

Route4_Text_AbigailPostBattle::
# 95 "data/maps/Route4/scripts.pory"
	.string "Running every day strengthens the\n"
	.string "heart and mind.$"

Route4_Text_BeauIntro::
# 106 "data/maps/Route4/scripts.pory"
	.string "I feel like a superhero! Right now, no\n"
	.string "one can beat me!$"

Route4_Text_BeauOutro::
# 110 "data/maps/Route4/scripts.pory"
	.string "I can't win on spirit alone…$"

Route4_Text_BeauPostBattle::
# 114 "data/maps/Route4/scripts.pory"
	.string "I'm going to be a real hero one day. I'm\n"
	.string "going to work harder to make me and my\l"
	.string "Pokémon stronger.$"

Route4_Text_AndrewIntro::
# 125 "data/maps/Route4/scripts.pory"
	.string "Check out my catches of the day!$"

Route4_Text_AndrewOutro::
# 129 "data/maps/Route4/scripts.pory"
	.string "They look better than they battle.$"

Route4_Text_AndrewPostBattle::
# 133 "data/maps/Route4/scripts.pory"
	.string "You came from Elderoot Town? My buddy\n"
	.string "Glen likes to fish off of Route 2, you\l"
	.string "probably met him.$"

Route4_Text_EliIntro::
# 188 "data/maps/Route4/scripts.pory"
	.string "I'm searching for hidden treasure in\n"
	.string "these rocks.$"

Route4_Text_EliOutro::
# 192 "data/maps/Route4/scripts.pory"
	.string "I can't even find one Nugget.$"

Route4_Text_EliPostBattle::
# 196 "data/maps/Route4/scripts.pory"
	.string "I'm not sure I have the patience for\n"
	.string "mining anymore.$"

Route4_Text_DaisyIntro::
# 207 "data/maps/Route4/scripts.pory"
	.string "I love coming out here to pick the\n"
	.string "wildflowers!$"

Route4_Text_DaisyOutro::
# 211 "data/maps/Route4/scripts.pory"
	.string "Your Pokémon are amazing.$"

Route4_Text_DaisyPostBattle::
# 215 "data/maps/Route4/scripts.pory"
	.string "Not even losing a battle could spoil\n"
	.string "this beautiful day.$"

Route4_Text_IvanIntro::
# 226 "data/maps/Route4/scripts.pory"
	.string "Fishing takes patience, but battling?\n"
	.string "That’s all about quick thinking!$"

Route4_Text_IvanOutro::
# 230 "data/maps/Route4/scripts.pory"
	.string "That battle went downstream fast...$"

Route4_Text_IvanPostBattle::
# 234 "data/maps/Route4/scripts.pory"
	.string "A capable trainer like you should go to\n"
	.string "the Fishing Lodge just south of here.$"
