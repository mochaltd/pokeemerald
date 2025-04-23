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
	call Common_EventScript_SaveGame
# 34 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT1_EVERGREEN_FOREST, EvergreenForest_Text_Grunt1Intro, EvergreenForest_Text_Grunt1Outro, EvergreenForest_EventScript_Grunt1Defeated
# 35 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt1Defeated::
# 51 "data/maps/EvergreenForest/scripts.pory"
	lock
# 52 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 53 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 54 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_0
# 55 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 56 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_1
# 57 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 58 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_1
# 59 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt1Defeated_Movement_2
# 60 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 61 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 62 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 63 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt1Defeated_Text_2
# 64 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 65 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Battle
# 66 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Grunt2Battle::
# 70 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT2_EVERGREEN_FOREST, EvergreenForest_Text_Grunt2Outro
# 71 "data/maps/EvergreenForest/scripts.pory"
	goto EvergreenForest_EventScript_Grunt2Defeated
# 72 "data/maps/EvergreenForest/scripts.pory"
	release
	end


EvergreenForest_EventScript_Grunt2Defeated::
# 81 "data/maps/EvergreenForest/scripts.pory"
	lock
# 82 "data/maps/EvergreenForest/scripts.pory"
	applymovement 7, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 83 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 7
# 84 "data/maps/EvergreenForest/scripts.pory"
	applymovement 8, EvergreenForest_EventScript_Grunt2Defeated_Movement_1
# 85 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 8
# 86 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_0
# 87 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 88 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 2
# 89 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/EvergreenForest/scripts.pory"
	removeobject 7
# 91 "data/maps/EvergreenForest/scripts.pory"
	removeobject 8
# 92 "data/maps/EvergreenForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_2
# 94 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 95 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Grunt1Defeated_Movement_0
# 96 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Grunt2Defeated_Text_1
# 102 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 103 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 104 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 0
# 105 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_HexGirl::
# 109 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_ne EvergreenForest_HexGirl_1
# 115 "data/maps/EvergreenForest/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 1
	goto_if_eq EvergreenForest_HexGirl_4
	return

EvergreenForest_HexGirl_1:
# 110 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_0
# 112 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return

EvergreenForest_HexGirl_4:
# 116 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_HexGirl_Text_1
# 117 "data/maps/EvergreenForest/scripts.pory"
	closemessage
	return


EvergreenForest_EventScript_Shrine1::
# 123 "data/maps/EvergreenForest/scripts.pory"
	lock
# 124 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 125 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 126 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine1_Movement_0
# 127 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 128 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 129 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 130 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 131 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 132 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 133 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine2::
# 137 "data/maps/EvergreenForest/scripts.pory"
	lock
# 138 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 139 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 140 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine2_Movement_0
# 141 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 142 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 143 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 144 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 145 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 146 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 147 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Shrine3::
# 151 "data/maps/EvergreenForest/scripts.pory"
	lock
# 152 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_0
# 153 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 154 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_Shrine3_Movement_0
# 155 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 156 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 157 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 158 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Shrine1_Text_1
# 159 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 160 "data/maps/EvergreenForest/scripts.pory"
	setvar VAR_EVERGREEN_FOREST_STATE, 1
# 161 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave1::
# 165 "data/maps/EvergreenForest/scripts.pory"
	lock
# 166 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_0
# 167 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 168 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 169 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 170 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave1_Movement_0
# 171 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 172 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_DontLeave2::
# 176 "data/maps/EvergreenForest/scripts.pory"
	lock
# 177 "data/maps/EvergreenForest/scripts.pory"
	applymovement 2, EvergreenForest_EventScript_Grunt2Defeated_Movement_1
# 178 "data/maps/EvergreenForest/scripts.pory"
	waitmovement 2
# 179 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_DontLeave1_Text_0
# 180 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 181 "data/maps/EvergreenForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenForest_EventScript_DontLeave2_Movement_0
# 182 "data/maps/EvergreenForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 183 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Taylor::
# 187 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, EvergreenForest_Text_TaylorIntro, EvergreenForest_Text_TaylorOutro
# 188 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Drew::
# 208 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_DREW, EvergreenForest_Text_DrewIntro, EvergreenForest_Text_DrewOutro
# 209 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Heidi::
# 228 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, EvergreenForest_Text_HeidiIntro, EvergreenForest_Text_HeidiOutro
# 229 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Leah::
# 247 "data/maps/EvergreenForest/scripts.pory"
	trainerbattle_single TRAINER_LEAH, EvergreenForest_Text_LeahIntro, EvergreenForest_Text_LeahOutro
