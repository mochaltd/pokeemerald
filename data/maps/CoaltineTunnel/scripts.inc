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
	call Common_EventScript_SaveGame
# 128 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_AQUA_HIDEOUT_1, CoaltineTunnel_Text_Grunt1Intro, CoaltineTunnel_Text_Grunt1Outro, CoaltineTunnel_Text_NotEnoughMons, CoaltineTunnel_EventScript_Grunt1Defeated
# 129 "data/maps/CoaltineTunnel/scripts.pory"
	release
	end


CoaltineTunnel_EventScript_Grunt1Defeated::
# 147 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 148 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt1Defeated_Text_0
# 149 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 150 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 3, CoaltineTunnel_EventScript_Grunt1Defeated_Movement_0
# 151 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 3
# 152 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 153 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 7
# 155 "data/maps/CoaltineTunnel/scripts.pory"
	goto CoaltineTunnel_EventScript_Grunt2Battle
# 156 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Grunt2Battle::
# 160 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_AQUA_HIDEOUT_2, CoaltineTunnel_Text_Grunt2Intro, CoaltineTunnel_Text_Grunt2Outro, CoaltineTunnel_Text_NotEnoughMons, CoaltineTunnel_EventScript_Grunt2Defeated
# 161 "data/maps/CoaltineTunnel/scripts.pory"
	release
	end


CoaltineTunnel_EventScript_Grunt2Defeated::
# 174 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 175 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_0
# 178 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 179 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 8
# 180 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 181 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 2
# 182 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 3
# 183 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0
# 185 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 186 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1
# 187 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 188 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_1
# 191 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1
# 192 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 193 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_2
# 194 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 1, CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0
# 195 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 1
# 196 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_3
# 197 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 198 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 199 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_4
# 201 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 202 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_LETTER
# 203 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Grunt2Defeated_Text_5
# 204 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 205 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 1
# 207 "data/maps/CoaltineTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 208 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_SAVED_MAYOR_FRIEND
# 209 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_BRAVEFORT_TOWN_STATE, 0
# 210 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_CantLeaveYet::
# 214 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 215 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 4, CoaltineTunnel_EventScript_Trigger1_Movement_1
# 216 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 4
# 217 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_CantLeaveYet_Text_0
# 218 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 219 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoaltineTunnel_EventScript_CantLeaveYet_Movement_0
# 220 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 221 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Hiker::
# 225 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 226 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 4, CoaltineTunnel_EventScript_Hiker_Movement_0
# 227 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 4
# 228 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 9
	goto_if_eq CoaltineTunnel_EventScript_Hiker_2
# 232 "data/maps/CoaltineTunnel/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 9
	goto_if_ne CoaltineTunnel_EventScript_Hiker_3
CoaltineTunnel_EventScript_Hiker_1:
# 235 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 236 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return

CoaltineTunnel_EventScript_Hiker_2:
# 229 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Hiker_Text_0
# 230 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
	goto CoaltineTunnel_EventScript_Hiker_1

CoaltineTunnel_EventScript_Hiker_3:
# 233 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_CantLeaveYet_Text_0
	goto CoaltineTunnel_EventScript_Hiker_1


CoaltineTunnel_EventScript_Felix::
# 240 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_FELIX, CoaltineTunnel_Text_FelixIntro, CoaltineTunnel_Text_FelixOutro
# 241 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Mark::
# 259 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_MARK, CoaltineTunnel_Text_MarkIntro, CoaltineTunnel_Text_MarkOutro
# 260 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Mitchell::
# 279 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, CoaltineTunnel_Text_MitchellIntro, CoaltineTunnel_Text_MitchellOutro
# 280 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Yuji::
# 298 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_YUJI, CoaltineTunnel_Text_YujiIntro, CoaltineTunnel_Text_YujiOutro
# 299 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_MartEmployee::
# 317 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_unset FLAG_RECEIVED_SUPER_POTIONS, CoaltineTunnel_EventScript_MartEmployeePotions
# 318 "data/maps/CoaltineTunnel/scripts.pory"
	call_if_set FLAG_RECEIVED_SUPER_POTIONS, CoaltineTunnel_EventScript_MartEmployeeGoodLuck
	return


CoaltineTunnel_EventScript_MartEmployeePotions::
# 322 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 323 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 324 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_MartEmployeePotions_Text_0
# 326 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 327 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 328 "data/maps/CoaltineTunnel/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_POTIONS
# 329 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_MartEmployeeGoodLuck::
# 333 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 334 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 335 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 336 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_MartEmployeeGoodLuck_Text_0
# 337 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 338 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Miner::
# 342 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 343 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 7, CoaltineTunnel_EventScript_Hiker_Movement_0
# 344 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 7
# 345 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Miner_Text_0
# 346 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 347 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 7, CoaltineTunnel_EventScript_Miner_Movement_0
# 348 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 7
# 349 "data/maps/CoaltineTunnel/scripts.pory"
	call CoaltineTunnel_EventScript_PathShake
