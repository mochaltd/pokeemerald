BravefortTown_OneSeaTower_Rooms_MapScripts::
	.byte 0


BravefortTown_OneSeaTower_Rooms_EventScript_Colton::
# 6 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, BravefortTown_OneSeaTower_Rooms_Text_ColtonIntro, BravefortTown_OneSeaTower_Rooms_Text_ColtonOutro
# 7 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Thomas::
# 25 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, BravefortTown_OneSeaTower_Rooms_Text_ThomasIntro, BravefortTown_OneSeaTower_Rooms_Text_ThomasOutro
# 26 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Blackglasses::
# 44 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	call_if_unset FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses
# 45 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	call_if_set FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES, BravefortTown_OneSeaTower_Rooms_EventScript_Taste
	return


BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses::
# 49 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 50 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	applymovement 3, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0
# 51 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmovement 3
# 52 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Text_0
# 54 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 55 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES
# 56 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 57 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Rooms_EventScript_Taste::
# 61 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 62 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	applymovement 3, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0
# 63 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmovement 3
# 64 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_EventScript_Taste_Text_0
# 65 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 66 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Rooms_EventScript_Edmond::
# 70 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, BravefortTown_OneSeaTower_Rooms_Text_EdmondIntro, BravefortTown_OneSeaTower_Rooms_Text_EdmondOutro
# 71 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Rest::
# 89 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 90 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	applymovement 7, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0
# 91 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmovement 7
# 92 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_EventScript_Rest_Text_0
# 93 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 94 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Rooms_EventScript_Paxton::
# 98 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_PAXTON, BravefortTown_OneSeaTower_Rooms_Text_PaxtonIntro, BravefortTown_OneSeaTower_Rooms_Text_PaxtonOutro
# 99 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_PaxtonPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Vicky::
# 117 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_VICKY, BravefortTown_OneSeaTower_Rooms_Text_VickyIntro, BravefortTown_OneSeaTower_Rooms_Text_VickyOutro
# 118 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_VickyPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Micah::
# 136 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, BravefortTown_OneSeaTower_Rooms_Text_MicahIntro, BravefortTown_OneSeaTower_Rooms_Text_MicahOutro
# 137 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


DoorLocked::
# 156 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 157 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox DoorLocked_Text_0
# 158 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 159 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Rooms_EventScript_Garret::
# 163 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, BravefortTown_OneSeaTower_Rooms_Text_GarretIntro, BravefortTown_OneSeaTower_Rooms_Text_GarretOutro
# 164 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_OneSeaTower_Rooms_EventScript_Calcium::
# 183 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 184 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	applymovement 10, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0
# 185 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmovement 10
# 186 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_EventScript_Calcium_Text_0
# 187 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 188 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_OneSeaTower_Rooms_EventScript_LittleGirl::
# 192 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	lock
# 193 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	applymovement 11, BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0
# 194 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	waitmovement 11
# 195 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_OneSeaTower_Rooms_EventScript_LittleGirl_Text_0
# 196 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	closemessage
# 197 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	release
	return


# 50 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Movement_0:
# 50 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	face_player
	step_end

BravefortTown_OneSeaTower_Rooms_EventScript_GiveBlackglasses_Text_0:
# 52 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Don't you think the decoration in here\n"
	.string "is a little tacky?\p"
	.string "I'm glad you agree, you deserve these\n"
	.string "for your keen sense of taste.$"

BravefortTown_OneSeaTower_Rooms_EventScript_Taste_Text_0:
# 64 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "You have great taste!$"

BravefortTown_OneSeaTower_Rooms_EventScript_Rest_Text_0:
# 92 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "This is a resting room. Feel free to lie\n"
	.string "down on the bed for a bit.$"

DoorLocked_Text_0:
# 157 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "The door is locked.$"

BravefortTown_OneSeaTower_Rooms_EventScript_Calcium_Text_0:
# 186 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "I wish my kid would eat their food\n"
	.string "instead of throwing it in the trash.$"

BravefortTown_OneSeaTower_Rooms_EventScript_LittleGirl_Text_0:
# 195 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Milk is gross!$"

BravefortTown_OneSeaTower_Rooms_Text_ColtonIntro::
# 12 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "I love hanging out with my Pokémon!$"

BravefortTown_OneSeaTower_Rooms_Text_ColtonOutro::
# 16 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "That was an enjoyable match!$"

BravefortTown_OneSeaTower_Rooms_Text_ColtonPostBattle::
# 20 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Did you know they built these rooms\n"
	.string "specifically to be able to battle in\l"
	.string "them?$"

BravefortTown_OneSeaTower_Rooms_Text_ThomasIntro::
# 31 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Child...did you knock on the door?$"

BravefortTown_OneSeaTower_Rooms_Text_ThomasOutro::
# 35 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "A loss is to be accepted without panic\n"
	.string "or haste.$"

BravefortTown_OneSeaTower_Rooms_Text_ThomasPostBattle::
# 39 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "To never be ruffled in any situation is\n"
	.string "the gentleman's code!$"

BravefortTown_OneSeaTower_Rooms_Text_EdmondIntro::
# 76 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Aha! I caught you in my net!$"

BravefortTown_OneSeaTower_Rooms_Text_EdmondOutro::
# 80 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "You wriggled free...$"

BravefortTown_OneSeaTower_Rooms_Text_EdmondPostBattle::
# 84 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "To always be near the ocean is the\n"
	.string "dream!$"

BravefortTown_OneSeaTower_Rooms_Text_PaxtonIntro::
# 104 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "My wife and I retired here and we need\n"
	.string "some excitement!$"

BravefortTown_OneSeaTower_Rooms_Text_PaxtonOutro::
# 108 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "What an excellent match!$"

BravefortTown_OneSeaTower_Rooms_Text_PaxtonPostBattle::
# 112 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Such young spirit, it is truly a gift.$"

BravefortTown_OneSeaTower_Rooms_Text_VickyIntro::
# 123 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Don't tell my husband, but I'm a\n"
	.string "stronger trainer than him.$"

BravefortTown_OneSeaTower_Rooms_Text_VickyOutro::
# 127 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "You might be stronger than both of us!$"

BravefortTown_OneSeaTower_Rooms_Text_VickyPostBattle::
# 131 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Battling keeps my youthful spirit alive.$"

BravefortTown_OneSeaTower_Rooms_Text_MicahIntro::
# 142 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Are your friends strong?$"

BravefortTown_OneSeaTower_Rooms_Text_MicahOutro::
# 146 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"

BravefortTown_OneSeaTower_Rooms_Text_MicahPostBattle::
# 150 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Friends need not be human.\n"
	.string "For me, Pokémon are treasured friends!$"

BravefortTown_OneSeaTower_Rooms_Text_GarretIntro::
# 169 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "Oh...\p"
	.string "You definitely don't belong here.$"

BravefortTown_OneSeaTower_Rooms_Text_GarretOutro::
# 174 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "I was distracted by your look.$"

BravefortTown_OneSeaTower_Rooms_Text_GarretPostBattle::
# 178 "data/maps/BravefortTown_OneSeaTower_Rooms/scripts.pory"
	.string "I will have a word with my landlord about\n"
	.string "who they let in.$"
