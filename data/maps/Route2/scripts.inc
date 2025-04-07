Route2_MapScripts::
	.byte 0


Route2_EventScript_Calvin::
# 6 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CALVIN_ROUTE1, Route2_Text_YoungsterCalvinIntro, Route2_Text_YoungsterCalvinOutro
# 7 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_YoungsterCalvinPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Glen::
# 25 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_GLEN_ROUTE2, Route2_Text_FishermanGlenIntro, Route2_Text_FishermanGlenOutro
# 26 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_FishermanGlenPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Sarah::
# 44 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_SARAH_ROUTE2, Route2_Text_SarahIntro, Route2_Text_SarahOutro
# 45 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_PicnicBoy::
# 64 "data/maps/Route2/scripts.pory"
	lock
# 65 "data/maps/Route2/scripts.pory"
	applymovement 7, Route2_EventScript_PicnicBoy_Movement_0
# 66 "data/maps/Route2/scripts.pory"
	waitmovement 7
# 67 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_PicnicBoy_Text_0
# 68 "data/maps/Route2/scripts.pory"
	closemessage
# 69 "data/maps/Route2/scripts.pory"
	applymovement 7, Route2_EventScript_PicnicBoy_Movement_1
# 70 "data/maps/Route2/scripts.pory"
	waitmovement 7
# 71 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_PicnicGirl::
# 76 "data/maps/Route2/scripts.pory"
	lock
# 77 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2_EventScript_PicnicBoy_Movement_0
# 78 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 79 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_PicnicGirl_Text_0
# 80 "data/maps/Route2/scripts.pory"
	closemessage
# 81 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2_EventScript_PicnicGirl_Movement_0
# 82 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 83 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Brent::
# 88 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route2_Text_BrentIntro, Route2_Text_BrentOutro
# 89 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Billy::
# 107 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route2_Text_BillyIntro, Route2_Text_BillyOutro
# 108 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Becky::
# 126 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route2_Text_BeckyIntro, Route2_Text_BeckyOutro
# 127 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route2/scripts.pory"
	waitmessage
	end


# 65 "data/maps/Route2/scripts.pory"
Route2_EventScript_PicnicBoy_Movement_0:
# 65 "data/maps/Route2/scripts.pory"
	face_player
	step_end

# 69 "data/maps/Route2/scripts.pory"
Route2_EventScript_PicnicBoy_Movement_1:
# 69 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 81 "data/maps/Route2/scripts.pory"
Route2_EventScript_PicnicGirl_Movement_0:
# 81 "data/maps/Route2/scripts.pory"
	face_right
	step_end

Route2_EventScript_PicnicBoy_Text_0:
# 67 "data/maps/Route2/scripts.pory"
	.string "I've been seeing more and more trainers\n"
	.string "passing through here and Shivervale\l"
	.string "Town recently. I wonder where they're\l"
	.string "headed next!$"

Route2_EventScript_PicnicGirl_Text_0:
# 79 "data/maps/Route2/scripts.pory"
	.string "My boyfriend and I love going on picnics\n"
	.string "when the weather is so nice. The\l"
	.string "Lemonade from the shop in Shivervale\l"
	.string "Town makes it perfect!$"

Route2_Text_YoungsterCalvinIntro::
# 12 "data/maps/Route2/scripts.pory"
	.string "Alright, a new trainer! This'll be easy!$"

Route2_Text_YoungsterCalvinOutro::
# 16 "data/maps/Route2/scripts.pory"
	.string "I thought this battle was going to be\n"
	.string "easy...$"

Route2_Text_YoungsterCalvinPostBattle::
# 20 "data/maps/Route2/scripts.pory"
	.string "I guess I should train some more.$"

Route2_Text_FishermanGlenIntro::
# 31 "data/maps/Route2/scripts.pory"
	.string "The fish aren't bitin' and I'm gettin'\n"
	.string "bored. Let's have a Pokémon battle!$"

Route2_Text_FishermanGlenOutro::
# 35 "data/maps/Route2/scripts.pory"
	.string "Well, at least I got some energy back in\n"
	.string "me.$"

Route2_Text_FishermanGlenPostBattle::
# 39 "data/maps/Route2/scripts.pory"
	.string "Fishin' helps me relax from the stress\n"
	.string "of daily life.$"

Route2_Text_SarahIntro::
# 50 "data/maps/Route2/scripts.pory"
	.string "That boy over there was rude, so I beat\n"
	.string "him in a Pokémon battle.\p"
	.string "You seem nice but I'm still going to\n"
	.string "beat you!$"

Route2_Text_SarahOutro::
# 55 "data/maps/Route2/scripts.pory"
	.string "What?! How did I lose? I was so sure I'd\n"
	.string "win!$"

Route2_Text_SarahPostBattle::
# 59 "data/maps/Route2/scripts.pory"
	.string "If you're gonna be a trainer, make sure\n"
	.string "you stock up on Potions. They can be a\l"
	.string "lifesaver!$"

Route2_Text_BrentIntro::
# 94 "data/maps/Route2/scripts.pory"
	.string "I'm looking for rare Pokémon!$"

Route2_Text_BrentOutro::
# 98 "data/maps/Route2/scripts.pory"
	.string "Pokémon are so interesting.$"

Route2_Text_BrentPostBattle::
# 102 "data/maps/Route2/scripts.pory"
	.string "One day, I'm going to catch all of the\n"
	.string "Pokémon in Shizen!$"

Route2_Text_BillyIntro::
# 113 "data/maps/Route2/scripts.pory"
	.string "Check it out! I'm the Shivervale Town\n"
	.string "Guardian!$"

Route2_Text_BillyOutro::
# 117 "data/maps/Route2/scripts.pory"
	.string "I'm still a strong trainer...$"

Route2_Text_BillyPostBattle::
# 121 "data/maps/Route2/scripts.pory"
	.string "One day I'll beat you!$"

Route2_Text_BeckyIntro::
# 132 "data/maps/Route2/scripts.pory"
	.string "My Pokémon usually help me find berries,\n"
	.string "but now they want to battle!$"

Route2_Text_BeckyOutro::
# 136 "data/maps/Route2/scripts.pory"
	.string "At least I already found the berries I\n"
	.string "need.$"

Route2_Text_BeckyPostBattle::
# 140 "data/maps/Route2/scripts.pory"
	.string "Maybe if I keep training my Pokémon,\n"
	.string "they can find more berries!$"