# 248 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/EvergreenForest/scripts.pory"
	waitmessage
	end


EvergreenForest_EventScript_Sign1::
# 266 "data/maps/EvergreenForest/scripts.pory"
	lock
# 267 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign1_Text_0
# 268 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 269 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball1::
# 273 "data/maps/EvergreenForest/scripts.pory"
	lock
# 274 "data/maps/EvergreenForest/scripts.pory"
	removeobject 5
# 275 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 276 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball2::
# 280 "data/maps/EvergreenForest/scripts.pory"
	lock
# 281 "data/maps/EvergreenForest/scripts.pory"
	removeobject 9
# 282 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_ELIXIR
# 283 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Ball3::
# 287 "data/maps/EvergreenForest/scripts.pory"
	lock
# 288 "data/maps/EvergreenForest/scripts.pory"
	removeobject 6
# 289 "data/maps/EvergreenForest/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 290 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_Sign2::
# 294 "data/maps/EvergreenForest/scripts.pory"
	lock
# 295 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_Sign2_Text_0
# 297 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 298 "data/maps/EvergreenForest/scripts.pory"
	release
	return


EvergreenForest_EventScript_HouseSign::
# 302 "data/maps/EvergreenForest/scripts.pory"
	lock
# 303 "data/maps/EvergreenForest/scripts.pory"
	msgbox EvergreenForest_EventScript_HouseSign_Text_0
# 305 "data/maps/EvergreenForest/scripts.pory"
	closemessage
# 306 "data/maps/EvergreenForest/scripts.pory"
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

# 52 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_0:
# 52 "data/maps/EvergreenForest/scripts.pory"
	face_left
	step_end

# 56 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_1:
# 56 "data/maps/EvergreenForest/scripts.pory"
	face_right
	step_end

# 59 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt1Defeated_Movement_2:
# 59 "data/maps/EvergreenForest/scripts.pory"
	walk_down
# 59 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 82 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_0:
# 82 "data/maps/EvergreenForest/scripts.pory"
	face_up
	step_end

# 84 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_1:
# 84 "data/maps/EvergreenForest/scripts.pory"
	face_down
	step_end

# 93 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Grunt2Defeated_Movement_2:
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_left
# 93 "data/maps/EvergreenForest/scripts.pory"
	walk_up
# 93 "data/maps/EvergreenForest/scripts.pory"
	face_player
	step_end

# 126 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine1_Movement_0:
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 126 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 140 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine2_Movement_0:
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 140 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 154 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_Shrine3_Movement_0:
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_left
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
# 154 "data/maps/EvergreenForest/scripts.pory"
	walk_fast_down
	step_end

# 170 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave1_Movement_0:
# 170 "data/maps/EvergreenForest/scripts.pory"
	walk_down
	step_end

# 181 "data/maps/EvergreenForest/scripts.pory"
EvergreenForest_EventScript_DontLeave2_Movement_0:
# 181 "data/maps/EvergreenForest/scripts.pory"
	walk_up
	step_end

EvergreenForest_EventScript_UmbraPreBattle_Text_0:
# 25 "data/maps/EvergreenForest/scripts.pory"
	.string "Get lost, kid.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_0:
# 54 "data/maps/EvergreenForest/scripts.pory"
	.string "How did I lose to this kid?$"

EvergreenForest_EventScript_Grunt1Defeated_Text_1:
# 58 "data/maps/EvergreenForest/scripts.pory"
	.string "Get outta the way, I'll show you how it's\n"
	.string "done.$"

EvergreenForest_EventScript_Grunt1Defeated_Text_2:
# 63 "data/maps/EvergreenForest/scripts.pory"
	.string "You'll be sorry that you messed with us!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_0:
# 86 "data/maps/EvergreenForest/scripts.pory"
	.string "Come on, let's get out of here. This\n"
	.string "shrine didn't have anything helpful and\l"
	.string "this kid is the real deal!$"

EvergreenForest_EventScript_Grunt2Defeated_Text_1:
# 96 "data/maps/EvergreenForest/scripts.pory"
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
# 110 "data/maps/EvergreenForest/scripts.pory"
	.string "My grandma lives in these woods and\n"
	.string "makes medicine for people, but people\l"
	.string "like to call her a witch.\p"
	.string "They just don't understand her.$"

