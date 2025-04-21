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
	applymovement 7, EvergreenForest_EventScript_UmbraPreBattle_Movement_0
# 24 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 25 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_UmbraPreBattle_Text_0
# 26 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_UmbraPreBattle_Movement_1
# 27 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 28 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 29 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Grunt1Battle::
# 33 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT1_EVERGREEN_FOREST, EvergreenForest_Text_Grunt1Intro, EvergreenForest_Text_Grunt1Outro, EvergreenForest_EventScript_Grunt1Defeated
# 34 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt1Defeated::
# 50 "data/maps/EvergreenForest/scripts.pory"
	lock
# 51 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 52 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 53 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_0
# 54 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 55 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_1
# 56 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 57 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_1
# 58 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_2
# 59 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 60 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 61 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 62 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_2
# 63 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 64 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Battle
# 65 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Grunt2Battle::
# 69 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT2_EVERGREEN_FOREST, EvergreenForest_Text_Grunt2Outro
# 70 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Defeated
# 71 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt2Defeated::
# 80 "data/maps/EvergreenForest/scripts.pory"
	lock
# 81 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 82 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 83 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt2Defeated_Movement_1
# 84 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 85 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_0
# 86 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 87 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 2
# 88 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/EvergreenForest/scripts.pory"
	removeobject 7
# 90 "data/maps/EvergreenForest/scripts.pory"
	removeobject 8
# 91 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_2
# 93 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 94 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 95 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_1
# 100 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 101 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 102 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 0
# 103 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_HexGirl::
# 107 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_ne EvergreenForest_HexGirl_1
# 113 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_eq EvergreenForest_HexGirl_4
	return

EvergreenForest_HexGirl_1:
# 108 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_0
# 110 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return

EvergreenForest_HexGirl_4:
# 114 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_1
# 115 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return


EvergreenForest_EventScript_Shrine1::
# 121 "data/maps/EvergreenForest/scripts.pory"
	lock
# 122 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 123 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 124 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine1_Movement_0
# 125 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 126 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 127 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 128 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 129 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 130 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 131 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine2::
# 135 "data/maps/EvergreenForest/scripts.pory"
	lock
# 136 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 137 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 138 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine2_Movement_0
# 139 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 140 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 141 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 142 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 143 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 144 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 145 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine3::
# 149 "data/maps/EvergreenForest/scripts.pory"
	lock
# 150 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 151 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 152 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine3_Movement_0
# 153 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 155 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 156 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 157 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 158 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 159 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave1::
# 163 "data/maps/EvergreenForest/scripts.pory"
	lock
# 164 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 165 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 166 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 167 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 168 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave1_Movement_0
# 169 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 170 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave2::
# 174 "data/maps/EvergreenForest/scripts.pory"
	lock
# 175 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_1
# 176 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 177 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 178 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 179 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave2_Movement_0
# 180 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 181 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Taylor::
# 185 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, EvergreenForest_Text_TaylorIntro, EvergreenForest_Text_TaylorOutro
# 186 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Drew::
# 206 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_DREW, EvergreenForest_Text_DrewIntro, EvergreenForest_Text_DrewOutro
# 207 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Heidi::
# 226 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, EvergreenForest_Text_HeidiIntro, EvergreenForest_Text_HeidiOutro
# 227 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Leah::
# 245 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_LEAH, EvergreenForest_Text_LeahIntro, EvergreenForest_Text_LeahOutro
# 246 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Sign1::
# 264 "data/maps/EvergreenForest/scripts.pory"
	lock
# 265 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign1_Text_0
# 266 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 267 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball1::
# 271 "data/maps/EvergreenForest/scripts.pory"
	lock
# 272 "data/maps/EvergreenForest/scripts.pory"
	removeobject 5
# 273 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 274 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball2::
# 278 "data/maps/EvergreenForest/scripts.pory"
	lock
# 279 "data/maps/EvergreenForest/scripts.pory"
	removeobject 9
# 280 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_ELIXIR
# 281 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball3::
# 285 "data/maps/EvergreenForest/scripts.pory"
	lock
# 286 "data/maps/EvergreenForest/scripts.pory"
	removeobject 6
# 287 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 288 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Sign2::
# 292 "data/maps/EvergreenForest/scripts.pory"
	lock
# 293 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign2_Text_0
# 295 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 296 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_HouseSign::
# 300 "data/maps/EvergreenForest/scripts.pory"
	lock
# 301 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_HouseSign_Text_0
# 303 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 304 "data/maps/EvergreenForest/scripts.pory"
	release
	return


# 23 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_UmbraPreBattle_Movement_0:
# 23 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 26 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_UmbraPreBattle_Movement_1:
# 26 "data/maps/EvergreenForest/scripts.pory"
	face_original_direction
	step_end

# 51 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_0:
# 51 "data/maps/EvergreenForest/scripts.pory"
	face_left
	step_end

# 55 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_1:
# 55 "data/maps/EvergreenForest/scripts.pory"
	face_right
	step_end

# 58 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_2:
# 58 "data/maps/EvergreenForest/scripts.pory"
	walk_down
# 58 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 81 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_0:
# 81 "data/maps/EvergreenForest/scripts.pory"
	face_up
	step_end

# 83 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_1:
# 83 "data/maps/EvergreenForest/scripts.pory"
	face_down
	step_end

# 92 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_2:
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 92 "data/maps/EvergreenForest/scripts.pory"
	walk_up
# 92 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 124 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_0:
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 124 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 138 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine2_Movement_0:
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 138 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 152 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine3_Movement_0:
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 152 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 168 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave1_Movement_0:
# 168 "data/maps/EvergreenForest/scripts.pory"
	walk_down
	step_end

