CoaltineTunnel_MapScripts::
# 2 "data/maps/CoaltineTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoaltineTunnel_OnTransition
	.byte 0


CoaltineTunnel_OnTransition::
# 6 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_set FLAG_COALTINE_GRUNTBATTLE, CoaltineTunnel_EventScript_SetupGruntBattle
# 7 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_set FLAG_HIDE_COALTINE_SCIENTIST, CoaltineTunnel_EventScript_SetupScientist
	end


CoaltineTunnel_EventScript_SetupGruntBattle::
# 12 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 6
	goto_if_ne CoaltineTunnel_EventScript_SetupGruntBattle_1
# 16 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 6
	goto_if_eq CoaltineTunnel_EventScript_SetupGruntBattle_4
	return

CoaltineTunnel_EventScript_SetupGruntBattle_1:
# 13 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_COALTINE_GRUNTBATTLE
	return

CoaltineTunnel_EventScript_SetupGruntBattle_4:
# 17 "data/maps/CoaltineTunnel/scripts.pory"
	clearflag FLAG_COALTINE_GRUNTBATTLE
	return


CoaltineTunnel_EventScript_SetupScientist::
# 23 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 6
	goto_if_ne CoaltineTunnel_EventScript_SetupScientist_1
# 27 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 6
	goto_if_eq CoaltineTunnel_EventScript_SetupScientist_4
	return

CoaltineTunnel_EventScript_SetupScientist_1:
# 24 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_HIDE_COALTINE_SCIENTIST
	return

CoaltineTunnel_EventScript_SetupScientist_4:
# 28 "data/maps/CoaltineTunnel/scripts.pory"
	clearflag FLAG_HIDE_COALTINE_SCIENTIST
	return


CoaltineTunnel_EventScript_Trigger1::
# 34 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 35 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_0
# 36 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_0
# 38 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 39 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 40 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 41 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_1
# 42 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 43 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 44 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 45 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_2
# 46 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 47 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 48 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 49 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_3
# 50 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 51 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_3
# 52 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 53 "data/maps/CoaltineTunnel/scripts.pory"
	playse SE_PIN
# 54 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_4
# 55 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 56 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_4
# 57 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 58 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 59 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 60 "data/maps/CoaltineTunnel/scripts.pory"
	goto CoaltineTunnel_EventScript_Grunt1Battle
# 61 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Trigger2::
# 65 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 66 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_0
# 67 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger2_Movement_0
# 69 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 70 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 71 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 72 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_1
# 73 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 74 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 75 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 76 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_2
# 77 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 78 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 79 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 80 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_3
# 81 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 82 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_3
# 83 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 84 "data/maps/CoaltineTunnel/scripts.pory"
	playse SE_PIN
# 85 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_4
# 86 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 87 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_4
# 88 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 89 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 90 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 91 "data/maps/CoaltineTunnel/scripts.pory"
	goto CoaltineTunnel_EventScript_Grunt1Battle
# 92 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Trigger3::
# 96 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 97 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_0
# 98 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger3_Movement_0
# 100 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 102 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 103 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_1
# 104 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 105 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 106 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 107 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_2
# 108 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 109 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 110 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 111 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_3
# 112 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 113 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Trigger1_Movement_3
# 114 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 115 "data/maps/CoaltineTunnel/scripts.pory"
	playse SE_PIN
# 116 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Trigger1_Text_4
# 117 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 118 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 2, CoaltineTunnel_EventScript_Trigger1_Movement_4
# 119 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 2
# 120 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_2
# 121 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 122 "data/maps/CoaltineTunnel/scripts.pory"
	goto CoaltineTunnel_EventScript_Grunt1Battle
# 123 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Grunt1Battle::
# 127 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_AQUA_HIDEOUT_1, CoaltineTunnel_Text_Grunt1Intro, CoaltineTunnel_Text_Grunt1Outro, CoaltineTunnel_Text_NotEnoughMons, CoaltineTunnel_EventScript_Grunt1Defeated
# 128 "data/maps/CoaltineTunnel/scripts.pory"
	release
	end


CoaltineTunnel_EventScript_Grunt1Defeated::
# 146 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 147 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt1Defeated_Text_0
# 148 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 149 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Grunt1Defeated_Movement_0
# 150 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 151 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 152 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 153 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 7
# 154 "data/maps/CoaltineTunnel/scripts.pory"
	goto CoaltineTunnel_EventScript_Grunt2Battle
# 155 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Grunt2Battle::
# 159 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_AQUA_HIDEOUT_2, CoaltineTunnel_Text_Grunt2Intro, CoaltineTunnel_Text_Grunt2Outro, CoaltineTunnel_Text_NotEnoughMons, CoaltineTunnel_EventScript_Grunt2Defeated
# 160 "data/maps/CoaltineTunnel/scripts.pory"
	release
	end


