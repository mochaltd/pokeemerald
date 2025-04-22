ElderootTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ElderootTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ElderootTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_ELDEROOT_TOWN_STATE, 1, MomIntroText
	.2byte 0


MomIntroText::
# 8 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	lock
# 9 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomIntroText_Movement_0
# 10 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 11 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 12 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	delay 10
# 13 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox MomIntroText_Text_0
# 16 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomFaceLeft
# 17 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 18 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 2
# 19 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return


# 22 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
MomFaceLeft:
# 23 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	face_left
	step_end

ElderootTown_PlayersHouse_1F_EventScript_Mom::
# 27 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_ELDEROOT_TOWN_STATE, 2, ElderootTown_PlayersHouse_1F_EventScript_Shivervale
# 28 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_ELDEROOT_TOWN_STATE, 8, LeaveForJourney
# 29 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty
# 30 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	end


ElderootTown_PlayersHouse_1F_EventScript_Shivervale::
# 35 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	lock
# 36 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_0
# 37 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 38 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Text_0
# 39 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 40 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_1
# 41 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 42 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return


LeaveForJourney::
# 46 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	lock
# 47 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_0
# 48 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 49 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox LeaveForJourney_Text_0
# 68 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 69 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_SHIVERVALE_TOWN_STATE, 1
# 70 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 9
# 71 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return


ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty::
# 75 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	lock
# 76 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_0
# 77 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 78 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty_Text_0
# 79 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 80 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 81 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty_Text_1
# 82 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_1
# 83 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 84 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 85 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return


ElderootTown_PlayersHouse_1F_EventScript_Bag::
# 89 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_POTIONS, ElderootTown_PlayersHouse_1F_EventScript_Bag_1
# 93 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	lock
# 94 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	msgbox ElderootTown_PlayersHouse_1F_EventScript_Bag_Text_0
# 95 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 96 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElderootTown_PlayersHouse_1F_EventScript_Bag_Movement_0
# 97 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 98 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return

ElderootTown_PlayersHouse_1F_EventScript_Bag_1:
# 90 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 3
# 91 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	release
	return


# 9 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
MomIntroText_Movement_0:
# 9 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	face_up
# 9 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_0:
# 36 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	face_player
	step_end

# 40 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Movement_1:
# 40 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 96 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
ElderootTown_PlayersHouse_1F_EventScript_Bag_Movement_0:
# 96 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

MomIntroText_Text_0:
# 13 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}! Would you mind doing me a\n"
	.string "favor? I need some ingredients picked\l"
	.string "up from Shivervale Town, and I was\l"
	.string "hoping you could pick some up for me.\p"
	.string "...\p"
	.string "Oh, thank you! Be safe and don't forget\n"
	.string "your bag upstairs if you didn't grab it\l"
	.string "already. And don't forget if you want to\l"
	.string "run there, just hold the B button!$"

ElderootTown_PlayersHouse_1F_EventScript_Shivervale_Text_0:
# 38 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "You remember where Shivervale Town is\n"
	.string "right? It's just down Route 1 and Route\l"
	.string "2. Watch out for tall grass!$"

LeaveForJourney_Text_0:
# 49 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "Did you feel that earthquake? That was\n"
	.string "so strange...\p"
	.string "Anyways, did you forget something,\n"
	.string "{PLAYER}?\p"
	.string "...\l"
	.string "...\p"
	.string "...Sage of Elderoot...\l"
	.string "...\p"
	.string "...\l"
	.string "...past version of Elderoot?...\p"
	.string "...\l"
	.string "...The League of Eight...\p"
	.string "...\l"
	.string "...your very own Pokémon journey?!\p"
	.string "It all sounds so strange, but I can't\n"
	.string "deny that you have your very own\l"
	.string "Pokémon now.\p"
	.string "I knew eventually this day would come.\n"
	.string "That's why I ordered you that Pokédex\l"
	.string "for your birthday.\p"
	.string "I'm sorry that it was a late 16th\n"
	.string "birthday present, I had to order it and\l"
	.string "ship it in from another region.\p"
	.string "But it's supposed to be the next best\n"
	.string "thing for Pokémon trainers, it\l"
	.string "automatically records Pokémon data!\p"
	.string "Anyways, I'm sorry, I'm rambling to keep\n"
	.string "you here longer. Don't worry about\l"
	.string "those ingredients I asked for earlier,\l"
	.string "I'll just see if the neighbors have\l"
	.string "some!\p"
	.string "I guess it's time for you to go...\p"
	.string "Be strong and brave and take care of\n"
	.string "your Pokémon. I'll always be here if you\l"
	.string "need me!$"

ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty_Text_0:
# 78 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "You and your Pokémon look tired. You\n"
	.string "should take a quick rest.$"

ElderootTown_PlayersHouse_1F_EventScript_MomHealsParty_Text_1:
# 81 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "Take care, honey!$"

ElderootTown_PlayersHouse_1F_EventScript_Bag_Text_0:
# 94 "data/maps/ElderootTown_PlayersHouse_1F/scripts.pory"
	.string "I should go get my bag upstairs before\n"
	.string "I leave.$"
