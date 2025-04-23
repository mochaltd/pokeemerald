BravefortTown_MapScripts::
# 2 "data/maps/BravefortTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BravefortTown_OnTransition
	.byte 0


BravefortTown_OnTransition::
# 6 "data/maps/BravefortTown/scripts.pory"
	setflag FLAG_VISITED_BRAVEFORT_TOWN
	end


BravefortTown_EventScript_TempleSign::
# 11 "data/maps/BravefortTown/scripts.pory"
	lock
# 12 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_TempleSign_Text_0
# 14 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 15 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_TwoSeaTowerSign::
# 19 "data/maps/BravefortTown/scripts.pory"
	lock
# 20 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_TwoSeaTowerSign_Text_0
# 21 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 22 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_OneSeaTowerSign::
# 26 "data/maps/BravefortTown/scripts.pory"
	lock
# 27 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_OneSeaTowerSign_Text_0
# 28 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 29 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_LabSign::
# 33 "data/maps/BravefortTown/scripts.pory"
	lock
# 34 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_LabSign_Text_0
# 35 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 36 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_NameRaterSign::
# 40 "data/maps/BravefortTown/scripts.pory"
	lock
# 41 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_NameRaterSign_Text_0
# 42 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 43 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_WarehouseSign::
# 47 "data/maps/BravefortTown/scripts.pory"
	lock
# 48 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_WarehouseSign_Text_0
# 49 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 50 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Scientist::
# 54 "data/maps/BravefortTown/scripts.pory"
	lock
# 55 "data/maps/BravefortTown/scripts.pory"
	applymovement 14, BravefortTown_EventScript_Scientist_Movement_0
# 56 "data/maps/BravefortTown/scripts.pory"
	waitmovement 14
# 57 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Scientist_Text_0
# 58 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 59 "data/maps/BravefortTown/scripts.pory"
	applymovement 14, BravefortTown_EventScript_Scientist_Movement_1
# 60 "data/maps/BravefortTown/scripts.pory"
	waitmovement 14
# 61 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_GoodForHair::
# 65 "data/maps/BravefortTown/scripts.pory"
	lock
# 66 "data/maps/BravefortTown/scripts.pory"
	applymovement 15, BravefortTown_EventScript_Scientist_Movement_0
# 67 "data/maps/BravefortTown/scripts.pory"
	waitmovement 15
# 68 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_GoodForHair_Text_0
# 69 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 70 "data/maps/BravefortTown/scripts.pory"
	applymovement 15, BravefortTown_EventScript_Scientist_Movement_1
# 71 "data/maps/BravefortTown/scripts.pory"
	waitmovement 15
# 72 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_TwoSeas::
# 76 "data/maps/BravefortTown/scripts.pory"
	lock
# 77 "data/maps/BravefortTown/scripts.pory"
	applymovement 12, BravefortTown_EventScript_Scientist_Movement_0
# 78 "data/maps/BravefortTown/scripts.pory"
	waitmovement 12
# 79 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_TwoSeas_Text_0
# 80 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 81 "data/maps/BravefortTown/scripts.pory"
	applymovement 12, BravefortTown_EventScript_Scientist_Movement_1
# 82 "data/maps/BravefortTown/scripts.pory"
	waitmovement 12
# 83 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Guard::
# 87 "data/maps/BravefortTown/scripts.pory"
	lock
# 88 "data/maps/BravefortTown/scripts.pory"
	applymovement 1, BravefortTown_EventScript_Scientist_Movement_0
# 89 "data/maps/BravefortTown/scripts.pory"
	waitmovement 1
# 90 "data/maps/BravefortTown/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 3
	goto_if_gt BravefortTown_EventScript_Guard_2
# 93 "data/maps/BravefortTown/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 3
	goto_if_lt BravefortTown_EventScript_Guard_3
BravefortTown_EventScript_Guard_1:
# 99 "data/maps/BravefortTown/scripts.pory"
	applymovement 1, BravefortTown_EventScript_Scientist_Movement_1
# 100 "data/maps/BravefortTown/scripts.pory"
	waitmovement 1
# 101 "data/maps/BravefortTown/scripts.pory"
	release
	return

