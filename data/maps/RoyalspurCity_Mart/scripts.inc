RoyalspurCity_Mart_MapScripts::
	.byte 0


RoyalspurCity_Mart_EventScript_Clerk::
# 6 "data/maps/RoyalspurCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 1, RoyalspurCity_Mart_EventScript_Clerk_Movement_0
# 8 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Clerk_Text_0
# 10 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/RoyalspurCity_Mart/scripts.pory"
	pokemart 0
# 12 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Clerk_Text_1
# 13 "data/maps/RoyalspurCity_Mart/scripts.pory"
	closemessage
# 14 "data/maps/RoyalspurCity_Mart/scripts.pory"
	release
	end


RoyalspurCity_Mart_Gentleman::
# 38 "data/maps/RoyalspurCity_Mart/scripts.pory"
	lock
# 39 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 2, RoyalspurCity_Mart_EventScript_Clerk_Movement_0
# 40 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 2
# 41 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_Gentleman_Text_0
# 42 "data/maps/RoyalspurCity_Mart/scripts.pory"
	closemessage
# 43 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 2, RoyalspurCity_Mart_Gentleman_Movement_0
# 44 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 2
# 45 "data/maps/RoyalspurCity_Mart/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
RoyalspurCity_Mart_EventScript_Clerk_Movement_0:
# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
	face_player
	step_end

# 43 "data/maps/RoyalspurCity_Mart/scripts.pory"
RoyalspurCity_Mart_Gentleman_Movement_0:
# 43 "data/maps/RoyalspurCity_Mart/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_Mart_EventScript_Clerk_Text_0:
# 9 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Welcome! How may I serve you?$"

RoyalspurCity_Mart_EventScript_Clerk_Text_1:
# 12 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Please come again!$"

RoyalspurCity_Mart_Gentleman_Text_0:
# 41 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Why are there so many options of the\n"
	.string "same thing? I can't tell the difference!$"