# 179 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave2_Movement_0:
# 179 "data/maps/EvergreenForest/scripts.pory"
	walk_up
	step_end

EvergreenForest_EventScript_UmbraPreBattle_Text_0:
# 25 "data/maps/EvergreenForest/scripts.pory"
	.string "Get lost, kid.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_0:
# 53 "data/maps/EvergreenForest/scripts.pory"
	.string "How did I lose to this kid?$"

EvergreenForest_EventScript_Grunt1Defeated_Text_1:
# 57 "data/maps/EvergreenForest/scripts.pory"
	.string "Get outta the way, I'll show you how it's\n"
	.string "done.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_2:
# 62 "data/maps/EvergreenForest/scripts.pory"
	.string "You'll be sorry that you messed with us!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_0:
# 85 "data/maps/EvergreenForest/scripts.pory"
	.string "Come on, let's get out of here. This\n"
	.string "shrine didn't have anything helpful and\l"
	.string "this kid is the real deal!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_1:
# 95 "data/maps/EvergreenForest/scripts.pory"
	.string "Thank you, trainer, those guys were\n"
	.string "scaring me. That shrine is dedicated to\l"
	.string "Mismagius, a Pokémon that has\l"
	.string "protected these woods for as long as\l"
	.string "anyone can remember.\p"
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
# 108 "data/maps/EvergreenForest/scripts.pory"
	.string "My grandma lives in these woods and\n"
	.string "makes medicine for people, but people\l"
	.string "like to call her a witch.\p"
	.string "They just don't understand her.$"

EvergreenForest_HexGirl_Text_1:
# 114 "data/maps/EvergreenForest/scripts.pory"
	.string "You have to help! They're going to\n"
	.string "destroy the shrine!$"

EvergreenForest_EventScript_Shrine1_Text_0:
# 122 "data/maps/EvergreenForest/scripts.pory"
	.string "Someone please help!$"

EvergreenForest_EventScript_Shrine1_Text_1:
# 128 "data/maps/EvergreenForest/scripts.pory"
	.string "Help! Those strange men came into the\n"
	.string "forest and are defacing the forest\l"
	.string "shrine. You have to do something!$"

EvergreenForest_EventScript_DontLeave1_Text_0:
# 166 "data/maps/EvergreenForest/scripts.pory"
	.string "Please don't leave me!$"

EvergreenForest_EventScript_Sign1_Text_0:
# 265 "data/maps/EvergreenForest/scripts.pory"
	.string "{UP_ARROW} Route 3$"

EvergreenForest_EventScript_Sign2_Text_0:
# 293 "data/maps/EvergreenForest/scripts.pory"
	.string "{DOWN_ARROW} Route 4\l"
	.string "{DOWN_ARROW} Royalspur City$"

EvergreenForest_EventScript_HouseSign_Text_0:
# 301 "data/maps/EvergreenForest/scripts.pory"
	.string "It's hard to read the original sign.\p"
	.string "Someone wrote WITCH'S HUT in really big\n"
	.string "letters.$"

EvergreenForest_Text_Grunt1Intro::
# 38 "data/maps/EvergreenForest/scripts.pory"
	.string "Get out of here, kid. We're looking for\n"
	.string "information on rare Pokémon.\p"
	.string "...\p"
	.string "Why?\p"
	.string "It's none of your business. If you won't\n"
	.string "leave, then I'll make you leave!$"

EvergreenForest_Text_Grunt1Outro::
# 45 "data/maps/EvergreenForest/scripts.pory"
	.string "Who is this kid?$"

EvergreenForest_Text_Grunt2Outro::
# 75 "data/maps/EvergreenForest/scripts.pory"
	.string "The boss isn't gonna like this...$"

EvergreenForest_Text_TaylorIntro::
# 191 "data/maps/EvergreenForest/scripts.pory"
	.string "… … … … … …\p"
	.string "Want to battle?$"

EvergreenForest_Text_TaylorOutro::
# 196 "data/maps/EvergreenForest/scripts.pory"
	.string "Lost it…$"

EvergreenForest_Text_TaylorPostBattle::
# 200 "data/maps/EvergreenForest/scripts.pory"
	.string "I'll try harder…\p"
	.string "For my precious Bug Pokémon…$"

EvergreenForest_Text_DrewIntro::
# 212 "data/maps/EvergreenForest/scripts.pory"
	.string "I think I took a wrong turn, and it's\n"
	.string "dark in here...\p"
	.string "I'll get my confidence back by beating\n"
	.string "you!$"

EvergreenForest_Text_DrewOutro::
# 217 "data/maps/EvergreenForest/scripts.pory"
	.string "Great, now I'm lost with no Pokémon.$"

EvergreenForest_Text_DrewPostBattle::
# 221 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you heard about the witch in the\n"
	.string "forest?$"

EvergreenForest_Text_HeidiIntro::
# 232 "data/maps/EvergreenForest/scripts.pory"
	.string "I thought this forest was going to be\n"
	.string "less scary.$"

EvergreenForest_Text_HeidiOutro::
# 236 "data/maps/EvergreenForest/scripts.pory"
	.string "Can you help me find the exit?$"

EvergreenForest_Text_HeidiPostBattle::
# 240 "data/maps/EvergreenForest/scripts.pory"
	.string "There are some scary people in this\n"
	.string "forest.$"

EvergreenForest_Text_LeahIntro::
# 251 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you ever talked to a dead\n"
	.string "Pokémon?$"

EvergreenForest_Text_LeahOutro::
# 255 "data/maps/EvergreenForest/scripts.pory"
	.string "Sorry, that was a strange thing to ask.$"

EvergreenForest_Text_LeahPostBattle::
# 259 "data/maps/EvergreenForest/scripts.pory"
	.string "Be careful of the weird people in this\n"
	.string "forest.$"