CoaltineTunnel_EventScript_Grunt2Defeated::
# 173 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 174 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_0
# 177 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 178 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 8
# 179 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 180 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 2
# 181 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 3
# 182 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 183 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0
# 184 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 185 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1
# 186 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 187 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_1
# 190 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1
# 191 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 192 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_2
# 193 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0
# 194 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 195 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_3
# 196 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 197 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 198 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_4
# 200 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 201 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_LETTER
# 202 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_5
# 203 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 204 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 205 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 1
# 206 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 207 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_SAVED_MAYOR_FRIEND
# 208 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 0
# 209 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_CantLeaveYet::
# 213 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 214 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 4, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 215 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 4
# 216 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_CantLeaveYet_Text_0
# 217 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 218 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_CantLeaveYet_Movement_0
# 219 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 220 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Hiker::
# 224 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 225 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 4, CoaltineTunnel_EventScript_Hiker_Movement_0
# 226 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 4
# 227 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 9
	goto_if_eq CoaltineTunnel_EventScript_Hiker_2
# 231 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 9
	goto_if_ne CoaltineTunnel_EventScript_Hiker_3
CoaltineTunnel_EventScript_Hiker_1:
# 234 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 235 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return

CoaltineTunnel_EventScript_Hiker_2:
# 228 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Hiker_Text_0
# 229 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
	goto CoaltineTunnel_EventScript_Hiker_1

CoaltineTunnel_EventScript_Hiker_3:
# 232 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_CantLeaveYet_Text_0
	goto CoaltineTunnel_EventScript_Hiker_1


CoaltineTunnel_EventScript_Felix::
# 239 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_FELIX, CoaltineTunnel_Text_FelixIntro, CoaltineTunnel_Text_FelixOutro
# 240 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Mark::
# 258 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_MARK, CoaltineTunnel_Text_MarkIntro, CoaltineTunnel_Text_MarkOutro
# 259 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Mitchell::
# 278 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, CoaltineTunnel_Text_MitchellIntro, CoaltineTunnel_Text_MitchellOutro
# 279 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Yuji::
# 297 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_YUJI, CoaltineTunnel_Text_YujiIntro, CoaltineTunnel_Text_YujiOutro
# 298 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_MartEmployee::
# 316 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_unset FLAG_RECEIVED_SUPER_POTIONS, CoaltineTunnel_EventScript_MartEmployeePotions
# 317 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_set FLAG_RECEIVED_SUPER_POTIONS, CoaltineTunnel_EventScript_MartEmployeeGoodLuck
	return


CoaltineTunnel_EventScript_MartEmployeePotions::
# 321 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 322 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 323 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_MartEmployeePotions_Text_0
# 325 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 326 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 327 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_POTIONS
# 328 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_MartEmployeeGoodLuck::
# 332 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 333 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 334 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 335 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_MartEmployeeGoodLuck_Text_0
# 336 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 337 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Miner::
# 341 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 342 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 7, CoaltineTunnel_EventScript_Hiker_Movement_0
# 343 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 7
# 344 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Miner_Text_0
# 345 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 346 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 7, CoaltineTunnel_EventScript_Miner_Movement_0
# 347 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 7
# 348 "data/maps/CoaltineTunnel/scripts.pory"
	call CoaltineTunnel_EventScript_PathShake
# 349 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Miner_Text_1
# 350 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 351 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_PathShake::
# 355 "data/maps/CoaltineTunnel/scripts.pory"
	delay 30
# 356 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8004, 2
# 357 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8005, 6
# 358 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8006, 6
# 359 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8007, 4
# 360 "data/maps/CoaltineTunnel/scripts.pory"
	special ShakeCamera
# 361 "data/maps/CoaltineTunnel/scripts.pory"
	waitstate
# 362 "data/maps/CoaltineTunnel/scripts.pory"
	delay 30
	return


CoaltineTunnel_EventScript_Wyatt::
# 366 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_WYATT, CoaltineTunnel_Text_WyattIntro, CoaltineTunnel_Text_WyattOutro
# 367 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Patricia::
# 385 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, CoaltineTunnel_Text_PatriciaIntro, CoaltineTunnel_Text_PatriciaOutro
# 386 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Ball1::
# 404 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 405 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 9
# 406 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 407 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Ball2::
# 411 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 412 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 14
# 413 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_IRON
# 414 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Ball3::
# 418 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 419 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 10
# 420 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_ZINC
# 421 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_UnderDevelopment::
# 425 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 426 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 427 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 428 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_UnderDevelopment_Text_0
# 429 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 430 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Miner_Movement_0
# 431 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 432 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


# 37 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger1_Movement_0:
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_down
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 37 "data/maps/CoaltineTunnel/scripts.pory"
	face_up
	step_end

