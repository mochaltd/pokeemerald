EvergreenForest_MapScripts::
# 2 "data/maps/EvergreenForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvergreenForest_OnTransition
	.byte 0


EvergreenForest_OnTransition::
# 6 "data/maps/EvergreenForest/scripts.pory"
	call_if_set FLAG_EVERGREEN_GRUNTBATTLE, EvergreenForest_EventScript_SetupGruntBattle
	end


EvergreenForest_EventScript_SetupGruntBattle::
# 11 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_ne EvergreenForest_EventScript_SetupGruntBattle_1
# 15 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_eq EvergreenForest_EventScript_SetupGruntBattle_4
	return

EvergreenForest_EventScript_SetupGruntBattle_1:
# 12 "data/maps/EvergreenForest/scripts.pory"
	setflag FLAG_EVERGREEN_GRUNTBATTLE
	return

EvergreenForest_EventScript_SetupGruntBattle_4:
# 16 "data/maps/EvergreenForest/scripts.pory"
	clearflag FLAG_EVERGREEN_GRUNTBATTLE
	return


EvergreenForest_EventScript_UmbraPreBattle::
# 22 "data/maps/EvergreenForest/scripts.pory"
	lock
# 23 "data/maps/EvergreenForest/scripts.pory"
	checktrainerflag TRAINER_GRUNT1_EVERGREEN_FOREST
	goto_if 1, EvergreenForest_EventScript_UmbraPreBattle_2
# 28 "data/maps/EvergreenForest/scripts.pory"
	checktrainerflag TRAINER_GRUNT1_EVERGREEN_FOREST
	goto_if 0, EvergreenForest_EventScript_UmbraPreBattle_3
EvergreenForest_EventScript_UmbraPreBattle_1:
# 36 "data/maps/EvergreenForest/scripts.pory"
	release
	return

EvergreenForest_EventScript_UmbraPreBattle_2:
# 24 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_UmbraPreBattle_Movement_0
# 25 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 26 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Battle
	goto EvergreenForest_EventScript_UmbraPreBattle_1

EvergreenForest_EventScript_UmbraPreBattle_3:
# 29 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_UmbraPreBattle_Movement_0
# 30 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 31 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_UmbraPreBattle_Text_0
# 32 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_UmbraPreBattle_Movement_1
# 33 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 34 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	goto EvergreenForest_EventScript_UmbraPreBattle_1


EvergreenForest_EventScript_Grunt1Battle::
# 40 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 2
# 41 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT1_EVERGREEN_FOREST, EvergreenForest_Text_Grunt1Intro, EvergreenForest_Text_Grunt1Outro, EvergreenForest_EventScript_Grunt1Defeated
# 42 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt1Defeated::
# 58 "data/maps/EvergreenForest/scripts.pory"
	lock
# 59 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 60 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 61 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_0
# 62 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 63 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_1
# 64 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 65 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_1
# 66 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_2
# 67 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 68 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 69 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 70 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_2
# 71 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 72 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Battle
# 73 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Grunt2Battle::
# 77 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT2_EVERGREEN_FOREST, EvergreenForest_Text_Grunt2Outro
# 78 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Defeated
# 79 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt2Defeated::
# 88 "data/maps/EvergreenForest/scripts.pory"
	lock
# 89 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_1
# 90 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 91 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 92 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 93 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_0
# 94 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 95 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 3
# 96 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/EvergreenForest/scripts.pory"
	removeobject 7
# 98 "data/maps/EvergreenForest/scripts.pory"
	removeobject 8
# 99 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 101 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 102 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_1
# 103 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_1
# 109 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 110 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 111 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 0
# 112 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_HexGirl::
# 116 "data/maps/EvergreenForest/scripts.pory"
	checktrainerflag TRAINER_GRUNT2_EVERGREEN_FOREST
	goto_if 1, EvergreenForest_HexGirl_1
# 121 "data/maps/EvergreenForest/scripts.pory"
	checktrainerflag TRAINER_GRUNT2_EVERGREEN_FOREST
	goto_if 0, EvergreenForest_HexGirl_2
	return

EvergreenForest_HexGirl_1:
# 117 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_0
# 119 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return

EvergreenForest_HexGirl_2:
# 122 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_1
# 123 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return


EvergreenForest_EventScript_Shrine1::
# 128 "data/maps/EvergreenForest/scripts.pory"
	lock
# 129 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 130 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 131 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine1_Movement_0
# 132 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 133 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 134 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 135 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 136 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 137 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 138 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine2::
# 142 "data/maps/EvergreenForest/scripts.pory"
	lock
# 143 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 144 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 145 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine2_Movement_0
# 146 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 147 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 148 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 149 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 150 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 151 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 152 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine3::
# 156 "data/maps/EvergreenForest/scripts.pory"
	lock
# 157 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 158 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 159 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine3_Movement_0
# 160 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 162 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 163 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 164 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 165 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 166 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave1::
# 170 "data/maps/EvergreenForest/scripts.pory"
	lock
