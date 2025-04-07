ShivervaleTown_DrinkShop_MapScripts::
	.byte 0


ShivervaleTown_DrinkShop_EventScript_Clerk::
# 6 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	lock
# 7 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	applymovement 1, ShivervaleTown_DrinkShop_EventScript_Clerk_Movement_0
# 8 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	msgbox ShivervaleTown_DrinkShop_EventScript_Clerk_Text_0
# 10 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	waitmessage
# 11 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	pokemart ShivervaleTown_Mart_DrinkShop
# 12 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	msgbox ShivervaleTown_DrinkShop_EventScript_Clerk_Text_1
# 13 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	closemessage
# 14 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
ShivervaleTown_Mart_DrinkShop:
# 19 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 20 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.2byte ITEM_LEMONADE
# 21 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.2byte ITEM_SODA_POP
	.2byte ITEM_NONE

ShivervaleTown_DrinkShop_EventScript_Boy::
# 26 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	lock
# 27 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	applymovement 2, ShivervaleTown_DrinkShop_EventScript_Clerk_Movement_0
# 28 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	waitmovement 2
# 29 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	msgbox ShivervaleTown_DrinkShop_EventScript_Boy_Text_0
# 30 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	closemessage
# 31 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	applymovement 2, ShivervaleTown_DrinkShop_EventScript_Boy_Movement_0
# 32 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	waitmovement 2
# 33 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	release
	return


# 7 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
ShivervaleTown_DrinkShop_EventScript_Clerk_Movement_0:
# 7 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	face_player
	step_end

# 31 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
ShivervaleTown_DrinkShop_EventScript_Boy_Movement_0:
# 31 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_DrinkShop_EventScript_Clerk_Text_0:
# 9 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.string "Welcome! How may I serve you?$"

ShivervaleTown_DrinkShop_EventScript_Clerk_Text_1:
# 12 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.string "Please come again!$"

ShivervaleTown_DrinkShop_EventScript_Boy_Text_0:
# 29 "data/maps/ShivervaleTown_DrinkShop/scripts.pory"
	.string "This shop always serves the most\n"
	.string "refreshing drinks. I love coming here on\l"
	.string "warm days!$"
