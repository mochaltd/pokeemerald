EvergreenForest_House_MapScripts::
	.byte 0


EvergreenForest_House_EventScript_SetupPhantump::
# 6 "data/maps/EvergreenForest_House/scripts.pory"
	call_if_set FLAG_TALKED_OLD_WOMAN, EvergreenForest_House_EventScript_Phantump
# 7 "data/maps/EvergreenForest_House/scripts.pory"
	call_if_unset FLAG_TALKED_OLD_WOMAN, EvergreenForest_House_EventScript_PhantumpCry
	return


EvergreenForest_House_EventScript_OldWoman::
# 11 "data/maps/EvergreenForest_House/scripts.pory"
	lock
# 12 "data/maps/EvergreenForest_House/scripts.pory"
	applymovement 1, EvergreenForest_House_EventScript_OldWoman_Movement_0
# 13 "data/maps/EvergreenForest_House/scripts.pory"
	waitmovement 1
# 14 "data/maps/EvergreenForest_House/scripts.pory"
	goto_if_unset FLAG_TALKED_OLD_WOMAN, EvergreenForest_House_EventScript_OldWoman_2
# 34 "data/maps/EvergreenForest_House/scripts.pory"
	goto_if_set FLAG_TALKED_OLD_WOMAN, EvergreenForest_House_EventScript_OldWoman_3
EvergreenForest_House_EventScript_OldWoman_1:
# 38 "data/maps/EvergreenForest_House/scripts.pory"
	waitmessage
# 39 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return

EvergreenForest_House_EventScript_OldWoman_2:
# 15 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_0
# 22 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_1, MSGBOX_YESNO
# 24 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenForest_House_EventScript_OldWoman_6
# 31 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_3
	goto EvergreenForest_House_EventScript_OldWoman_1

EvergreenForest_House_EventScript_OldWoman_3:
# 35 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_4
# 36 "data/maps/EvergreenForest_House/scripts.pory"
	closemessage
	goto EvergreenForest_House_EventScript_OldWoman_1

EvergreenForest_House_EventScript_OldWoman_6:
# 26 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_2
# 27 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_TALKED_OLD_WOMAN
	goto EvergreenForest_House_EventScript_OldWoman_1


EvergreenForest_House_EventScript_Phantump::
# 43 "data/maps/EvergreenForest_House/scripts.pory"
	lock
# 44 "data/maps/EvergreenForest_House/scripts.pory"
	applymovement 2, EvergreenForest_House_EventScript_OldWoman_Movement_0
# 45 "data/maps/EvergreenForest_House/scripts.pory"
	waitmovement 2
# 46 "data/maps/EvergreenForest_House/scripts.pory"
	showmonpic SPECIES_PHANTUMP, 10, 3
# 47 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_0, MSGBOX_YESNO
# 48 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenForest_House_EventScript_Phantump_2
# 71 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 72 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_2
EvergreenForest_House_EventScript_Phantump_1:
# 74 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return

EvergreenForest_House_EventScript_Phantump_2:
# 50 "data/maps/EvergreenForest_House/scripts.pory"
	givemon SPECIES_PHANTUMP, 10
# 51 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenForest_House_EventScript_Phantump_5
# 60 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenForest_House_EventScript_Phantump_6
	goto EvergreenForest_House_EventScript_Phantump_1

EvergreenForest_House_EventScript_Phantump_5:
# 53 "data/maps/EvergreenForest_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_1
# 55 "data/maps/EvergreenForest_House/scripts.pory"
	removeobject 2
# 56 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_RECEIVED_PHANTUMP
# 57 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 58 "data/maps/EvergreenForest_House/scripts.pory"
	call NicknamePhantumpPartyMon
	goto EvergreenForest_House_EventScript_Phantump_1

EvergreenForest_House_EventScript_Phantump_6:
# 62 "data/maps/EvergreenForest_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_1
# 64 "data/maps/EvergreenForest_House/scripts.pory"
	removeobject 2
