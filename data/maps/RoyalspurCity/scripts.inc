RoyalspurCity_MapScripts::
# 2 "data/maps/RoyalspurCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RoyalspurCity_OnTransition
	.byte 0


RoyalspurCity_OnTransition::
# 6 "data/maps/RoyalspurCity/scripts.pory"
	setflag FLAG_VISITED_ROYALSPUR_CITY
	end


RoyalspurCity_EventScript_Man3::
# 11 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 12 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 7, RoyalspurCity_EventScript_Man3_Movement_0
# 13 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 7
# 14 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_Man3_Text_0
# 15 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 16 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_Poochyena::
# 20 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 21 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 3, RoyalspurCity_EventScript_Man3_Movement_0
# 22 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 3
# 23 "data/maps/RoyalspurCity/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 24 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_Poochyena_Text_0
# 25 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 3, RoyalspurCity_EventScript_Poochyena_Movement_0
# 26 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 3
# 27 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 28 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_Mart_EventScript_SaleWoman::
# 32 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 33 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 4, RoyalspurCity_EventScript_Man3_Movement_0
# 34 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 4
# 35 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_SaleWoman_Text_0
# 36 "data/maps/RoyalspurCity/scripts.pory"
	waitmessage
# 37 "data/maps/RoyalspurCity/scripts.pory"
	pokemart RoyalspurCity_Mart_SaleWoman
# 38 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_SaleWoman_Text_1
# 39 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 40 "data/maps/RoyalspurCity/scripts.pory"
	release
	end


	.align 2
# 44 "data/maps/RoyalspurCity/scripts.pory"
RoyalspurCity_Mart_SaleWoman:
# 45 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 46 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 47 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 48 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 49 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 50 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 51 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 52 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

RoyalspurCity_Mart_EventScript_Salesman::
# 56 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 57 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 8, RoyalspurCity_EventScript_Man3_Movement_0
# 58 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 8
# 59 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Salesman_Text_0
# 60 "data/maps/RoyalspurCity/scripts.pory"
	waitmessage
# 61 "data/maps/RoyalspurCity/scripts.pory"
	pokemart RoyalspurCity_Mart_Salesman
# 62 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Salesman_Text_1
# 63 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 64 "data/maps/RoyalspurCity/scripts.pory"
	release
	end


	.align 2
# 68 "data/maps/RoyalspurCity/scripts.pory"
RoyalspurCity_Mart_Salesman:
# 69 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 70 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_CHARCOAL
# 71 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 72 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_CARBOS
# 73 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_HP_UP
# 74 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_IRON
# 75 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 76 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_ZINC
# 77 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 78 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_X_ATTACK
# 79 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_X_DEFEND
# 80 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 81 "data/maps/RoyalspurCity/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

RoyalspurCity_EventScript_Beauty::
# 85 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 86 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 1, RoyalspurCity_EventScript_Man3_Movement_0
# 87 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 1
# 88 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_Beauty_Text_0
# 91 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 1, RoyalspurCity_EventScript_Poochyena_Movement_0
# 92 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 1
# 93 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 94 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_Gentleman::
# 98 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 99 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 2, RoyalspurCity_EventScript_Man3_Movement_0
# 100 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 2
# 101 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_Gentleman_Text_0
# 102 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 2, RoyalspurCity_EventScript_Poochyena_Movement_0
# 103 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 2
# 104 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 105 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_RichBoy::
# 109 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 110 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 6, RoyalspurCity_EventScript_Man3_Movement_0
# 111 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 6
# 112 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_RichBoy_Text_0
# 113 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 6, RoyalspurCity_EventScript_Poochyena_Movement_0
# 114 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 6
# 115 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 116 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_MayorHouseSign::
# 120 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 121 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_MayorHouseSign_Text_0
# 122 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 123 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_Gardener::
# 127 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 128 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 5, RoyalspurCity_EventScript_Man3_Movement_0
# 129 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 5
# 130 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_Gardener_Text_0
# 131 "data/maps/RoyalspurCity/scripts.pory"
	applymovement 5, RoyalspurCity_EventScript_Poochyena_Movement_0
# 132 "data/maps/RoyalspurCity/scripts.pory"
	waitmovement 5