# 350 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_Miner_Text_1
# 351 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 352 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_PathShake::
# 356 "data/maps/CoaltineTunnel/scripts.pory"
	delay 30
# 357 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8004, 2
# 358 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8005, 6
# 359 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8006, 6
# 360 "data/maps/CoaltineTunnel/scripts.pory"
	setvar VAR_0x8007, 4
# 361 "data/maps/CoaltineTunnel/scripts.pory"
	special ShakeCamera
# 362 "data/maps/CoaltineTunnel/scripts.pory"
	waitstate
# 363 "data/maps/CoaltineTunnel/scripts.pory"
	delay 30
	return


CoaltineTunnel_EventScript_Wyatt::
# 367 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_WYATT, CoaltineTunnel_Text_WyattIntro, CoaltineTunnel_Text_WyattOutro
# 368 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Patricia::
# 386 "data/maps/CoaltineTunnel/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, CoaltineTunnel_Text_PatriciaIntro, CoaltineTunnel_Text_PatriciaOutro
# 387 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/CoaltineTunnel/scripts.pory"
	waitmessage
	end


CoaltineTunnel_EventScript_Ball1::
# 405 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 406 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 9
# 407 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 408 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Ball2::
# 412 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 413 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 14
# 414 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_IRON
# 415 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_Ball3::
# 419 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 420 "data/maps/CoaltineTunnel/scripts.pory"
	removeobject 10
# 421 "data/maps/CoaltineTunnel/scripts.pory"
	giveitem ITEM_ZINC
# 422 "data/maps/CoaltineTunnel/scripts.pory"
	release
	return


CoaltineTunnel_EventScript_UnderDevelopment::
# 426 "data/maps/CoaltineTunnel/scripts.pory"
	lock
# 427 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Hiker_Movement_0
# 428 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 429 "data/maps/CoaltineTunnel/scripts.pory"
	msgbox CoaltineTunnel_EventScript_UnderDevelopment_Text_0
# 430 "data/maps/CoaltineTunnel/scripts.pory"
	closemessage
# 431 "data/maps/CoaltineTunnel/scripts.pory"
	applymovement 16, CoaltineTunnel_EventScript_Miner_Movement_0
# 432 "data/maps/CoaltineTunnel/scripts.pory"
	waitmovement 16
# 433 "data/maps/CoaltineTunnel/scripts.pory"
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

# 150 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt1Defeated_Movement_0:
# 150 "data/maps/CoaltineTunnel/scripts.pory"
	walk_down
# 150 "data/maps/CoaltineTunnel/scripts.pory"
	face_right
	step_end

# 184 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt2Defeated_Movement_0:
# 184 "data/maps/CoaltineTunnel/scripts.pory"
	face_down
	step_end

# 186 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Grunt2Defeated_Movement_1:
# 186 "data/maps/CoaltineTunnel/scripts.pory"
	face_up
	step_end

# 219 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_CantLeaveYet_Movement_0:
# 219 "data/maps/CoaltineTunnel/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Hiker_Movement_0:
# 226 "data/maps/CoaltineTunnel/scripts.pory"
	face_player
	step_end

# 347 "data/maps/CoaltineTunnel/scripts.pory"
CoaltineTunnel_EventScript_Miner_Movement_0:
# 347 "data/maps/CoaltineTunnel/scripts.pory"
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
# 148 "data/maps/CoaltineTunnel/scripts.pory"
	.string "You're one hell of a trainer, kid, I'll\n"
	.string "give you that.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_0:
# 175 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Tch...this doesn't matter anyways, we at\n"
	.string "least have something to take back to\l"
	.string "the boss.\p"
	.string "You only inconvenienced us for now.\p"
	.string "Let's get out of here. We better warn\n"
	.string "the boss about this kid.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_1:
# 188 "data/maps/CoaltineTunnel/scripts.pory"
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
# 193 "data/maps/CoaltineTunnel/scripts.pory"
	.string "These writings were from the miners.\n"
	.string "They were carving their prayers into\l"
	.string "this wall asking for the gods to forgive\l"
	.string "them.$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_3:
# 196 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Here, I would like to give you something\n"
	.string "for helping me out. It's a new invention\l"
	.string "that I was hoping to have tested and it\l"
	.string "seems like you would be perfect for it!$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_4:
# 199 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Also, could I ask you for a favor? I was\n"
	.string "delivering this letter to the mayor of\l"
	.string "Royalspur City but I'd like to head back\l"
	.string "to Bravefort Town to collect myself.\p"
	.string "Since you're a capable trainer and just\n"
	.string "came from there, you shouldn't have any\l"
	.string "issues!$"

CoaltineTunnel_EventScript_Grunt2Defeated_Text_5:
# 203 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Feel free to come visit me at the lab\n"
	.string "when you make it to Bravefort Town!$"

CoaltineTunnel_EventScript_CantLeaveYet_Text_0:
# 217 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I'm sorry, I can't let you through right\n"
	.string "now. The police are investigating\l"
	.string "something on Route 6 and asked me to\l"
	.string "keep the route clear for them.$"