# 171 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Shrine1_Movement_1
# 172 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 173 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 174 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 175 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave1_Movement_0
# 176 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 177 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave2::
# 181 "data/maps/EvergreenForest/scripts.pory"
	lock
# 182 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_DontLeave2_Movement_0
# 183 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 184 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 185 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 186 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave2_Movement_1
# 187 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 188 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_CantLeaveYet::
# 192 "data/maps/EvergreenForest/scripts.pory"
	lock
# 193 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_CantLeaveYet_Text_0
# 194 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 195 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave2_Movement_1
# 196 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 197 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Taylor::
# 201 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, EvergreenForest_Text_TaylorIntro, EvergreenForest_Text_TaylorOutro
# 202 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Drew::
# 222 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_DREW, EvergreenForest_Text_DrewIntro, EvergreenForest_Text_DrewOutro
# 223 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Heidi::
# 242 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, EvergreenForest_Text_HeidiIntro, EvergreenForest_Text_HeidiOutro
# 243 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Leah::
# 261 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_LEAH, EvergreenForest_Text_LeahIntro, EvergreenForest_Text_LeahOutro
# 262 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Sign1::
# 280 "data/maps/EvergreenForest/scripts.pory"
	lock
# 281 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign1_Text_0
# 282 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 283 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball1::
# 287 "data/maps/EvergreenForest/scripts.pory"
	lock
# 288 "data/maps/EvergreenForest/scripts.pory"
	removeobject 5
# 289 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 290 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball2::
# 294 "data/maps/EvergreenForest/scripts.pory"
	lock
# 295 "data/maps/EvergreenForest/scripts.pory"
	removeobject 9
# 296 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_ELIXIR
# 297 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball3::
# 301 "data/maps/EvergreenForest/scripts.pory"
	lock
# 302 "data/maps/EvergreenForest/scripts.pory"
	removeobject 6
# 303 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 304 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Sign2::
# 308 "data/maps/EvergreenForest/scripts.pory"
	lock
# 309 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign2_Text_0
# 311 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 312 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_HouseSign::
# 316 "data/maps/EvergreenForest/scripts.pory"
	lock
# 317 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_HouseSign_Text_0
# 319 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 320 "data/maps/EvergreenForest/scripts.pory"
	release
	return


# 24 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_UmbraPreBattle_Movement_0:
# 24 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 32 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_UmbraPreBattle_Movement_1:
# 32 "data/maps/EvergreenForest/scripts.pory"
	face_original_direction
	step_end

# 59 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_0:
# 59 "data/maps/EvergreenForest/scripts.pory"
	face_left
	step_end

# 63 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_1:
# 63 "data/maps/EvergreenForest/scripts.pory"
	face_right
	step_end

# 66 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_2:
# 66 "data/maps/EvergreenForest/scripts.pory"
	walk_down
# 66 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 100 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_0:
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 100 "data/maps/EvergreenForest/scripts.pory"
	walk_up
# 100 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 131 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_0:
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 131 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 133 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_1:
# 133 "data/maps/EvergreenForest/scripts.pory"
	face_up
	step_end

# 145 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine2_Movement_0:
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 145 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 159 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine3_Movement_0:
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 159 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 175 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave1_Movement_0:
# 175 "data/maps/EvergreenForest/scripts.pory"
	walk_down
	step_end

# 182 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave2_Movement_0:
# 182 "data/maps/EvergreenForest/scripts.pory"
	face_down
	step_end

# 186 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave2_Movement_1:
# 186 "data/maps/EvergreenForest/scripts.pory"
	walk_up
	step_end

EvergreenForest_EventScript_UmbraPreBattle_Text_0:
# 31 "data/maps/EvergreenForest/scripts.pory"
	.string "Get lost, kid.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_0:
# 61 "data/maps/EvergreenForest/scripts.pory"
	.string "How did I lose to this kid?$"

EvergreenForest_EventScript_Grunt1Defeated_Text_1:
# 65 "data/maps/EvergreenForest/scripts.pory"
	.string "Get outta the way, I'll show you how it's\n"
	.string "done.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_2:
# 70 "data/maps/EvergreenForest/scripts.pory"
	.string "You'll be sorry that you messed with us!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_0:
# 93 "data/maps/EvergreenForest/scripts.pory"
	.string "Come on, let's get out of here. This\n"
	.string "shrine didn't have anything helpful and\l"
	.string "this kid is the real deal!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_1:
# 103 "data/maps/EvergreenForest/scripts.pory"
	.string "Thank you, trainer, those guys were\n"
	.string "scaring me.\p"
	.string "That shrine is dedicated to Mismagius, a\n"
	.string "Pokémon that has protected these\l"
	.string "woods for as long as anyone can\l"
	.string "remember.\p"
	.string "I heard those guys talking about\n"
	.string "forcing dreams and nightmares on\l"
	.string "people...\p"
	.string "The legend of Mismagius is that she\n"
	.string "would inflict nightmares on people who\l"
	.string "wished to harm these woods to make\l"
	.string "them too afraid to enter the forest.\p"
	.string "I'm not sure what they were hoping to\n"
	.string "find, but it worries me that people like\l"
	.string "them are interested in that power...\p"
	.string "Anyways, thank you again for saving the\n"
	.string "shrine. I want you to have this as a\l"
	.string "token of my thanks.$"

