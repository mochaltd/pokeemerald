BravefortTown_Sewers_MapScripts::
	.byte 0


BravefortTown_Sewers_EventScript_Joseph::
# 6 "data/maps/BravefortTown_Sewers/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, BravefortTown_Sewers_Text_JosephIntro, BravefortTown_Sewers_Text_JosephOutro
# 7 "data/maps/BravefortTown_Sewers/scripts.pory"
	msgbox BravefortTown_Sewers_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/BravefortTown_Sewers/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_EventScript_Marcos::
# 25 "data/maps/BravefortTown_Sewers/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, BravefortTown_Sewers_Text_MarcosIntro, BravefortTown_Sewers_Text_MarcosOutro
# 26 "data/maps/BravefortTown_Sewers/scripts.pory"
	msgbox BravefortTown_Sewers_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/BravefortTown_Sewers/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_EventScript_Fabian::
# 45 "data/maps/BravefortTown_Sewers/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, BravefortTown_Sewers_Text_FabianIntro, BravefortTown_Sewers_Text_FabianOutro
# 46 "data/maps/BravefortTown_Sewers/scripts.pory"
	msgbox BravefortTown_Sewers_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/BravefortTown_Sewers/scripts.pory"
	waitmessage
	end


BravefortTown_Sewers_EventScript_Antidotes::
# 65 "data/maps/BravefortTown_Sewers/scripts.pory"
	lock
# 66 "data/maps/BravefortTown_Sewers/scripts.pory"
	removeobject 1
# 67 "data/maps/BravefortTown_Sewers/scripts.pory"
	giveitem ITEM_ANTIDOTE, 3
# 68 "data/maps/BravefortTown_Sewers/scripts.pory"
	release
	return


BravefortTown_Sewers_Text_JosephIntro::
# 12 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Where did you come from?$"

BravefortTown_Sewers_Text_JosephOutro::
# 16 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "I hope you aren't with those guys who\n"
	.string "came through here earlier.$"

BravefortTown_Sewers_Text_JosephPostBattle::
# 20 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "I'm just trying to get through my shift.$"

BravefortTown_Sewers_Text_MarcosIntro::
# 31 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Luckily my QUAGSIRE doesn't mind\n"
	.string "getting into the sewer water.\p"
	.string "It's a great battler too!$"

BravefortTown_Sewers_Text_MarcosOutro::
# 36 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "I just wish it smelled a little bit\n"
	.string "better down here...$"

BravefortTown_Sewers_Text_MarcosPostBattle::
# 40 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Someday, if I work hard enough, I'll get\n"
	.string "promoted to jobs on the surface!$"

BravefortTown_Sewers_Text_FabianIntro::
# 51 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Those guys that came through hurt my\n"
	.string "Pokémon's confidence.\p"
	.string "I need to get it back up to finish my\n"
	.string "shift!$"

BravefortTown_Sewers_Text_FabianOutro::
# 56 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Maybe I should just take the rest of\n"
	.string "the day off.$"

BravefortTown_Sewers_Text_FabianPostBattle::
# 60 "data/maps/BravefortTown_Sewers/scripts.pory"
	.string "Be careful, those guys were strong.$"
