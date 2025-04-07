RoyalspurGym_MapScripts::
	.byte 0


RoyalspurGym_EventScript_BlackBelt::
# 6 "data/maps/RoyalspurGym/scripts.pory"
	lock
# 7 "data/maps/RoyalspurGym/scripts.pory"
	applymovement 1, RoyalspurGym_EventScript_BlackBelt_Movement_0
# 8 "data/maps/RoyalspurGym/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurGym/scripts.pory"
	msgbox RoyalspurGym_EventScript_BlackBelt_Text_0
# 11 "data/maps/RoyalspurGym/scripts.pory"
	applymovement 1, RoyalspurGym_EventScript_BlackBelt_Movement_1
# 12 "data/maps/RoyalspurGym/scripts.pory"
	waitmovement 1
# 13 "data/maps/RoyalspurGym/scripts.pory"
	closemessage
# 14 "data/maps/RoyalspurGym/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurGym/scripts.pory"
RoyalspurGym_EventScript_BlackBelt_Movement_0:
# 7 "data/maps/RoyalspurGym/scripts.pory"
	face_player
	step_end

# 11 "data/maps/RoyalspurGym/scripts.pory"
RoyalspurGym_EventScript_BlackBelt_Movement_1:
# 11 "data/maps/RoyalspurGym/scripts.pory"
	face_original_direction
	step_end

RoyalspurGym_EventScript_BlackBelt_Text_0:
# 9 "data/maps/RoyalspurGym/scripts.pory"
	.string "I come here to chop wood with my bare\n"
	.string "hands for training.\p"
	.string "HYYAAAHHH!$"