# 65 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_RECEIVED_PHANTUMP
# 66 "data/maps/EvergreenForest_House/scripts.pory"
	call NicknamePhantumpBoxMon
	goto EvergreenForest_House_EventScript_Phantump_1


NicknamePhantumpPartyMon::
# 78 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox NicknamePhantumpPartyMon_Text_0, MSGBOX_YESNO
# 79 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 80 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePhantumpPartyMon_1
	return

NicknamePhantumpPartyMon_1:
# 81 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 82 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknamePhantumpBoxMon::
# 87 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox NicknamePhantumpPartyMon_Text_0, MSGBOX_YESNO
# 88 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 89 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePhantumpBoxMon_1
	return

NicknamePhantumpBoxMon_1:
# 90 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 91 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


EvergreenForest_House_EventScript_PhantumpCry::
# 96 "data/maps/EvergreenForest_House/scripts.pory"
	lock
# 97 "data/maps/EvergreenForest_House/scripts.pory"
	applymovement 2, EvergreenForest_House_EventScript_OldWoman_Movement_0
# 98 "data/maps/EvergreenForest_House/scripts.pory"
	waitmovement 2
# 99 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_PhantumpCry_Text_0
# 100 "data/maps/EvergreenForest_House/scripts.pory"
	playmoncry SPECIES_PHANTUMP, CRY_MODE_NORMAL
# 101 "data/maps/EvergreenForest_House/scripts.pory"
	waitmoncry
# 102 "data/maps/EvergreenForest_House/scripts.pory"
	closemessage
# 103 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return


# 12 "data/maps/EvergreenForest_House/scripts.pory"
EvergreenForest_House_EventScript_OldWoman_Movement_0:
# 12 "data/maps/EvergreenForest_House/scripts.pory"
	face_player
	step_end

EvergreenForest_House_EventScript_OldWoman_Text_0:
# 15 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Oh, a visitor!\p"
	.string "Excuse my surprise but I don't really\n"
	.string "get very many visitors, unless it's my\l"
	.string "granddaughter.\p"
	.string "...\l"
	.string "...\p"
	.string "You helped my granddaughter protect\n"
	.string "the shrine? You must be a very capable\l"
	.string "Pokémon trainer.\p"
	.string "You know, my PHANTUMP here has been a\n"
	.string "loyal friend for many years helping me\l"
	.string "make medicine here in my home, but\l"
	.string "lately I can sense it's getting more of\l"
	.string "an adventurous spirit.\p"
	.string "And I can sense that it trusts you\n"
	.string "after telling me you helped save my\l"
	.string "granddaughter.$"

EvergreenForest_House_EventScript_OldWoman_Text_1:
# 22 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Would you be willing to take PHANTUMP\n with you on your journey?$"

EvergreenForest_House_EventScript_OldWoman_Text_2:
# 26 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Oh, splendid! You can go talk to\n"
	.string "PHANTUMP when you're ready.$"

EvergreenForest_House_EventScript_OldWoman_Text_3:
# 31 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Oh...well that's okay. I'm sure he'll find\n"
	.string "adventure in other ways.$"

EvergreenForest_House_EventScript_OldWoman_Text_4:
# 35 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Thank you for taking PHANTUMP with\n"
	.string "you!$"

EvergreenForest_House_EventScript_Phantump_Text_0:
# 47 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Take PHANTUMP with you?$"

EvergreenForest_House_EventScript_Phantump_Text_1:
# 54 "data/maps/EvergreenForest_House/scripts.pory"
	.string "{PLAYER} received PHANTUMP!$"

EvergreenForest_House_EventScript_Phantump_Text_2:
# 72 "data/maps/EvergreenForest_House/scripts.pory"
	.string "You left PHANTUMP where he was.$"

NicknamePhantumpPartyMon_Text_0:
# 78 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Do you want to give Phantump a nickname?$"

EvergreenForest_House_EventScript_PhantumpCry_Text_0:
# 99 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Fwaaaaoooomph!$"
