ShivervaleTown_Mart_MapScripts::
	.byte 0


ShivervaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 1, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 8 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_EventScript_Clerk_Text_0
# 10 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/ShivervaleTown_Mart/scripts.pory"
	pokemart 0
# 12 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_EventScript_Clerk_Text_1
# 13 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 14 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	end


ShivervaleTown_Mart_Antidote::
# 34 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 35 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 2, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 36 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 2
# 37 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_Antidote_Text_0
# 38 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 39 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 2, ShivervaleTown_Mart_Antidote_Movement_0
# 40 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 2
# 41 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	return


ShivervaleTown_Mart_Repel::
# 45 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 46 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 3, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 47 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 3
# 48 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_Repel_Text_0
# 49 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 50 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 3, ShivervaleTown_Mart_Antidote_Movement_0
# 51 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 3
# 52 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	return


# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
ShivervaleTown_Mart_EventScript_Clerk_Movement_0:
# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
	face_player
	step_end

# 39 "data/maps/ShivervaleTown_Mart/scripts.pory"
ShivervaleTown_Mart_Antidote_Movement_0:
# 39 "data/maps/ShivervaleTown_Mart/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_Mart_EventScript_Clerk_Text_0:
# 9 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Welcome! How may I serve you?$"

ShivervaleTown_Mart_EventScript_Clerk_Text_1:
# 12 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Please come again!$"

ShivervaleTown_Mart_Antidote_Text_0:
# 37 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with you? If\n"
	.string "you walk around with a poisoned\l"
	.string "Pokémon, it will lose HP until it faints.$"

ShivervaleTown_Mart_Repel_Text_0:
# 48 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Do you use REPEL? It keeps Pokémon\n"
	.string "away, so it's useful when you're in a\l"
	.string "hurry.$"
