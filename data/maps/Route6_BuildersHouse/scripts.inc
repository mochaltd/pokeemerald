Route6_BuildersHouse_MapScripts::
	.byte 0


Route6_BuildersHouse_EventScript_Garrison::
# 6 "data/maps/Route6_BuildersHouse/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, Route6_BuildersHouse_Text_GarrisonIntro, Route6_BuildersHouse_Text_GarrisonOutro
# 7 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmessage
	end


Route6_BuildersHouse_EventScript_Marc::
# 25 "data/maps/Route6_BuildersHouse/scripts.pory"
	trainerbattle_single TRAINER_MARC, Route6_BuildersHouse_Text_MarcIntro, Route6_BuildersHouse_Text_MarcOutro
# 26 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmessage
	end


Route6_BuildersHouse_EventScript_Jeff::
# 44 "data/maps/Route6_BuildersHouse/scripts.pory"
	trainerbattle_single TRAINER_JEFF, Route6_BuildersHouse_Text_JeffIntro, Route6_BuildersHouse_Text_JeffOutro
# 45 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmessage
	end


Route6_BuildersHouse_EventScript_HealParty::
# 63 "data/maps/Route6_BuildersHouse/scripts.pory"
	lock
# 64 "data/maps/Route6_BuildersHouse/scripts.pory"
	applymovement 4, Route6_BuildersHouse_EventScript_HealParty_Movement_0
# 65 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmovement 4
# 66 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_EventScript_HealParty_Text_0
# 67 "data/maps/Route6_BuildersHouse/scripts.pory"
	closemessage
# 68 "data/maps/Route6_BuildersHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 69 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_EventScript_HealParty_Text_1
# 70 "data/maps/Route6_BuildersHouse/scripts.pory"
	applymovement 4, Route6_BuildersHouse_EventScript_HealParty_Movement_1
# 71 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmovement 4
# 72 "data/maps/Route6_BuildersHouse/scripts.pory"
	closemessage
# 73 "data/maps/Route6_BuildersHouse/scripts.pory"
	release
	return


Route6_BuildersHouse_EventScript_Music::
# 77 "data/maps/Route6_BuildersHouse/scripts.pory"
	lock
# 78 "data/maps/Route6_BuildersHouse/scripts.pory"
	applymovement 3, Route6_BuildersHouse_EventScript_HealParty_Movement_0
# 79 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmovement 3
# 80 "data/maps/Route6_BuildersHouse/scripts.pory"
	msgbox Route6_BuildersHouse_EventScript_Music_Text_0
# 81 "data/maps/Route6_BuildersHouse/scripts.pory"
	closemessage
# 82 "data/maps/Route6_BuildersHouse/scripts.pory"
	applymovement 3, Route6_BuildersHouse_EventScript_HealParty_Movement_1
# 83 "data/maps/Route6_BuildersHouse/scripts.pory"
	waitmovement 3
# 84 "data/maps/Route6_BuildersHouse/scripts.pory"
	release
	return


# 64 "data/maps/Route6_BuildersHouse/scripts.pory"
Route6_BuildersHouse_EventScript_HealParty_Movement_0:
# 64 "data/maps/Route6_BuildersHouse/scripts.pory"
	face_player
	step_end

# 70 "data/maps/Route6_BuildersHouse/scripts.pory"
Route6_BuildersHouse_EventScript_HealParty_Movement_1:
# 70 "data/maps/Route6_BuildersHouse/scripts.pory"
	face_original_direction
	step_end

Route6_BuildersHouse_EventScript_HealParty_Text_0:
# 66 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "These beds are normally only for the\n"
	.string "workers here, but it looks like you and\l"
	.string "your Pokémon could use a rest.$"

Route6_BuildersHouse_EventScript_HealParty_Text_1:
# 69 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "Go get 'em!$"

Route6_BuildersHouse_EventScript_Music_Text_0:
# 80 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "Why is it always so difficult to pick\n"
	.string "something to listen to?$"

Route6_BuildersHouse_Text_GarrisonIntro::
# 12 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "I like to keep my Pokémon in top\n"
	.string "physical shape.$"

Route6_BuildersHouse_Text_GarrisonOutro::
# 16 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "Maybe I need to get in top physical\n"
	.string "shape myself.$"

Route6_BuildersHouse_Text_GarrisonPostBattle::
# 20 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "I bet the rest of the workers around\n"
	.string "here want to battle too!$"

Route6_BuildersHouse_Text_MarcIntro::
# 31 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "I only worked about three hours today,\n"
	.string "I need some excitement!$"

Route6_BuildersHouse_Text_MarcOutro::
# 35 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "Please don't tell anyone how little I\n"
	.string "worked.$"

Route6_BuildersHouse_Text_MarcPostBattle::
# 39 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "The beds in here are so comfy.$"

Route6_BuildersHouse_Text_JeffIntro::
# 50 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "My Pokémon just evolved through hard\n"
	.string "work!$"

Route6_BuildersHouse_Text_JeffOutro::
# 54 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "Maybe it'll continue to get even\n"
	.string "stronger.$"

Route6_BuildersHouse_Text_JeffPostBattle::
# 58 "data/maps/Route6_BuildersHouse/scripts.pory"
	.string "It's nice working so close to the sea.$"
