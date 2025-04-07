Route2_GardenerHouse_MapScripts::
	.byte 0


Route2_GardenerHouse_Gardener::
# 6 "data/maps/Route2_GardenerHouse/scripts.pory"
	call_if_unset FLAG_RECEIVED_BERRY_JUICE, Route2_GardenerHouse_GardenerJuice
# 7 "data/maps/Route2_GardenerHouse/scripts.pory"
	call_if_set FLAG_RECEIVED_BERRY_JUICE, Route2_GardenerHouse_GardenerGoodLuck
	return


Route2_GardenerHouse_GardenerJuice::
# 11 "data/maps/Route2_GardenerHouse/scripts.pory"
	applymovement 1, Route2_GardenerHouse_GardenerJuice_Movement_0
# 12 "data/maps/Route2_GardenerHouse/scripts.pory"
	waitmovement 1
# 13 "data/maps/Route2_GardenerHouse/scripts.pory"
	msgbox Route2_GardenerHouse_GardenerJuice_Text_0
# 15 "data/maps/Route2_GardenerHouse/scripts.pory"
	closemessage
# 16 "data/maps/Route2_GardenerHouse/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 17 "data/maps/Route2_GardenerHouse/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_JUICE
# 18 "data/maps/Route2_GardenerHouse/scripts.pory"
	release
	return


Route2_GardenerHouse_GardenerGoodLuck::
# 22 "data/maps/Route2_GardenerHouse/scripts.pory"
	lock
# 23 "data/maps/Route2_GardenerHouse/scripts.pory"
	applymovement 1, Route2_GardenerHouse_GardenerJuice_Movement_0
# 24 "data/maps/Route2_GardenerHouse/scripts.pory"
	waitmovement 1
# 25 "data/maps/Route2_GardenerHouse/scripts.pory"
	msgbox Route2_GardenerHouse_GardenerGoodLuck_Text_0
# 26 "data/maps/Route2_GardenerHouse/scripts.pory"
	closemessage
# 27 "data/maps/Route2_GardenerHouse/scripts.pory"
	release
	return


# 11 "data/maps/Route2_GardenerHouse/scripts.pory"
Route2_GardenerHouse_GardenerJuice_Movement_0:
# 11 "data/maps/Route2_GardenerHouse/scripts.pory"
	face_player
	step_end

Route2_GardenerHouse_GardenerJuice_Text_0:
# 13 "data/maps/Route2_GardenerHouse/scripts.pory"
	.string "Even Shivervale Town can be a little too\n"
	.string "busy for me, which is why I enjoy my\l"
	.string "gardening on Route 2.\p"
	.string "Oh, look at your Pokémon! I've never\n"
	.string "seen one like that. Here, this is a little\l"
	.string "something to give them. I made it\l"
	.string "myself!$"

Route2_GardenerHouse_GardenerGoodLuck_Text_0:
# 25 "data/maps/Route2_GardenerHouse/scripts.pory"
	.string "Good luck out there!$"