CoaltineTunnel_EventScript_Hiker_Text_0:
# 229 "data/maps/CoaltineTunnel/scripts.pory"
	.string "The police are finished up. Happy\n"
	.string "hiking!$"

CoaltineTunnel_EventScript_MartEmployeePotions_Text_0:
# 324 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh dear, I think I got lost somewhere...\p"
	.string "Oh, you look like a Pokémon trainer!\n"
	.string "Here, I think these will be better used\l"
	.string "with you.$"

CoaltineTunnel_EventScript_MartEmployeeGoodLuck_Text_0:
# 336 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Don't worry about me, I just need to\n"
	.string "retrace my steps.$"

CoaltineTunnel_EventScript_Miner_Text_0:
# 345 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Surely the gods won't mind if I just try\n"
	.string "to take a little bit of these crystals,\l"
	.string "right?$"

CoaltineTunnel_EventScript_Miner_Text_1:
# 350 "data/maps/CoaltineTunnel/scripts.pory"
	.string "...Maybe I should stop digging...$"

CoaltineTunnel_EventScript_UnderDevelopment_Text_0:
# 429 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This area is currently under\n"
	.string "development. Check back later!$"

CoaltineTunnel_Text_NotEnoughMons::
# 133 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh, you don't have enough Pokémon.$"

CoaltineTunnel_Text_Grunt1Intro::
# 137 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This must be the kid that took down\n"
	.string "those guys in the Evergreen Forest. He\l"
	.string "can't be that tough.\p"
	.string "We'll show you what happens to those\n"
	.string "who meddle in the business of Team\l"
	.string "Umbra!$"

CoaltineTunnel_Text_Grunt1Outro::
# 142 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Maybe you are that tough.$"

CoaltineTunnel_Text_Grunt2Intro::
# 165 "data/maps/CoaltineTunnel/scripts.pory"
	.string "You might have beaten him, but can you\n"
	.string "take on both of us?$"

CoaltineTunnel_Text_Grunt2Outro::
# 169 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Who taught you to battle like that?$"

CoaltineTunnel_Text_FelixIntro::
# 246 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I need to stay in top form if I'm going\n"
	.string "to serve and protect!$"

CoaltineTunnel_Text_FelixOutro::
# 250 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I gotta work harder if I'm going to get\n"
	.string "that promotion.$"

CoaltineTunnel_Text_FelixPostBattle::
# 254 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Have you ever considered a career in\n"
	.string "law enforcement?$"

CoaltineTunnel_Text_MarkIntro::
# 265 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Hey! Are you searching for Pokémon?\p"
	.string "You came along after me! You're rude!$"

CoaltineTunnel_Text_MarkOutro::
# 270 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Ayieeeeh! I'm sorry, forgive me, please!$"

CoaltineTunnel_Text_MarkPostBattle::
# 274 "data/maps/CoaltineTunnel/scripts.pory"
	.string "People don't come here often, so I\n"
	.string "thought there'd be rare Pokémon.$"

CoaltineTunnel_Text_MitchellIntro::
# 285 "data/maps/CoaltineTunnel/scripts.pory"
	.string "This cave isn't even that scary. Bring\n"
	.string "it on!$"

CoaltineTunnel_Text_MitchellOutro::
# 289 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Now that you mention it, is it getting\n"
	.string "darker in here?$"

CoaltineTunnel_Text_MitchellPostBattle::
# 293 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I just gotta stay cool, that's all...$"

CoaltineTunnel_Text_YujiIntro::
# 304 "data/maps/CoaltineTunnel/scripts.pory"
	.string "The harsh conditions in this cave just\n"
	.string "make me tougher!$"

CoaltineTunnel_Text_YujiOutro::
# 308 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Never give up, never surrender.$"

CoaltineTunnel_Text_YujiPostBattle::
# 312 "data/maps/CoaltineTunnel/scripts.pory"
	.string "My grunting echoes a lot in here.$"

CoaltineTunnel_Text_WyattIntro::
# 373 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Rare Pokémon make life worth living!$"

CoaltineTunnel_Text_WyattOutro::
# 377 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Your Pokémon are simply amazing.$"

CoaltineTunnel_Text_WyattPostBattle::
# 381 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Did you know there's a place in Shizen\n"
	.string "that is inhabited entirely by dragons?\l"
	.string "Someday, I'll be able to go there.$"

CoaltineTunnel_Text_PatriciaIntro::
# 392 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Feeling tired yet? Maybe you should lie\n"
	.string "down and rest. I'll watch to make sure\l"
	.string "no one bothers you.$"

CoaltineTunnel_Text_PatriciaOutro::
# 396 "data/maps/CoaltineTunnel/scripts.pory"
	.string "Oh...you're not even tired.$"

CoaltineTunnel_Text_PatriciaPostBattle::
# 400 "data/maps/CoaltineTunnel/scripts.pory"
	.string "I promise I'm not weird.$"
