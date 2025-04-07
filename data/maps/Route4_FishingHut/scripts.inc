Route4_FishingHut_MapScripts::
	.byte 0


Route4_FishingHut_EventScript_Fisher1::
# 6 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 7 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 3, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 8 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 3
# 9 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox Route4_FishingHut_EventScript_Fisher1_Text_0
# 10 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 11 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


Route4_FishingHut_EventScript_FisherBill::
# 15 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 16 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 4, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 17 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 4
# 18 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox Route4_FishingHut_EventScript_FisherBill_Text_0
# 20 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 21 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


Route4_FishingHut_EventScript_HeadFisher::
# 25 "data/maps/Route4_FishingHut/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, GiveOldRod
# 26 "data/maps/Route4_FishingHut/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, GetFishing
	return


GiveOldRod::
# 30 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 31 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 5, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 32 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 5
# 33 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox GiveOldRod_Text_0
# 34 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 35 "data/maps/Route4_FishingHut/scripts.pory"
	giveitem ITEM_OLD_ROD
# 36 "data/maps/Route4_FishingHut/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 37 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


GetFishing::
# 41 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 42 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 5, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 43 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 5
# 44 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox GetFishing_Text_0
# 45 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 46 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


Route4_FishingHut_EventScript_Fisher2::
# 50 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 51 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 2, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 52 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 2
# 53 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox Route4_FishingHut_EventScript_Fisher2_Text_0
# 54 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 55 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


Route4_FishingHut_EventScript_Fisher3::
# 59 "data/maps/Route4_FishingHut/scripts.pory"
	lock
# 60 "data/maps/Route4_FishingHut/scripts.pory"
	applymovement 1, Route4_FishingHut_EventScript_Fisher1_Movement_0
# 61 "data/maps/Route4_FishingHut/scripts.pory"
	waitmovement 1
# 62 "data/maps/Route4_FishingHut/scripts.pory"
	msgbox Route4_FishingHut_EventScript_Fisher3_Text_0
# 63 "data/maps/Route4_FishingHut/scripts.pory"
	closemessage
# 64 "data/maps/Route4_FishingHut/scripts.pory"
	release
	return


# 7 "data/maps/Route4_FishingHut/scripts.pory"
Route4_FishingHut_EventScript_Fisher1_Movement_0:
# 7 "data/maps/Route4_FishingHut/scripts.pory"
	face_player
	step_end

Route4_FishingHut_EventScript_Fisher1_Text_0:
# 9 "data/maps/Route4_FishingHut/scripts.pory"
	.string "There goes Bill again, ranting and\n"
	.string "hollerin' about that supposed rare\l"
	.string "Pokémon he saw.$"

Route4_FishingHut_EventScript_FisherBill_Text_0:
# 18 "data/maps/Route4_FishingHut/scripts.pory"
	.string "I swear I saw it! Right there...floating\n"
	.string "just beneath the surface of the sea...\p"
	.string "A 20-foot-long BARBOACH! If I hadn't\n"
	.string "scared it off with my yellin', I'd be fish\l"
	.string "food I tell ya! FISH FOOD!$"

GiveOldRod_Text_0:
# 33 "data/maps/Route4_FishingHut/scripts.pory"
	.string "You look like a capable Pokémon trainer,\n"
	.string "ever thought about fishing for some\l"
	.string "new Pokémon? Now you can!$"

GetFishing_Text_0:
# 44 "data/maps/Route4_FishingHut/scripts.pory"
	.string "Get fishin'!$"

Route4_FishingHut_EventScript_Fisher2_Text_0:
# 53 "data/maps/Route4_FishingHut/scripts.pory"
	.string "You ever just sit back, cast a line, and\n"
	.string "enjoy the calm? Try it sometime!$"

Route4_FishingHut_EventScript_Fisher3_Text_0:
# 62 "data/maps/Route4_FishingHut/scripts.pory"
	.string "If you've got a SUPER ROD, you can pull\n"
	.string "up some real whoppers! Me? I'm still\l"
	.string "stuck with my OLD ROD...$"