EvergreenForest_HexGirl_Text_0:
# 117 "data/maps/EvergreenForest/scripts.pory"
	.string "My grandma lives in these woods and\n"
	.string "makes medicine for people, but people\l"
	.string "like to call her a witch.\p"
	.string "They just don't understand her.$"

EvergreenForest_HexGirl_Text_1:
# 122 "data/maps/EvergreenForest/scripts.pory"
	.string "You have to help! They're going to\n"
	.string "destroy the shrine!$"

EvergreenForest_EventScript_Shrine1_Text_0:
# 129 "data/maps/EvergreenForest/scripts.pory"
	.string "Someone please help!$"

EvergreenForest_EventScript_Shrine1_Text_1:
# 135 "data/maps/EvergreenForest/scripts.pory"
	.string "Help! Those strange men came into the\n"
	.string "forest and are defacing the forest\l"
	.string "shrine. You have to do something!$"

EvergreenForest_EventScript_DontLeave1_Text_0:
# 173 "data/maps/EvergreenForest/scripts.pory"
	.string "Please don't leave me!$"

EvergreenForest_EventScript_CantLeaveYet_Text_0:
# 193 "data/maps/EvergreenForest/scripts.pory"
	.string "I have to stop them!$"

EvergreenForest_EventScript_Sign1_Text_0:
# 281 "data/maps/EvergreenForest/scripts.pory"
	.string "{UP_ARROW} Route 3$"

EvergreenForest_EventScript_Sign2_Text_0:
# 309 "data/maps/EvergreenForest/scripts.pory"
	.string "{DOWN_ARROW} Route 4\l"
	.string "{DOWN_ARROW} Royalspur City$"

EvergreenForest_EventScript_HouseSign_Text_0:
# 317 "data/maps/EvergreenForest/scripts.pory"
	.string "It's hard to read the original sign.\p"
	.string "Someone wrote WITCH'S HUT in really big\n"
	.string "letters.$"

EvergreenForest_Text_Grunt1Intro::
# 46 "data/maps/EvergreenForest/scripts.pory"
	.string "Get out of here, kid. We're looking for\n"
	.string "information on rare Pokémon.\p"
	.string "...\p"
	.string "Why?\p"
	.string "It's none of your business. If you won't\n"
	.string "leave, then I'll make you leave!$"

EvergreenForest_Text_Grunt1Outro::
# 53 "data/maps/EvergreenForest/scripts.pory"
	.string "Who is this kid?$"

EvergreenForest_Text_Grunt2Outro::
# 83 "data/maps/EvergreenForest/scripts.pory"
	.string "The boss isn't gonna like this...$"

EvergreenForest_Text_TaylorIntro::
# 207 "data/maps/EvergreenForest/scripts.pory"
	.string "… … … … … …\p"
	.string "Want to battle?$"

EvergreenForest_Text_TaylorOutro::
# 212 "data/maps/EvergreenForest/scripts.pory"
	.string "Lost it…$"

EvergreenForest_Text_TaylorPostBattle::
# 216 "data/maps/EvergreenForest/scripts.pory"
	.string "I'll try harder…\p"
	.string "For my precious Bug Pokémon…$"

EvergreenForest_Text_DrewIntro::
# 228 "data/maps/EvergreenForest/scripts.pory"
	.string "I think I took a wrong turn, and it's\n"
	.string "dark in here...\p"
	.string "I'll get my confidence back by beating\n"
	.string "you!$"

EvergreenForest_Text_DrewOutro::
# 233 "data/maps/EvergreenForest/scripts.pory"
	.string "Great, now I'm lost with no Pokémon.$"

EvergreenForest_Text_DrewPostBattle::
# 237 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you heard about the witch in the\n"
	.string "forest?$"

EvergreenForest_Text_HeidiIntro::
# 248 "data/maps/EvergreenForest/scripts.pory"
	.string "I thought this forest was going to be\n"
	.string "less scary.$"

EvergreenForest_Text_HeidiOutro::
# 252 "data/maps/EvergreenForest/scripts.pory"
	.string "Can you help me find the exit?$"

EvergreenForest_Text_HeidiPostBattle::
# 256 "data/maps/EvergreenForest/scripts.pory"
	.string "There are some scary people in this\n"
	.string "forest.$"

EvergreenForest_Text_LeahIntro::
# 267 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you ever talked to a dead\n"
	.string "Pokémon?$"

EvergreenForest_Text_LeahOutro::
# 271 "data/maps/EvergreenForest/scripts.pory"
	.string "Sorry, that was a strange thing to ask.$"

EvergreenForest_Text_LeahPostBattle::
# 275 "data/maps/EvergreenForest/scripts.pory"
	.string "Be careful of the weird people in this\n"
	.string "forest.$"
