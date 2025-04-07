RoyalspurTunnel_MapScripts::
	.byte 0


RoyalspurTunnel_EventScript_Chip::
# 6 "data/maps/RoyalspurTunnel/scripts.pory"
	trainerbattle_single TRAINER_CHIP, RoyalspurTunnel_Text_ChipIntro, RoyalspurTunnel_Text_ChipOutro
# 7 "data/maps/RoyalspurTunnel/scripts.pory"
	msgbox RoyalspurTunnel_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/RoyalspurTunnel/scripts.pory"
	waitmessage
	end


RoyalspurTunnel_EventScript_Zander::
# 25 "data/maps/RoyalspurTunnel/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, RoyalspurTunnel_Text_ZanderIntro, RoyalspurTunnel_Text_ZanderOutro
# 26 "data/maps/RoyalspurTunnel/scripts.pory"
	msgbox RoyalspurTunnel_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RoyalspurTunnel/scripts.pory"
	waitmessage
	end


RoyalspurTunnel_Text_ChipIntro::
# 12 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "Watch out, you'll ruin my dig site!$"

RoyalspurTunnel_Text_ChipOutro::
# 16 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "I lost my concentration.$"

RoyalspurTunnel_Text_ChipPostBattle::
# 20 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "I know there's hidden treasure in here,\n"
	.string "I just know it!$"

RoyalspurTunnel_Text_ZanderIntro::
# 31 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "My Pokémon and I got those rocks\n"
	.string "cleared, but now we want to battle!$"

RoyalspurTunnel_Text_ZanderOutro::
# 35 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "Maybe we should have asked your\n"
	.string "Pokémon for help.$"

RoyalspurTunnel_Text_ZanderPostBattle::
# 39 "data/maps/RoyalspurTunnel/scripts.pory"
	.string "Did you know that sometimes Pokémon\n"
	.string "can hide in breakable rocks?\p"
	.string "I wish mine were strong enough to break\n"
	.string "them.$"
