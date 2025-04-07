RoyalspurCity_BikeShop_MapScripts::
	.byte 0


RoyalspurCity_BikeShop_EventScript_ShopOwner::
# 6 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, EnjoyBike
# 7 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BIKE_VOUCHER, BikeSoldOut
# 8 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE_VOUCHER, GiveBike
	return


BikeSoldOut::
# 12 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	lock
# 13 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_0
# 14 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 15 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	msgbox BikeSoldOut_Text_0
# 16 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_1
# 17 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 18 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	closemessage
# 19 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	release
	return


GiveBike::
# 23 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	lock
# 24 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_0
# 25 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 26 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	msgbox GiveBike_Text_0
# 30 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	closemessage
# 31 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	giveitem ITEM_BICYCLE
# 32 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 33 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 34 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_1
# 35 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 36 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	closemessage
# 37 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	release
	return


EnjoyBike::
# 41 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	lock
# 42 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_0
# 43 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 44 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	msgbox EnjoyBike_Text_0
# 45 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	applymovement 1, BikeSoldOut_Movement_1
# 46 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	waitmovement 1
# 47 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	closemessage
# 48 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	release
	return


# 13 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
BikeSoldOut_Movement_0:
# 13 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	face_player
	step_end

# 16 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
BikeSoldOut_Movement_1:
# 16 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	face_original_direction
	step_end

BikeSoldOut_Text_0:
# 15 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	.string "Oh, hello! Were you looking for a bike?\n"
	.string "I'm sorry, they're all sold out right now.\l"
	.string "Please come back later.$"

GiveBike_Text_0:
# 26 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	.string "Oh, hello! Were you looking for a bike?\n"
	.string "I'm sorry, they're all sold out right now.\l"
	.string "Please come back later.\p"
	.string "...\l"
	.string "...\p"
	.string "Oh, that's the Mayor's BIKE VOUCHER!\n"
	.string "She asked me to hold onto this for her\l"
	.string "but it looks like it's yours now!$"

EnjoyBike_Text_0:
# 44 "data/maps/RoyalspurCity_BikeShop/scripts.pory"
	.string "Enjoy your bike!$"
