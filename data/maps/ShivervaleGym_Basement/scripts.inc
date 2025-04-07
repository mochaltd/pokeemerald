ShivervaleGym_Basement_MapScripts::
	.byte 0


Shivervale_Gym_EventScript_Lucy::
# 6 "data/maps/ShivervaleGym_Basement/scripts.pory"
	trainerbattle_single TRAINER_LUCY, ShivervaleTown_Gym_Text_LucyIntro, ShivervaleTown_Gym_Text_LucyOutro, Shivervale_Gym_EventScript_LucyDefeated
# 9 "data/maps/ShivervaleGym_Basement/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_THIEF, Shivervale_Gym_EventScript_GiveThief
# 10 "data/maps/ShivervaleGym_Basement/scripts.pory"
	msgbox Shivervale_Gym_Text_LucyPostBattle, MSGBOX_DEFAULT
# 11 "data/maps/ShivervaleGym_Basement/scripts.pory"
	release
	end


Shivervale_Gym_EventScript_LucyDefeated::
# 29 "data/maps/ShivervaleGym_Basement/scripts.pory"
	msgbox Shivervale_Gym_Text_ReceivedObsidianStone, MSGBOX_DEFAULT
# 30 "data/maps/ShivervaleGym_Basement/scripts.pory"
	waitmessage
# 31 "data/maps/ShivervaleGym_Basement/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 32 "data/maps/ShivervaleGym_Basement/scripts.pory"
	msgbox Shivervale_Gym_Text_ObsidianStoneInfoTakeThis, MSGBOX_DEFAULT
# 33 "data/maps/ShivervaleGym_Basement/scripts.pory"
	setflag FLAG_DEFEATED_SHIVERVALE_GYM
# 34 "data/maps/ShivervaleGym_Basement/scripts.pory"
	setflag FLAG_BADGE01_GET
# 35 "data/maps/ShivervaleGym_Basement/scripts.pory"
	setvar VAR_SHIVERVALE_TOWN_STATE, 3
# 36 "data/maps/ShivervaleGym_Basement/scripts.pory"
	setvar VAR_0x8008, 1
# 37 "data/maps/ShivervaleGym_Basement/scripts.pory"
	goto Shivervale_Gym_EventScript_GiveThief
	end


Shivervale_Gym_EventScript_GiveThief::
# 52 "data/maps/ShivervaleGym_Basement/scripts.pory"
	giveitem ITEM_TM46
# 53 "data/maps/ShivervaleGym_Basement/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/ShivervaleGym_Basement/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 55 "data/maps/ShivervaleGym_Basement/scripts.pory"
	msgbox Shivervale_Gym_Text_ExplainThief, MSGBOX_DEFAULT
# 56 "data/maps/ShivervaleGym_Basement/scripts.pory"
	closemessage
# 57 "data/maps/ShivervaleGym_Basement/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 58 "data/maps/ShivervaleGym_Basement/scripts.pory"
	msgbox Shivervale_Gym_EventScript_GiveThief_Text_0
# 59 "data/maps/ShivervaleGym_Basement/scripts.pory"
	release
	end


Shivervale_Gym_EventScript_GiveThief_Text_0:
# 58 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "Be careful out there.$"

ShivervaleTown_Gym_Text_LucyIntro::
# 15 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "So...it seems the trials of the League\n"
	.string "of Eight have begun. I was wondering if\l"
	.string "this day would ever come.\p"
	.string "I am Selene, a member of the League of\n"
	.string "Eight, which helped end the War of Time\l"
	.string "200 years ago.\p"
	.string "I am not the real Selene standing\n"
	.string "before you, but an avatar of my past\l"
	.string "self.\p"
	.string "Myself and the rest of the League of\n"
	.string "Eight were placed in these temples in\l"
	.string "the event a new trainer would need to\l"
	.string "be prepared for a great threat.\p"
	.string "Will you be that trainer? Show me what\n"
	.string "you've got!$"

ShivervaleTown_Gym_Text_LucyOutro::
# 23 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "I see...another young trainer that\n"
	.string "shows promise.\p"
	.string "It is an honor to bestow upon you the\n"
	.string "OBSIDIAN STONE.$"

Shivervale_Gym_Text_ReceivedObsidianStone::
# 41 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "{PLAYER} received the OBSIDIAN\n"
	.string "STONE from Selene!$"

Shivervale_Gym_Text_ObsidianStoneInfoTakeThis::
# 45 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "The OBSIDIAN STONE heightens the\n"
	.string "ATTACK power of your Pokémon.\p"
	.string "It also enables you to use the HM move\n"
	.string "CUT outside of battle.\p"
	.string "Please, take this with you too.$"

Shivervale_Gym_Text_ExplainThief::
# 63 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "That TM, or Technical Machine, contains\n"
	.string "the moves THIEF.\p"
	.string "Not only does it inflict damage to\n"
	.string "Pokémon, but may also steal the foe's\l"
	.string "held item.\p"
	.string "If you use the TM, it will instantly\n"
	.string "teach the move to any Pokémon that can\l"
	.string "learn it.\p"
	.string "Also, TMs can be used multiple times,\n"
	.string "make sure to use it the best that you\l"
	.string "can.\p"
	.string "...\p"
	.string "It's strange...we haven't been summoned\n"
	.string "in almost 200 years, and there have now\l"
	.string "been two trainers that have begun the\l"
	.string "trials.\p"
	.string "Let me heal your Pokémon before you go.$"

Shivervale_Gym_Text_LucyPostBattle::
# 73 "data/maps/ShivervaleGym_Basement/scripts.pory"
	.string "You show great promise, trainer.\p"
	.string "Continue your travels and grow\n"
	.string "stronger. I worry what it means for\l"
	.string "Shizen if we have been summoned.$"
