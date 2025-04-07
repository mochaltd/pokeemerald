BravefortTown_BravefortShipyard_MapScripts::
	.byte 0


BravefortTown_BravefortShipyard_EventScript_Scientist::
# 6 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 2, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_0
# 8 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 2
# 9 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	msgbox BravefortTown_BravefortShipyard_EventScript_Scientist_Text_0
# 10 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	closemessage
# 11 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 2, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_1
# 12 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 2
# 13 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	release
	return


BravefortTown_BravefortShipyard_EventScript_CantPass::
# 17 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	lock
# 18 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 1, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_0
# 19 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 1
# 20 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	msgbox BravefortTown_BravefortShipyard_EventScript_CantPass_Text_0
# 21 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	closemessage
# 22 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 1, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_1
# 23 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 1
# 24 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	release
	return


BravefortTown_BravefortShipyard_EventScript_Ernest::
# 28 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, BravefortTown_BravefortShipyard_Text_ErnestIntro, BravefortTown_BravefortShipyard_Text_ErnestOutro
# 29 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	msgbox BravefortTown_BravefortShipyard_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmessage
	end


BravefortTown_BravefortShipyard_EventScript_Phillip::
# 47 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, BravefortTown_BravefortShipyard_Text_PhillipIntro, BravefortTown_BravefortShipyard_Text_PhillipOutro
# 48 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	msgbox BravefortTown_BravefortShipyard_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmessage
	end


BravefortTown_BravefortShipyard_EventScript_Owner::
# 66 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	lock
# 67 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 3, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_0
# 68 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 3
# 69 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	msgbox BravefortTown_BravefortShipyard_EventScript_Owner_Text_0
# 70 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	closemessage
# 71 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	applymovement 3, BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_1
# 72 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	waitmovement 3
# 73 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_0:
# 7 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	face_player
	step_end

# 11 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
BravefortTown_BravefortShipyard_EventScript_Scientist_Movement_1:
# 11 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	face_original_direction
	step_end

BravefortTown_BravefortShipyard_EventScript_Scientist_Text_0:
# 9 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "This generator helps keep everything\n"
	.string "running smoothly here. It also serves\l"
	.string "as a backup power source for the\l"
	.string "lighthouse.$"

BravefortTown_BravefortShipyard_EventScript_CantPass_Text_0:
# 20 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "Sorry, I can't let you out on the docks,\n"
	.string "we've got a big shipment coming in soon.$"

BravefortTown_BravefortShipyard_EventScript_Owner_Text_0:
# 69 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "We're doing some innovative work that\n"
	.string "will one day make Bravefort Town a\l"
	.string "booming metropolis! How exciting!$"

BravefortTown_BravefortShipyard_Text_ErnestIntro::
# 34 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "It's time for my break. Wanna battle?$"

BravefortTown_BravefortShipyard_Text_ErnestOutro::
# 38 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "Thanks for winning so fast. Now I can\n"
	.string "enjoy the rest of my break!$"

BravefortTown_BravefortShipyard_Text_ErnestPostBattle::
# 42 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "You should be careful around here.$"

BravefortTown_BravefortShipyard_Text_PhillipIntro::
# 53 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "I build 'em up, and I knock 'em down!\n"
	.string "Let's see if you can stand tall!$"

BravefortTown_BravefortShipyard_Text_PhillipOutro::
# 57 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "Looks like I need to reinforce my\n"
	.string "strategy...$"

BravefortTown_BravefortShipyard_Text_PhillipPostBattle::
# 61 "data/maps/BravefortTown_BravefortShipyard/scripts.pory"
	.string "We've gone 13 days without an accident\n"
	.string "related to a Pokémon battle.$"