BravefortTown_EventScript_Guard_2:
# 91 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Guard_Text_0
# 92 "data/maps/BravefortTown/scripts.pory"
	closemessage
	goto BravefortTown_EventScript_Guard_1

BravefortTown_EventScript_Guard_3:
# 94 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Guard_Text_1
# 97 "data/maps/BravefortTown/scripts.pory"
	closemessage
	goto BravefortTown_EventScript_Guard_1


BravefortTown_EventScript_Guard_VenomLocustArrested::
# 105 "data/maps/BravefortTown/scripts.pory"
	lock
# 106 "data/maps/BravefortTown/scripts.pory"
	applymovement 1, BravefortTown_EventScript_Guard_VenomLocustArrested_Movement_0
# 107 "data/maps/BravefortTown/scripts.pory"
	waitmovement 1
# 108 "data/maps/BravefortTown/scripts.pory"
	playse SE_PIN
# 109 "data/maps/BravefortTown/scripts.pory"
	waitse
# 110 "data/maps/BravefortTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BravefortTown_EventScript_Guard_VenomLocustArrested_Movement_1
# 111 "data/maps/BravefortTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 112 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Guard_VenomLocustArrested_Text_0
# 115 "data/maps/BravefortTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 116 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Guard_VenomLocustArrested_Text_1
# 117 "data/maps/BravefortTown/scripts.pory"
	waitse
# 118 "data/maps/BravefortTown/scripts.pory"
	addmoney 4000
# 119 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 120 "data/maps/BravefortTown/scripts.pory"
	setflag FLAG_RECEIVED_POLICE_REWARD
# 121 "data/maps/BravefortTown/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 4
# 122 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Guard_VenomLocustArrested_Text_2
# 123 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 124 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Military::
# 128 "data/maps/BravefortTown/scripts.pory"
	lock
# 129 "data/maps/BravefortTown/scripts.pory"
	applymovement 14, BravefortTown_EventScript_Scientist_Movement_0
# 130 "data/maps/BravefortTown/scripts.pory"
	waitmovement 14
# 131 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Military_Text_0
# 134 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 135 "data/maps/BravefortTown/scripts.pory"
	applymovement 14, BravefortTown_EventScript_Scientist_Movement_1
# 136 "data/maps/BravefortTown/scripts.pory"
	waitmovement 14
# 137 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_CantPassYet::
# 141 "data/maps/BravefortTown/scripts.pory"
	lock
# 142 "data/maps/BravefortTown/scripts.pory"
	applymovement 13, BravefortTown_EventScript_Scientist_Movement_0
# 143 "data/maps/BravefortTown/scripts.pory"
	waitmovement 13
# 144 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_CantPassYet_Text_0
# 146 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 147 "data/maps/BravefortTown/scripts.pory"
	applymovement 13, BravefortTown_EventScript_Scientist_Movement_1
# 148 "data/maps/BravefortTown/scripts.pory"
	waitmovement 13
# 149 "data/maps/BravefortTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BravefortTown_EventScript_CantPassYet_Movement_0
# 150 "data/maps/BravefortTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 151 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_GuardCantPassYet::
# 155 "data/maps/BravefortTown/scripts.pory"
	lock
# 156 "data/maps/BravefortTown/scripts.pory"
	applymovement 13, BravefortTown_EventScript_Scientist_Movement_0
# 157 "data/maps/BravefortTown/scripts.pory"
	waitmovement 13
# 158 "data/maps/BravefortTown/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 3
	goto_if_lt BravefortTown_EventScript_GuardCantPassYet_2
# 163 "data/maps/BravefortTown/scripts.pory"
	compare VAR_BRAVEFORT_TOWN_STATE, 3
	goto_if_gt BravefortTown_EventScript_GuardCantPassYet_3
BravefortTown_EventScript_GuardCantPassYet_1:
# 167 "data/maps/BravefortTown/scripts.pory"
	applymovement 13, BravefortTown_EventScript_Scientist_Movement_1
# 168 "data/maps/BravefortTown/scripts.pory"
	waitmovement 13
# 169 "data/maps/BravefortTown/scripts.pory"
	release
	return

BravefortTown_EventScript_GuardCantPassYet_2:
# 159 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_CantPassYet_Text_0
# 161 "data/maps/BravefortTown/scripts.pory"
	closemessage
	goto BravefortTown_EventScript_GuardCantPassYet_1

