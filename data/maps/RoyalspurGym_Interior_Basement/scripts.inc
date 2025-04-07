RoyalspurGym_Interior_Basement_MapScripts::
	.byte 0


RoyalspurGym_EventScript_Raikov::
# 6 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	trainerbattle_single TRAINER_SPENSER, RoyalspurGym_Text_RaikovIntro, RoyalspurGym_Text_RaikovOutro, RoyalspurGym_EventScript_RaikovDefeated
# 9 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, RoyalspurGym_EventScript_GiveShockWave
# 10 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	msgbox RoyalspurGym_Text_RaikovPostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	release
	end


RoyalspurGym_EventScript_RaikovDefeated::
# 28 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	msgbox RoyalspurGym_Text_ReceivedCitrineStone, MSGBOX_DEFAULT
# 29 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	waitmessage
# 30 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 31 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	msgbox RoyalspurGym_Text_CitrineStoneInfoTakeThis, MSGBOX_DEFAULT
# 32 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	setflag FLAG_DEFEATED_ROYALSPUR_GYM
# 33 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	setflag FLAG_BADGE02_GET
# 34 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 6
# 35 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	setvar VAR_0x8008, 1
# 36 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	goto RoyalspurGym_EventScript_GiveShockWave
	end


RoyalspurGym_EventScript_GiveShockWave::
# 51 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	giveitem ITEM_TM34
# 52 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 53 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 54 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	msgbox RoyalspurGym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 55 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	closemessage
# 56 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	release
	end


RoyalspurGym_Text_RaikovIntro::
# 15 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "Ahh, the fated challenger has finally\n"
	.string "come! I can already see you've got the\l"
	.string "spark of a true trainer.\p"
	.string "Raikov, Commander of the Storms is what\n"
	.string "they call me! Electric Pokémon weild a\l"
	.string "power unlike any other, don't ya think?\p"
	.string "However, power alone doesn't get you\n"
	.string "far...\p"
	.string "...let's see if you've got the control to\n"
	.string "handle the storm!$"

RoyalspurGym_Text_RaikovOutro::
# 22 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "Hah! That was one electrifying match!\n"
	.string "You remind me of my younger days...full\l"
	.string "of energy, ready to take on the world!\p"
	.string "It's my honor to give you this CITRINE\n"
	.string "STONE.$"

RoyalspurGym_Text_ReceivedCitrineStone::
# 40 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "{PLAYER} received the CITRINE STONE\n"
	.string "from Raikov!$"

RoyalspurGym_Text_CitrineStoneInfoTakeThis::
# 44 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "The CITRINE STONE makes all Pokémon up\n"
	.string "to level 40 obey without question.\p"
	.string "You'll also be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "Here, this TM will also serve you well.$"

RoyalspurGym_Text_ExplainShockWave::
# 60 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "That TM contains the moves SHOCK WAVE.\p"
	.string "It's an accurate and powerful\n"
	.string "Electric-type move that your\l"
	.string "opponents will never avoid!\p"
	.string "I have informed Barlow in Bravefort\n"
	.string "Town that he should expect your\l"
	.string "challenge soon.\p"
	.string "Travel safe and be well, young one!$"

RoyalspurGym_Text_RaikovPostBattle::
# 67 "data/maps/RoyalspurGym_Interior_Basement/scripts.pory"
	.string "Keep that spark alive, young one. One\n"
	.string "day, you just might shine brighter than\l"
	.string "the legends themselves.$"
