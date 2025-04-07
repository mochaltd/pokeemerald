Route4_RestHouse_MapScripts::
	.byte 0


Route4_RestHouse_EventScript_HealParty::
# 6 "data/maps/Route4_RestHouse/scripts.pory"
	lock
# 7 "data/maps/Route4_RestHouse/scripts.pory"
	applymovement 1, Route4_RestHouse_EventScript_HealParty_Movement_0
# 8 "data/maps/Route4_RestHouse/scripts.pory"
	waitmovement 1
# 9 "data/maps/Route4_RestHouse/scripts.pory"
	msgbox Route4_RestHouse_EventScript_HealParty_Text_0
# 10 "data/maps/Route4_RestHouse/scripts.pory"
	closemessage
# 11 "data/maps/Route4_RestHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 12 "data/maps/Route4_RestHouse/scripts.pory"
	msgbox Route4_RestHouse_EventScript_HealParty_Text_1
# 13 "data/maps/Route4_RestHouse/scripts.pory"
	applymovement 1, Route4_RestHouse_EventScript_HealParty_Movement_1
# 14 "data/maps/Route4_RestHouse/scripts.pory"
	waitmovement 1
# 15 "data/maps/Route4_RestHouse/scripts.pory"
	closemessage
# 16 "data/maps/Route4_RestHouse/scripts.pory"
	release
	return


# 7 "data/maps/Route4_RestHouse/scripts.pory"
Route4_RestHouse_EventScript_HealParty_Movement_0:
# 7 "data/maps/Route4_RestHouse/scripts.pory"
	face_player
	step_end

# 13 "data/maps/Route4_RestHouse/scripts.pory"
Route4_RestHouse_EventScript_HealParty_Movement_1:
# 13 "data/maps/Route4_RestHouse/scripts.pory"
	face_original_direction
	step_end

Route4_RestHouse_EventScript_HealParty_Text_0:
# 9 "data/maps/Route4_RestHouse/scripts.pory"
	.string "You and your Pokémon look like you've\n"
	.string "been traveling for a while. Please, lie\l"
	.string "down and rest.$"

Route4_RestHouse_EventScript_HealParty_Text_1:
# 12 "data/maps/Route4_RestHouse/scripts.pory"
	.string "Best of luck!$"