BravefortTown_EventScript_GuardCantPassYet_3:
# 164 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_GuardCantPassYet_Text_0
# 165 "data/maps/BravefortTown/scripts.pory"
	closemessage
	goto BravefortTown_EventScript_GuardCantPassYet_1


BravefortTown_EventScript_DisgruntledSailor::
# 173 "data/maps/BravefortTown/scripts.pory"
	lock
# 174 "data/maps/BravefortTown/scripts.pory"
	applymovement 3, BravefortTown_EventScript_Scientist_Movement_0
# 175 "data/maps/BravefortTown/scripts.pory"
	waitmovement 3
# 176 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_DisgruntledSailor_Text_0
# 177 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 178 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Sailor::
# 182 "data/maps/BravefortTown/scripts.pory"
	lock
# 183 "data/maps/BravefortTown/scripts.pory"
	applymovement 2, BravefortTown_EventScript_Scientist_Movement_0
# 184 "data/maps/BravefortTown/scripts.pory"
	waitmovement 2
# 185 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Sailor_Text_0
# 187 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 188 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Girlfriend::
# 192 "data/maps/BravefortTown/scripts.pory"
	lock
# 193 "data/maps/BravefortTown/scripts.pory"
	applymovement 4, BravefortTown_EventScript_Scientist_Movement_0
# 194 "data/maps/BravefortTown/scripts.pory"
	waitmovement 4
# 195 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Girlfriend_Text_0
# 196 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 197 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Boyfriend::
# 201 "data/maps/BravefortTown/scripts.pory"
	lock
# 202 "data/maps/BravefortTown/scripts.pory"
	applymovement 5, BravefortTown_EventScript_Scientist_Movement_0
# 203 "data/maps/BravefortTown/scripts.pory"
	waitmovement 5
# 204 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Boyfriend_Text_0
# 206 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 207 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Ghost::
# 211 "data/maps/BravefortTown/scripts.pory"
	lock
# 212 "data/maps/BravefortTown/scripts.pory"
	applymovement 6, BravefortTown_EventScript_Scientist_Movement_0
# 213 "data/maps/BravefortTown/scripts.pory"
	waitmovement 6
# 214 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Ghost_Text_0
# 217 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 218 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Walter::
# 222 "data/maps/BravefortTown/scripts.pory"
	trainerbattle_single TRAINER_WALTER_2, BravefortTown_Text_WalterIntro, BravefortTown_Text_WalterOutro
# 223 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/BravefortTown/scripts.pory"
	waitmessage
	end


BravefortTown_EventScript_Beauty::
# 241 "data/maps/BravefortTown/scripts.pory"
	lock
# 242 "data/maps/BravefortTown/scripts.pory"
	applymovement 11, BravefortTown_EventScript_Scientist_Movement_0
# 243 "data/maps/BravefortTown/scripts.pory"
	waitmovement 11
# 244 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_EventScript_Beauty_Text_0
# 245 "data/maps/BravefortTown/scripts.pory"
	closemessage
# 246 "data/maps/BravefortTown/scripts.pory"
	release
	return


BravefortTown_EventScript_Austina::
# 250 "data/maps/BravefortTown/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, BravefortTown_Text_AustinaIntro, BravefortTown_Text_AustinaOutro
# 251 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/BravefortTown/scripts.pory"
	waitmessage
	end


BravefortTown_EventScript_Simon::
# 269 "data/maps/BravefortTown/scripts.pory"
	trainerbattle_single TRAINER_SIMON, BravefortTown_Text_SimonIntro, BravefortTown_Text_SimonOutro
# 270 "data/maps/BravefortTown/scripts.pory"
	msgbox BravefortTown_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 271 "data/maps/BravefortTown/scripts.pory"
	waitmessage
	end


# 55 "data/maps/BravefortTown/scripts.pory"
BravefortTown_EventScript_Scientist_Movement_0:
# 55 "data/maps/BravefortTown/scripts.pory"
	face_player
	step_end

# 59 "data/maps/BravefortTown/scripts.pory"
BravefortTown_EventScript_Scientist_Movement_1:
# 59 "data/maps/BravefortTown/scripts.pory"
	face_original_direction
	step_end