EvergreenForest_HexGirl_Text_1:
# 116 "data/maps/EvergreenForest/scripts.pory"
	.string "You have to help! They're going to\n"
	.string "destroy the shrine!$"

EvergreenForest_EventScript_Shrine1_Text_0:
# 124 "data/maps/EvergreenForest/scripts.pory"
	.string "Someone please help!$"

EvergreenForest_EventScript_Shrine1_Text_1:
# 130 "data/maps/EvergreenForest/scripts.pory"
	.string "Help! Those strange men came into the\n"
	.string "forest and are defacing the forest\l"
	.string "shrine. You have to do something!$"

EvergreenForest_EventScript_DontLeave1_Text_0:
# 168 "data/maps/EvergreenForest/scripts.pory"
	.string "Please don't leave me!$"

EvergreenForest_EventScript_Sign1_Text_0:
# 267 "data/maps/EvergreenForest/scripts.pory"
	.string "{UP_ARROW} Route 3$"

EvergreenForest_EventScript_Sign2_Text_0:
# 295 "data/maps/EvergreenForest/scripts.pory"
	.string "{DOWN_ARROW} Route 4\l"
	.string "{DOWN_ARROW} Royalspur City$"

EvergreenForest_EventScript_HouseSign_Text_0:
# 303 "data/maps/EvergreenForest/scripts.pory"
	.string "It's hard to read the original sign.\p"
	.string "Someone wrote WITCH'S HUT in really big\n"
	.string "letters.$"

EvergreenForest_Text_Grunt1Intro::
# 39 "data/maps/EvergreenForest/scripts.pory"
	.string "Get out of here, kid. We're looking for\n"
	.string "information on rare Pokémon.\p"
	.string "...\p"
	.string "Why?\p"
	.string "It's none of your business. If you won't\n"
	.string "leave, then I'll make you leave!$"

EvergreenForest_Text_Grunt1Outro::
# 46 "data/maps/EvergreenForest/scripts.pory"
	.string "Who is this kid?$"

EvergreenForest_Text_Grunt2Outro::
# 76 "data/maps/EvergreenForest/scripts.pory"
	.string "The boss isn't gonna like this...$"

EvergreenForest_Text_TaylorIntro::
# 193 "data/maps/EvergreenForest/scripts.pory"
	.string "… … … … … …\p"
	.string "Want to battle?$"

EvergreenForest_Text_TaylorOutro::
# 198 "data/maps/EvergreenForest/scripts.pory"
	.string "Lost it…$"

EvergreenForest_Text_TaylorPostBattle::
# 202 "data/maps/EvergreenForest/scripts.pory"
	.string "I'll try harder…\p"
	.string "For my precious Bug Pokémon…$"

EvergreenForest_Text_DrewIntro::
# 214 "data/maps/EvergreenForest/scripts.pory"
	.string "I think I took a wrong turn, and it's\n"
	.string "dark in here...\p"
	.string "I'll get my confidence back by beating\n"
	.string "you!$"

EvergreenForest_Text_DrewOutro::
# 219 "data/maps/EvergreenForest/scripts.pory"
	.string "Great, now I'm lost with no Pokémon.$"

EvergreenForest_Text_DrewPostBattle::
# 223 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you heard about the witch in the\n"
	.string "forest?$"

EvergreenForest_Text_HeidiIntro::
# 234 "data/maps/EvergreenForest/scripts.pory"
	.string "I thought this forest was going to be\n"
	.string "less scary.$"

EvergreenForest_Text_HeidiOutro::
# 238 "data/maps/EvergreenForest/scripts.pory"
	.string "Can you help me find the exit?$"

EvergreenForest_Text_HeidiPostBattle::
# 242 "data/maps/EvergreenForest/scripts.pory"
	.string "There are some scary people in this\n"
	.string "forest.$"

EvergreenForest_Text_LeahIntro::
# 253 "data/maps/EvergreenForest/scripts.pory"
	.string "Have you ever talked to a dead\n"
	.string "Pokémon?$"

EvergreenForest_Text_LeahOutro::
# 257 "data/maps/EvergreenForest/scripts.pory"
	.string "Sorry, that was a strange thing to ask.$"

EvergreenForest_Text_LeahPostBattle::
# 261 "data/maps/EvergreenForest/scripts.pory"
	.string "Be careful of the weird people in this\n"
	.string "forest.$"
