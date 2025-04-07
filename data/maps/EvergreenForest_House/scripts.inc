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
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_0
# 21 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_1, MSGBOX_YESNO
# 23 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenForest_House_EventScript_OldWoman_2
# 30 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_3
EvergreenForest_House_EventScript_OldWoman_1:
# 32 "data/maps/EvergreenForest_House/scripts.pory"
	waitmessage
# 33 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return

EvergreenForest_House_EventScript_OldWoman_2:
# 25 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_OldWoman_Text_2
# 26 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_TALKED_OLD_WOMAN
	goto EvergreenForest_House_EventScript_OldWoman_1


EvergreenForest_House_EventScript_Phantump::
# 37 "data/maps/EvergreenForest_House/scripts.pory"
	lock
# 38 "data/maps/EvergreenForest_House/scripts.pory"
	applymovement 2, EvergreenForest_House_EventScript_OldWoman_Movement_0
# 39 "data/maps/EvergreenForest_House/scripts.pory"
	waitmovement 2
# 40 "data/maps/EvergreenForest_House/scripts.pory"
	showmonpic SPECIES_PHANTUMP, 10, 3
# 41 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_0, MSGBOX_YESNO
# 42 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenForest_House_EventScript_Phantump_2
# 65 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 66 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_2
EvergreenForest_House_EventScript_Phantump_1:
# 68 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return

EvergreenForest_House_EventScript_Phantump_2:
# 44 "data/maps/EvergreenForest_House/scripts.pory"
	givemon SPECIES_PHANTUMP, 10
# 45 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenForest_House_EventScript_Phantump_5
# 54 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenForest_House_EventScript_Phantump_6
	goto EvergreenForest_House_EventScript_Phantump_1

EvergreenForest_House_EventScript_Phantump_5:
# 47 "data/maps/EvergreenForest_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_1
# 49 "data/maps/EvergreenForest_House/scripts.pory"
	removeobject 2
# 50 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_RECEIVED_PHANTUMP
# 51 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 52 "data/maps/EvergreenForest_House/scripts.pory"
	call NicknamePhantumpPartyMon
	goto EvergreenForest_House_EventScript_Phantump_1

EvergreenForest_House_EventScript_Phantump_6:
# 56 "data/maps/EvergreenForest_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_Phantump_Text_1
# 58 "data/maps/EvergreenForest_House/scripts.pory"
	removeobject 2
# 59 "data/maps/EvergreenForest_House/scripts.pory"
	setflag FLAG_RECEIVED_PHANTUMP
# 60 "data/maps/EvergreenForest_House/scripts.pory"
	call NicknamePhantumpBoxMon
	goto EvergreenForest_House_EventScript_Phantump_1


NicknamePhantumpPartyMon::
# 72 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox NicknamePhantumpPartyMon_Text_0, MSGBOX_YESNO
# 73 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 74 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePhantumpPartyMon_1
	return

NicknamePhantumpPartyMon_1:
# 75 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 76 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknamePhantumpBoxMon::
# 81 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox NicknamePhantumpPartyMon_Text_0, MSGBOX_YESNO
# 82 "data/maps/EvergreenForest_House/scripts.pory"
	hidemonpic
# 83 "data/maps/EvergreenForest_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePhantumpBoxMon_1
	return

NicknamePhantumpBoxMon_1:
# 84 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 85 "data/maps/EvergreenForest_House/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


EvergreenForest_House_EventScript_PhantumpCry::
# 90 "data/maps/EvergreenForest_House/scripts.pory"
	lock
# 91 "data/maps/EvergreenForest_House/scripts.pory"
	applymovement 2, EvergreenForest_House_EventScript_OldWoman_Movement_0
# 92 "data/maps/EvergreenForest_House/scripts.pory"
	waitmovement 2
# 93 "data/maps/EvergreenForest_House/scripts.pory"
	msgbox EvergreenForest_House_EventScript_PhantumpCry_Text_0
# 94 "data/maps/EvergreenForest_House/scripts.pory"
	playmoncry SPECIES_PHANTUMP, CRY_MODE_NORMAL
# 95 "data/maps/EvergreenForest_House/scripts.pory"
	waitmoncry
# 96 "data/maps/EvergreenForest_House/scripts.pory"
	closemessage
# 97 "data/maps/EvergreenForest_House/scripts.pory"
	release
	return


# 12 "data/maps/EvergreenForest_House/scripts.pory"
EvergreenForest_House_EventScript_OldWoman_Movement_0:
# 12 "data/maps/EvergreenForest_House/scripts.pory"
	face_player
	step_end

EvergreenForest_House_EventScript_OldWoman_Text_0:
# 14 "data/maps/EvergreenForest_House/scripts.pory"
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
# 21 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Would you be willing to take PHANTUMP\n with you on your journey?$"

EvergreenForest_House_EventScript_OldWoman_Text_2:
# 25 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Oh, splendid! You can go talk to\n"
	.string "PHANTUMP when you're ready.$"

EvergreenForest_House_EventScript_OldWoman_Text_3:
# 30 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Oh...well that's okay. I'm sure he'll find\n"
	.string "adventure in other ways.$"

EvergreenForest_House_EventScript_Phantump_Text_0:
# 41 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Take PHANTUMP with you?$"

EvergreenForest_House_EventScript_Phantump_Text_1:
# 48 "data/maps/EvergreenForest_House/scripts.pory"
	.string "{PLAYER} received PHANTUMP!$"

EvergreenForest_House_EventScript_Phantump_Text_2:
# 66 "data/maps/EvergreenForest_House/scripts.pory"
	.string "You left PHANTUMP where he was.$"

NicknamePhantumpPartyMon_Text_0:
# 72 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Do you want to give Phantump a nickname?$"

EvergreenForest_House_EventScript_PhantumpCry_Text_0:
# 93 "data/maps/EvergreenForest_House/scripts.pory"
	.string "Fwaaaaoooomph!$"