# 133 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 134 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_TempleSign::
# 138 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 139 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_TempleSign_Text_0
# 141 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 142 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_BikeShopSign::
# 146 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 147 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_BikeShopSign_Text_0
# 148 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 149 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


RoyalspurCity_EventScript_GardenSign::
# 153 "data/maps/RoyalspurCity/scripts.pory"
	lock
# 154 "data/maps/RoyalspurCity/scripts.pory"
	msgbox RoyalspurCity_EventScript_GardenSign_Text_0
# 155 "data/maps/RoyalspurCity/scripts.pory"
	closemessage
# 156 "data/maps/RoyalspurCity/scripts.pory"
	release
	return


# 12 "data/maps/RoyalspurCity/scripts.pory"
RoyalspurCity_EventScript_Man3_Movement_0:
# 12 "data/maps/RoyalspurCity/scripts.pory"
	face_player
	step_end

# 25 "data/maps/RoyalspurCity/scripts.pory"
RoyalspurCity_EventScript_Poochyena_Movement_0:
# 25 "data/maps/RoyalspurCity/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_EventScript_Man3_Text_0:
# 14 "data/maps/RoyalspurCity/scripts.pory"
	.string "Have you been to the temple yet? It's\n"
	.string "built in honor of Raikov, the Electric\l"
	.string "Pokémon commander.$"

RoyalspurCity_EventScript_Poochyena_Text_0:
# 24 "data/maps/RoyalspurCity/scripts.pory"
	.string "Grrr-ow!$"

RoyalspurCity_Mart_EventScript_SaleWoman_Text_0:
# 35 "data/maps/RoyalspurCity/scripts.pory"
	.string "Hello! I sell berries and natural\n"
	.string "remedies that I make from my garden\l"
	.string "ingredients. Have a look!$"

RoyalspurCity_Mart_EventScript_SaleWoman_Text_1:
# 38 "data/maps/RoyalspurCity/scripts.pory"
	.string "Please come again!$"

RoyalspurCity_Mart_EventScript_Salesman_Text_0:
# 59 "data/maps/RoyalspurCity/scripts.pory"
	.string "I sell items to increase your Pokémon's\n"
	.string "power!$"

RoyalspurCity_Mart_EventScript_Salesman_Text_1:
# 62 "data/maps/RoyalspurCity/scripts.pory"
	.string "Come back soon!$"

RoyalspurCity_EventScript_Beauty_Text_0:
# 88 "data/maps/RoyalspurCity/scripts.pory"
	.string "I like coming here to buy flowers for\n"
	.string "myse...\p"
	.string "I mean...other people.\p"
	.string "I have plenty of people that buy me\n"
	.string "flowers!$"

RoyalspurCity_EventScript_Gentleman_Text_0:
# 101 "data/maps/RoyalspurCity/scripts.pory"
	.string "Every now and then, I come in here to\n"
	.string "pick flowers for my wife.$"

RoyalspurCity_EventScript_RichBoy_Text_0:
# 112 "data/maps/RoyalspurCity/scripts.pory"
	.string "My dad gave me some money to come and\n"
	.string "buy a bike for my birthday, but even the\l"
	.string "money he gave me wasn't enough...$"

RoyalspurCity_EventScript_MayorHouseSign_Text_0:
# 121 "data/maps/RoyalspurCity/scripts.pory"
	.string "The Mayor of Royalspur City$"

RoyalspurCity_EventScript_Gardener_Text_0:
# 130 "data/maps/RoyalspurCity/scripts.pory"
	.string "I work as the personal gardener for the\n"
	.string "mayor. It's amazing the variety of\l"
	.string "flowers I'm able to grow up high on this\l"
	.string "mountain!$"

RoyalspurCity_EventScript_TempleSign_Text_0:
# 139 "data/maps/RoyalspurCity/scripts.pory"
	.string "{LEFT_ARROW} Royalspur Temple\p"
	.string "In honor of Raikov, Commander of\n"
	.string "Storms.$"

RoyalspurCity_EventScript_BikeShopSign_Text_0:
# 147 "data/maps/RoyalspurCity/scripts.pory"
	.string "Rolf's Bicycle Shop$"

RoyalspurCity_EventScript_GardenSign_Text_0:
# 154 "data/maps/RoyalspurCity/scripts.pory"
	.string "Royalspur Flower Garden$"