# 39 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger1_Movement_1:
# 39 "data/maps/CoaltineTunnel/scripts.pory"
	face_right
	step_end

# 43 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger1_Movement_2:
# 43 "data/maps/CoaltineTunnel/scripts.pory"
	face_left
	step_end

# 51 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger1_Movement_3:
# 51 "data/maps/CoaltineTunnel/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/CoaltineTunnel/scripts.pory"
	face_down
	step_end

# 56 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger1_Movement_4:
# 56 "data/maps/CoaltineTunnel/scripts.pory"
	walk_down
# 56 "data/maps/CoaltineTunnel/scripts.pory"
	face_left
	step_end

# 68 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger2_Movement_0:
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 68 "data/maps/CoaltineTunnel/scripts.pory"
	face_up
	step_end

# 99 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Trigger3_Movement_0:
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_fast_left
# 99 "data/maps/CoaltineTunnel/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt1Defeated_Movement_0:
# 149 "data/maps/CoaltineTunnel/scripts.pory"
	walk_down
# 149 "data/maps/CoaltineTunnel/scripts.pory"
	face_right
	step_end

# 183 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0:
# 183 "data/maps/CoaltineTunnel/scripts.pory"
	face_down
	step_end

# 185 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1:
# 185 "data/maps/CoaltineTunnel/scripts.pory"
	face_up
	step_end

# 218 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_CantLeaveYet_Movement_0:
# 218 "data/maps/CoaltineTunnel/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Hiker_Movement_0:
# 225 "data/maps/CoaltineTunnel/scripts.pory"
	face_player
	step_end

# 346 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Miner_Movement_0:
# 346 "data/maps/CoaltineTunnel/scripts.pory"
	face_original_direction
	step_end

CoaltineTunnel_EventScript_Trigger1_Text_0:
# 35 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Please, let me go!$"

CoaltineTunnel_EventScript_Trigger1_Text_1:
# 41 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I promise you, I don't know anything\n"
	.string "else, I'm just a scientist!$"

CoaltineTunnel_EventScript_Trigger1_Text_2:
# 45 "data/maps/CoaltineTunnel/scripts.pory"
	.string "We know you're lying! We know this\n"
	.string "writing says something about how the\l"
	.string "crystals in this cave are connected to\l"
	.string "the gods DIALGA and PALKIA!$"

CoaltineTunnel_EventScript_Trigger1_Text_3:
# 49 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Translate it for us, or you'll be sorry!$"

CoaltineTunnel_EventScript_Trigger1_Text_4:
# 54 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Hey, who is this kid?$"

CoaltineTunnel_EventScript_Grunt1Defeated_Text_0:
# 147 "data/maps/CoaltineTunnel/scripts.pory"
	.string "You're one hell of a trainer, kid, I'll\n"
	.string "give you that.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_0:
# 174 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Tch...this doesn't matter anyways, we at\n"
	.string "least have something to take back to\l"
	.string "the boss.\p"
	.string "You only inconvenienced us for now.\p"
	.string "Let's get out of here. We better warn\n"
	.string "the boss about this kid.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_1:
# 187 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Thank you for helping me, I'm sorry you\n"
	.string "got caught up in that. I was traveling\l"
	.string "through here to visit the mayor in\l"
	.string "Royalspur City when those goons\l"
	.string "cornered me.\p"
	.string "They were wanting me to translate this\n"
	.string "ancient Shizen writing for them. The\l"
	.string "legend goes that long ago, miners were\l"
	.string "harvesting the crystals from this cave\l"
	.string "at an alarming rate.\p"
	.string "This angered DIALGA and PALKIA and\n"
	.string "they caused the tunnel to collapse and\l"
	.string "trap the miners.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_2:
# 192 "data/maps/CoaltineTunnel/scripts.pory"
	.string "These writings were from the miners.\n"
	.string "They were carving their prayers into\l"
	.string "this wall asking for the gods to forgive\l"
	.string "them.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_3:
# 195 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Here, I would like to give you something\n"
	.string "for helping me out. It's a new invention\l"
	.string "that I was hoping to have tested and it\l"
	.string "seems like you would be perfect for it!$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_4:
# 198 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Also, could I ask you for a favor? I was\n"
	.string "delivering this letter to the mayor of\l"
	.string "Royalspur City but I'd like to head back\l"
	.string "to Bravefort Town to collect myself.\p"
	.string "Since you're a capable trainer and just\n"
	.string "came from there, you shouldn't have any\l"
	.string "issues!$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_5:
# 202 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Feel free to come visit me at the lab\n"
	.string "when you make it to Bravefort Town!$"

CoaltineTunnel_EventScript_CantLeaveYet_Text_0:
# 216 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I'm sorry, I can't let you through right\n"
	.string "now. The police are investigating\l"
	.string "something on Route 6 and asked me to\l"
	.string "keep the route clear for them.$"

