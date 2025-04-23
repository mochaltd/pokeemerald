BravefortGym_Interior_Basement_MapScripts::
	.byte 0


BravefortGym_Interior_Basement_Barlow::
# 6 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	call Common_EventScript_SaveGame
# 7 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	trainerbattle_single TRAINER_DRAKE, RoyalspurGym_Text_BarlowIntro, RoyalspurGym_Text_BarlowOutro, BravefortGym_Interior_Basement_BarlowDefeated
# 10 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, BravefortGym_Interior_Basement_GiveWaterPulse
# 11 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	msgbox BravefortGym_Text_BarlowPostBattle, MSGBOX_DEFAULT
# 12 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	release
	end


BravefortGym_Interior_Basement_BarlowDefeated::
# 29 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	msgbox BravefortGym_Text_ReceivedAzuriteStone, MSGBOX_DEFAULT
# 30 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	waitmessage
# 31 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 32 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	msgbox BravefortGym_Text_AzuriteStoneInfoTakeThis, MSGBOX_DEFAULT
# 33 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	setflag FLAG_DEFEATED_BRAVEFORT_GYM
# 34 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	setflag FLAG_BADGE03_GET
# 35 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 6
# 36 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	setvar VAR_0x8008, 1
# 37 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	goto BravefortGym_Interior_Basement_GiveWaterPulse
	end


BravefortGym_Interior_Basement_GiveWaterPulse::
# 52 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	giveitem ITEM_TM03
# 53 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 55 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	msgbox BravefortGym_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 56 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	closemessage
# 57 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	release
	end


RoyalspurGym_Text_BarlowIntro::
# 16 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "Har, har, har! You've done well to get\n"
	.string "here, trainer.\p"
	.string "I be Captain Barlow, Commander of the\n"
	.string "High Seas and master of Pokémon as\l"
	.string "fierce as the ocean itself!\p"
	.string "So, tell me...do ye got the guts to face\n"
	.string "the wrath of the sea? Or will ye be sent\l"
	.string "sinkin' to the depths below?\p"
	.string "Time to find out what yer made of!$"

RoyalspurGym_Text_BarlowOutro::
# 23 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "Not since my days on the high seas have\n"
	.string "I felt such a rush!\p"
	.string "I bestow upon ye this AZURITE STONE.$"

BravefortGym_Text_ReceivedAzuriteStone::
# 41 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "{PLAYER} received the AZURITE STONE\n"
	.string "from Barlow!$"

BravefortGym_Text_AzuriteStoneInfoTakeThis::
# 45 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "The AZURITE STONE makes yer Pokémon a\n"
	.string "little bit faster, as if the wind was\l"
	.string "picking up in yer sails.\p"
	.string "You'll also be able to use the HM move\n"
	.string "ROCK SMASH outside of battle.\p"
	.string "Take this TM as a gift as well.$"

BravefortGym_Text_ExplainWaterPulse::
# 61 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "Aye, that TM contains the moves WATER\n"
	.string "PULSE.\p"
	.string "It be a strong Water-type move that\n"
	.string "might send your enemies in a whirpool of\l"
	.string "confusion!\p"
	.string "Pebblehorn City should be your next\n"
	.string "stop, young sailor. Go forth with the\l"
	.string "strength of the seas!$"

BravefortGym_Text_BarlowPostBattle::
# 67 "data/maps/BravefortGym_Interior_Basement/scripts.pory"
	.string "Being a strong trainer be just the same\n"
	.string "as being a powerful sailor. Always know\l"
	.string "how to weather the storm.$"