# 106 "data/maps/BravefortTown/scripts.pory"
BravefortTown_EventScript_Guard_VenomLocustArrested_Movement_0:
# 106 "data/maps/BravefortTown/scripts.pory"
	emote_exclamation_mark
# 106 "data/maps/BravefortTown/scripts.pory"
	face_player
	step_end

# 110 "data/maps/BravefortTown/scripts.pory"
BravefortTown_EventScript_Guard_VenomLocustArrested_Movement_1:
# 110 "data/maps/BravefortTown/scripts.pory"
	face_up
	step_end

# 149 "data/maps/BravefortTown/scripts.pory"
BravefortTown_EventScript_CantPassYet_Movement_0:
# 149 "data/maps/BravefortTown/scripts.pory"
	walk_down
	step_end

BravefortTown_EventScript_TempleSign_Text_0:
# 12 "data/maps/BravefortTown/scripts.pory"
	.string "{UP_ARROW} Bravefort Temple\p"
	.string "In honor of Barlow, Commander of the\n"
	.string "Seas.$"

BravefortTown_EventScript_TwoSeaTowerSign_Text_0:
# 20 "data/maps/BravefortTown/scripts.pory"
	.string "Two Sea Tower$"

BravefortTown_EventScript_OneSeaTowerSign_Text_0:
# 27 "data/maps/BravefortTown/scripts.pory"
	.string "One Sea Tower$"

BravefortTown_EventScript_LabSign_Text_0:
# 34 "data/maps/BravefortTown/scripts.pory"
	.string "Bravefort Pokémon Lab$"

BravefortTown_EventScript_NameRaterSign_Text_0:
# 41 "data/maps/BravefortTown/scripts.pory"
	.string "Name Rater's House$"

BravefortTown_EventScript_WarehouseSign_Text_0:
# 48 "data/maps/BravefortTown/scripts.pory"
	.string "Bravefort Shipping Warehouse$"

BravefortTown_EventScript_Scientist_Text_0:
# 57 "data/maps/BravefortTown/scripts.pory"
	.string "I've been working some long hours in the\n"
	.string "lab, I needed to get some fresh air.$"

BravefortTown_EventScript_GoodForHair_Text_0:
# 68 "data/maps/BravefortTown/scripts.pory"
	.string "The ocean has so many more benefits\n"
	.string "than just being beautiful. The fresh\l"
	.string "ocean air is great for my hair and skin!$"

BravefortTown_EventScript_TwoSeas_Text_0:
# 79 "data/maps/BravefortTown/scripts.pory"
	.string "Enjoy your visit to Two Seas Tower!$"

BravefortTown_EventScript_Guard_Text_0:
# 91 "data/maps/BravefortTown/scripts.pory"
	.string "Thank you for your help in stopping the\n"
	.string "Venom Locust. We are greatly\l"
	.string "appreciative.$"

BravefortTown_EventScript_Guard_Text_1:
# 94 "data/maps/BravefortTown/scripts.pory"
	.string "We're trying to track down the thieves\n"
	.string "that were behind the theft at the\l"
	.string "Pokémon Day Care.\p"
	.string "We tracked them to this abandoned\n"
	.string "warehouse but we don't know where they\l"
	.string "went from there.\p"
	.string "You're welcome to take a look inside.$"

BravefortTown_EventScript_Guard_VenomLocustArrested_Text_0:
# 112 "data/maps/BravefortTown/scripts.pory"
	.string "Hey, it's you!\p"
	.string "Because of you, the police were able to\n"
	.string "arrest the members of the Venom Locust\l"
	.string "that were down in the sewer planning\l"
	.string "their attack on One and Two Sea Tower.\p"
	.string "Here, this reward is for you.$"

BravefortTown_EventScript_Guard_VenomLocustArrested_Text_1:
# 116 "data/maps/BravefortTown/scripts.pory"
	.string "{PAUSE_MUSIC} {PLAYER} received ¥4,000!$"

BravefortTown_EventScript_Guard_VenomLocustArrested_Text_2:
# 122 "data/maps/BravefortTown/scripts.pory"
	.string "{RESUME_MUSIC} Thank you again!$"