CoaltineTunnel_EventScript_Hiker_Text_0:
# 228 "data/maps/CoaltineTunnel/scripts.pory"
	.string "The police are finished up. Happy\n"
	.string "hiking!$"

CoaltineTunnel_EventScript_MartEmployeePotions_Text_0:
# 323 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh dear, I think I got lost somewhere...\p"
	.string "Oh, you look like a Pokémon trainer!\n"
	.string "Here, I think these will be better used\l"
	.string "with you.$"

CoaltineTunnel_EventScript_MartEmployeeGoodLuck_Text_0:
# 335 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Don't worry about me, I just need to\n"
	.string "retrace my steps.$"

CoaltineTunnel_EventScript_Miner_Text_0:
# 344 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Surely the gods won't mind if I just try\n"
	.string "to take a little bit of these crystals,\l"
	.string "right?$"

CoaltineTunnel_EventScript_Miner_Text_1:
# 349 "data/maps/CoaltineTunnel/scripts.pory"
	.string "...Maybe I should stop digging...$"

CoaltineTunnel_EventScript_UnderDevelopment_Text_0:
# 428 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This area is currently under\n"
	.string "development. Check back later!$"

CoaltineTunnel_Text_NotEnoughMons::
# 132 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh, you don't have enough Pokémon.$"

CoaltineTunnel_Text_Grunt1Intro::
# 136 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This must be the kid that took down\n"
	.string "those guys in the Evergreen Forest. He\l"
	.string "can't be that tough.\p"
	.string "We'll show you what happens to those\n"
	.string "who meddle in the business of Team\l"
	.string "Umbra!$"

CoaltineTunnel_Text_Grunt1Outro::
# 141 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Maybe you are that tough.$"

CoaltineTunnel_Text_Grunt2Intro::
# 164 "data/maps/CoaltineTunnel/scripts.pory"
	.string "You might have beaten him, but can you\n"
	.string "take on both of us?$"

CoaltineTunnel_Text_Grunt2Outro::
# 168 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Who taught you to battle like that?$"

CoaltineTunnel_Text_FelixIntro::
# 245 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I need to stay in top form if I'm going\n"
	.string "to serve and protect!$"

CoaltineTunnel_Text_FelixOutro::
# 249 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I gotta work harder if I'm going to get\n"
	.string "that promotion.$"

CoaltineTunnel_Text_FelixPostBattle::
# 253 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Have you ever considered a career in\n"
	.string "law enforcement?$"

CoaltineTunnel_Text_MarkIntro::
# 264 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Hey! Are you searching for Pokémon?\p"
	.string "You came along after me! You're rude!$"

CoaltineTunnel_Text_MarkOutro::
# 269 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Ayieeeeh! I'm sorry, forgive me, please!$"

CoaltineTunnel_Text_MarkPostBattle::
# 273 "data/maps/CoaltineTunnel/scripts.pory"
	.string "People don't come here often, so I\n"
	.string "thought there'd be rare Pokémon.$"

CoaltineTunnel_Text_MitchellIntro::
# 284 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This cave isn't even that scary. Bring\n"
	.string "it on!$"

CoaltineTunnel_Text_MitchellOutro::
# 288 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Now that you mention it, is it getting\n"
	.string "darker in here?$"

CoaltineTunnel_Text_MitchellPostBattle::
# 292 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I just gotta stay cool, that's all...$"

CoaltineTunnel_Text_YujiIntro::
# 303 "data/maps/CoaltineTunnel/scripts.pory"
	.string "The harsh conditions in this cave just\n"
	.string "make me tougher!$"

CoaltineTunnel_Text_YujiOutro::
# 307 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Never give up, never surrender.$"

CoaltineTunnel_Text_YujiPostBattle::
# 311 "data/maps/CoaltineTunnel/scripts.pory"
	.string "My grunting echoes a lot in here.$"

CoaltineTunnel_Text_WyattIntro::
# 372 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Rare Pokémon make life worth living!$"

CoaltineTunnel_Text_WyattOutro::
# 376 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Your Pokémon are simply amazing.$"

CoaltineTunnel_Text_WyattPostBattle::
# 380 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Did you know there's a place in Shizen\n"
	.string "that is inhabited entirely by dragons?\l"
	.string "Someday, I'll be able to go there.$"

CoaltineTunnel_Text_PatriciaIntro::
# 391 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Feeling tired yet? Maybe you should lie\n"
	.string "down and rest. I'll watch to make sure\l"
	.string "no one bothers you.$"

CoaltineTunnel_Text_PatriciaOutro::
# 395 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh...you're not even tired.$"

CoaltineTunnel_Text_PatriciaPostBattle::
# 399 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I promise I'm not weird.$"
