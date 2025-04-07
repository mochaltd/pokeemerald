BravefortTown_AbandonedWarehouse_MapScripts::
# 2 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BravefortTown_AbandonedWarehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BravefortTown_AbandonedWarehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	goto_if_set FLAG_ENTERED_PASSWORD, BravefortTown_AbandonedWarehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BravefortTown_AbandonedWarehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	setmaplayoutindex LAYOUT_BRAVEFORT_TOWN_ABANDONED_WAREHOUSE_PASSWORD
	return


BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance::
# 10 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	goto_if_unset FLAG_GOT_PASSWORD, BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_NoPassword
# 11 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	goto_if_set FLAG_GOT_PASSWORD, BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password
# 12 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	goto_if_eq VAR_BRAVEFORT_TOWN_STATE, 1, BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_PasswordEntered
	return


BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_NoPassword::
# 16 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 17 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_NoPassword_Text_0
# 18 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	closemessage
# 19 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password::
# 23 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 24 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Text_0
# 25 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	playse SE_CLICK
# 26 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	closemessage
# 27 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Movement_0
# 28 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	waitmovement 0
# 29 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	playse SE_PIN
# 30 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	setmetatile 23, 5, 0x228, FALSE
# 31 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Text_1
# 32 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 1
# 33 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	setflag FLAG_ENTERED_PASSWORD
# 34 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	closemessage
# 35 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_PasswordEntered::
# 39 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 40 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_PasswordEntered_Text_0
# 41 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	closemessage
# 42 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


BravefortTown_AbandonedWarehouse_EventScript_Shawn::
# 46 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, BravefortTown_AbandonedWarehouse_Text_ShawnIntro, BravefortTown_AbandonedWarehouse_Text_ShawnOutro
# 47 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	waitmessage
	end


BravefortTown_AbandonedWarehouse_EventScript_GangMember::
# 65 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 66 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	applymovement 4, BravefortTown_AbandonedWarehouse_EventScript_GangMember_Movement_0
# 67 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	waitmovement 4
# 68 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	msgbox BravefortTown_AbandonedWarehouse_EventScript_GangMember_Text_0
# 69 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	closemessage
# 70 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	applymovement 4, BravefortTown_AbandonedWarehouse_EventScript_GangMember_Movement_1
# 71 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	waitmovement 4
# 72 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


BravefortTown_AbandonedWarehouse_EventScript_Elixir::
# 76 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 77 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	removeobject 1
# 78 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 79 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


BravefortTown_AbandonedWarehouse_EventScript_XSpecial::
# 83 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	lock
# 84 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	removeobject 2
# 85 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	giveitem ITEM_X_SPECIAL
# 86 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	release
	return


# 27 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Movement_0:
# 27 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	face_up
# 27 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
BravefortTown_AbandonedWarehouse_EventScript_GangMember_Movement_0:
# 66 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	face_player
	step_end

# 70 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
BravefortTown_AbandonedWarehouse_EventScript_GangMember_Movement_1:
# 70 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	face_original_direction
	step_end

BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_NoPassword_Text_0:
# 17 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "The computer is asking for a password.$"

BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Text_0:
# 24 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "{PLAYER} entered the password...$"

BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_Password_Text_1:
# 31 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "It sounds like something opened up\n"
	.string "somewhere.$"

BravefortTown_AbandonedWarehouse_EventScript_SecretEntrance_PasswordEntered_Text_0:
# 40 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "The password has already been entered.$"

BravefortTown_AbandonedWarehouse_EventScript_GangMember_Text_0:
# 68 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "Get outta here, this ain't no place for a\n"
	.string "kid.$"

BravefortTown_AbandonedWarehouse_Text_ShawnIntro::
# 52 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "You're never going to find our hideout!$"

BravefortTown_AbandonedWarehouse_Text_ShawnOutro::
# 56 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "You're not a regular guard.$"

BravefortTown_AbandonedWarehouse_Text_ShawnPostBattle::
# 60 "data/maps/BravefortTown_AbandonedWarehouse/scripts.pory"
	.string "Even if I wanted to give you the\n"
	.string "password, they didn't tell me what it\l"
	.string "was. Ha!$"