BravefortTown_EventScript_Military_Text_0:
# 131 "data/maps/BravefortTown/scripts.pory"
	.string "Have you ever wondered where the name\n"
	.string "Bravefort comes from?\p"
	.string "Many, many years ago, Shizen had a\n"
	.string "military force headquartered here, and\l"
	.string "their fort was located where the\l"
	.string "apartments are now located.\p"
	.string "It rubs me the wrong way that they\n"
	.string "would destroy a part of history just\l"
	.string "for more living spaces.$"

BravefortTown_EventScript_CantPassYet_Text_0:
# 144 "data/maps/BravefortTown/scripts.pory"
	.string "I'm sorry, we're not allowing anyone into\n"
	.string "the temple grounds until we find the\l"
	.string "culprit that attacked the Day Care.\p"
	.string "Please come back later once our\n"
	.string "investigation has included.$"

BravefortTown_EventScript_GuardCantPassYet_Text_0:
# 164 "data/maps/BravefortTown/scripts.pory"
	.string "Thank you for helping us capture those\n"
	.string "thugs. Enjoy your time in the temple!$"

BravefortTown_EventScript_DisgruntledSailor_Text_0:
# 176 "data/maps/BravefortTown/scripts.pory"
	.string "Moving goods over to the warehouse was\n"
	.string "a lot easier before they built these\l"
	.string "stupid towers here.$"

BravefortTown_EventScript_Sailor_Text_0:
# 185 "data/maps/BravefortTown/scripts.pory"
	.string "Do you ever wonder what's in some of\n"
	.string "these boxes?\p"
	.string "I hope I wouldn't get in trouble if\n"
	.string "something bad was in them.$"

BravefortTown_EventScript_Girlfriend_Text_0:
# 195 "data/maps/BravefortTown/scripts.pory"
	.string "Don't you think lighthouses are so\n"
	.string "romantic?$"

BravefortTown_EventScript_Boyfriend_Text_0:
# 204 "data/maps/BravefortTown/scripts.pory"
	.string "People say that an AMPHAROS provides\n"
	.string "light from the lighthouse.\p"
	.string "Pokémon are amazing.$"

BravefortTown_EventScript_Ghost_Text_0:
# 214 "data/maps/BravefortTown/scripts.pory"
	.string "This new warehouse was built about 5\n"
	.string "years ago after we outgrew the old one.\p"
	.string "Rumors say that the ghost of Pirate\n"
	.string "Captain Driftide haunts the old\l"
	.string "warehouse.\p"
	.string "I think that's just something that was\n"
	.string "made up to try and keep people out of\l"
	.string "there.$"

BravefortTown_EventScript_Beauty_Text_0:
# 244 "data/maps/BravefortTown/scripts.pory"
	.string "My children love Pokémon battling!$"

BravefortTown_Text_WalterIntro::
# 228 "data/maps/BravefortTown/scripts.pory"
	.string "Care to have a beach battle with a\n"
	.string "gentleman?$"

BravefortTown_Text_WalterOutro::
# 232 "data/maps/BravefortTown/scripts.pory"
	.string "You battle exquisitly.$"

BravefortTown_Text_WalterPostBattle::
# 236 "data/maps/BravefortTown/scripts.pory"
	.string "Is it weird wearing a suit on the beach?$"

BravefortTown_Text_AustinaIntro::
# 256 "data/maps/BravefortTown/scripts.pory"
	.string "Play in the sand with me!$"

BravefortTown_Text_AustinaOutro::
# 260 "data/maps/BravefortTown/scripts.pory"
	.string "Waahhhh, you beat me!$"

BravefortTown_Text_AustinaPostBattle::
# 264 "data/maps/BravefortTown/scripts.pory"
	.string "You were supposed to let me win!$"

BravefortTown_Text_SimonIntro::
# 275 "data/maps/BravefortTown/scripts.pory"
	.string "I've won against my sister 4 times now,\n"
	.string "you're going to make it my first 5 win\l"
	.string "streak!$"

BravefortTown_Text_SimonOutro::
# 279 "data/maps/BravefortTown/scripts.pory"
	.string "Wow, you're strong...$"

BravefortTown_Text_SimonPostBattle::
# 283 "data/maps/BravefortTown/scripts.pory"
	.string "I'll try to get a higher win streak\n"
	.string "tomorrow!$"
