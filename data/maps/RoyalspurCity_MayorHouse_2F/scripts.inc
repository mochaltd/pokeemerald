RoyalspurCity_MayorHouse_2F_MapScripts::
	.byte 0


RoyalspurCity_MayorHouse_2F_EventScript_Mayor::
# 12 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 6
	goto_if_le RoyalspurCity_MayorHouse_2F_EventScript_Mayor_2
RoyalspurCity_MayorHouse_2F_EventScript_Mayor_1:
# 15 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 8
	goto_if_eq RoyalspurCity_MayorHouse_2F_EventScript_Mayor_5
RoyalspurCity_MayorHouse_2F_EventScript_Mayor_4:
# 18 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 9
	goto_if_ge RoyalspurCity_MayorHouse_2F_EventScript_Mayor_7
	return

RoyalspurCity_MayorHouse_2F_EventScript_Mayor_2:
# 13 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	goto ImTheMayor
	goto RoyalspurCity_MayorHouse_2F_EventScript_Mayor_1

RoyalspurCity_MayorHouse_2F_EventScript_Mayor_5:
# 16 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	goto GiveBikeVoucher
	goto RoyalspurCity_MayorHouse_2F_EventScript_Mayor_4

RoyalspurCity_MayorHouse_2F_EventScript_Mayor_7:
# 19 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	goto Mayor_GoodLuck
	return


ImTheMayor::
# 24 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	lock
# 25 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_0
# 26 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 27 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	msgbox ImTheMayor_Text_0
# 29 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	closemessage
# 30 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_1
# 31 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 32 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	release
	return


GiveBikeVoucher::
# 36 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	lock
# 37 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_0
# 38 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 39 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	msgbox GiveBikeVoucher_Text_0
# 45 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	giveitem ITEM_BIKE_VOUCHER
# 46 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_BIKE_VOUCHER
# 47 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	msgbox GiveBikeVoucher_Text_1
# 49 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	removeitem ITEM_LETTER
# 50 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	closemessage
# 51 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	setvar VAR_ROYALSPUR_CITY_STATE, 9
# 52 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_1
# 53 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 54 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	release
	return


Mayor_GoodLuck::
# 58 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	lock
# 59 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_0
# 60 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 61 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	msgbox Mayor_GoodLuck_Text_0
# 62 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	closemessage
# 63 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	applymovement 1, ImTheMayor_Movement_1
# 64 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	waitmovement 1
# 65 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	release
	return


# 25 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
ImTheMayor_Movement_0:
# 25 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	face_player
	step_end

# 30 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
ImTheMayor_Movement_1:
# 30 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	face_original_direction
	step_end

ImTheMayor_Text_0:
# 27 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	.string "Oh, hello! It's nice to see a new face\n"
	.string "here in Royalspur City, I hope it has\l"
	.string "been to your liking.\p"
	.string "My name is Marlene and I'm the mayor of\n"
	.string "Royalspur City. Please let me know if\l"
	.string "there's anything I can do to make your\l"
	.string "visit better!$"

GiveBikeVoucher_Text_0:
# 39 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	.string "Hello again!\p"
	.string "...\l"
	.string "...\p"
	.string "Oh my gosh, I hope he's okay! Thank you\n"
	.string "so much for rescuing him.\p"
	.string "I've never heard of strange individuals\n"
	.string "like the ones you described, I hope\l"
	.string "they don't make their way to our\l"
	.string "wonderful city.\p"
	.string "Here, let me reward you for what you've\n"
	.string "done.$"

GiveBikeVoucher_Text_1:
# 47 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	.string "Oh, is that letter for me? I can take\n"
	.string "that off of your hands.\p"
	.string "{PLAYER} handed over the Letter!$"

Mayor_GoodLuck_Text_0:
# 61 "data/maps/RoyalspurCity_MayorHouse_2F/scripts.pory"
	.string "Good luck on your journey! You are\n"
	.string "always welcome back in Royalspur City!$"
