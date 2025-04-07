Route5_MapScripts::
	.byte 0


Route5_EventScript_PathBlocked::
# 6 "data/maps/Route5/scripts.pory"
	lock
# 7 "data/maps/Route5/scripts.pory"
	applymovement 1, Route5_EventScript_PathBlocked_Movement_0
# 8 "data/maps/Route5/scripts.pory"
	waitmovement 1
# 9 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_PathBlocked_Text_0
# 10 "data/maps/Route5/scripts.pory"
	closemessage
# 11 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_EventScript_PathBlocked_Movement_1
# 12 "data/maps/Route5/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 13 "data/maps/Route5/scripts.pory"
	release
	return


Route5_EventScript_Hiker::
# 17 "data/maps/Route5/scripts.pory"
	lock
# 18 "data/maps/Route5/scripts.pory"
	applymovement 1, Route5_EventScript_PathBlocked_Movement_0
# 19 "data/maps/Route5/scripts.pory"
	waitmovement 1
# 20 "data/maps/Route5/scripts.pory"
	compare VAR_ROYALSPUR_CITY_STATE, 0
	goto_if_ne Route5_EventScript_Hiker_2
# 23 "data/maps/Route5/scripts.pory"
	compare VAR_EVERGREEN_FOREST_STATE, 0
	goto_if_eq Route5_EventScript_Hiker_3
Route5_EventScript_Hiker_1:
# 26 "data/maps/Route5/scripts.pory"
	closemessage
# 27 "data/maps/Route5/scripts.pory"
	release
	return

Route5_EventScript_Hiker_2:
# 21 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Hiker_Text_0
	goto Route5_EventScript_Hiker_1

Route5_EventScript_Hiker_3:
# 24 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_PathBlocked_Text_0
	goto Route5_EventScript_Hiker_1


Route5_EventScript_TunnelSign::
# 42 "data/maps/Route5/scripts.pory"
	lock
# 43 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_TunnelSign_Text_0
# 44 "data/maps/Route5/scripts.pory"
	release
	return


Route5_EventScript_Perry::
# 48 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route5_Text_PerryIntro, Route5_Text_PerryOutro
# 49 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Jasmine::
# 67 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route5_Text_JasmineIntro, Route5_Text_JasmineOutro
# 68 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Cole::
# 86 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_COLE, Route5_Text_ColeIntro, Route5_Text_ColeOutro
# 87 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Anthony::
# 105 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route5_Text_AnthonyIntro, Route5_Text_AnthonyOutro
# 106 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Ball1::
# 124 "data/maps/Route5/scripts.pory"
	lock
# 125 "data/maps/Route5/scripts.pory"
	removeobject 3
# 126 "data/maps/Route5/scripts.pory"
	giveitem ITEM_MAX_REPEL
# 127 "data/maps/Route5/scripts.pory"
	release
	return


Route5_EventScript_Tiana::
# 131 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route5_Text_TianaIntro, Route5_Text_TianaOutro
# 132 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Ball2::
# 150 "data/maps/Route5/scripts.pory"
	lock
# 151 "data/maps/Route5/scripts.pory"
	removeobject 6
# 152 "data/maps/Route5/scripts.pory"
	giveitem ITEM_STARDUST
# 153 "data/maps/Route5/scripts.pory"
	release
	return


Route5_EventScript_Claude::
# 157 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route5_Text_ClaudeIntro, Route5_Text_ClaudeOutro
# 158 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Larry::
# 176 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route5_Text_LarryIntro, Route5_Text_LarryOutro
# 177 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Alexia::
# 195 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, Route5_Text_AlexiaIntro, Route5_Text_AlexiaOutro
# 196 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route5/scripts.pory"
	waitmessage
	end


# 7 "data/maps/Route5/scripts.pory"
Route5_EventScript_PathBlocked_Movement_0:
# 7 "data/maps/Route5/scripts.pory"
	face_player
	step_end

# 11 "data/maps/Route5/scripts.pory"
Route5_EventScript_PathBlocked_Movement_1:
# 11 "data/maps/Route5/scripts.pory"
	walk_down
	step_end

Route5_EventScript_PathBlocked_Text_0:
# 9 "data/maps/Route5/scripts.pory"
	.string "There was a slight collapse inside the\n"
	.string "tunnel and the path is blocked. You'll\l"
	.string "have to wait until we're finished\l"
	.string "clearing it.$"

Route5_EventScript_Hiker_Text_0:
# 21 "data/maps/Route5/scripts.pory"
	.string "We got all of those rocks cleared out.\n"
	.string "The path is back open!$"

Route5_EventScript_TunnelSign_Text_0:
# 43 "data/maps/Route5/scripts.pory"
	.string "Royalspur Tunnel$"

Route5_Text_PerryIntro::
# 54 "data/maps/Route5/scripts.pory"
	.string "This mountain is the best place for my\n"
	.string "bird Pokémon to stretch their wings!$"

Route5_Text_PerryOutro::
# 58 "data/maps/Route5/scripts.pory"
	.string "You shot them down...$"

Route5_Text_PerryPostBattle::
# 62 "data/maps/Route5/scripts.pory"
	.string "What do you think it feels like to fly?$"

Route5_Text_JasmineIntro::
# 73 "data/maps/Route5/scripts.pory"
	.string "Maybe I shouldn't have brought my bike\n"
	.string "up here...$"

Route5_Text_JasmineOutro::
# 77 "data/maps/Route5/scripts.pory"
	.string "This bike is so heavy.$"

Route5_Text_JasminePostBattle::
# 81 "data/maps/Route5/scripts.pory"
	.string "I'm gonna have to camp here before I\n"
	.string "keep going.$"

Route5_Text_ColeIntro::
# 92 "data/maps/Route5/scripts.pory"
	.string "My Pokémon make it a breeze to cook up\n"
	.string "some grub!$"

Route5_Text_ColeOutro::
# 96 "data/maps/Route5/scripts.pory"
	.string "I wish there was more meat out here.$"

Route5_Text_ColePostBattle::
# 100 "data/maps/Route5/scripts.pory"
	.string "You snuffed out my Pokémon!$"

Route5_Text_AnthonyIntro::
# 111 "data/maps/Route5/scripts.pory"
	.string "Speed is everything. Let's see if you\n"
	.string "can keep up!$"

Route5_Text_AnthonyOutro::
# 115 "data/maps/Route5/scripts.pory"
	.string "Phew... You've got the endurance of a\n"
	.string "true trainer!$"

Route5_Text_AnthonyPostBattle::
# 119 "data/maps/Route5/scripts.pory"
	.string "I like riding the 10-speed because it's\n"
	.string "fun, uh, it gives me energy, aaand it's a\l"
	.string "great way to stay in shape.$"

Route5_Text_TianaIntro::
# 137 "data/maps/Route5/scripts.pory"
	.string "Don't underestimate me!$"

Route5_Text_TianaOutro::
# 141 "data/maps/Route5/scripts.pory"
	.string "Okay, you're like, really good.$"

Route5_Text_TianaPostBattle::
# 145 "data/maps/Route5/scripts.pory"
	.string "Will you train my Pokémon for me?$"

Route5_Text_ClaudeIntro::
# 163 "data/maps/Route5/scripts.pory"
	.string "Careful, my Water-types hit like a tidal\n"
	.string "wave!$"

Route5_Text_ClaudeOutro::
# 167 "data/maps/Route5/scripts.pory"
	.string "Welp, back to fishing! Maybe I'll hook a\n"
	.string "stronger one next time!$"

Route5_Text_ClaudePostBattle::
# 171 "data/maps/Route5/scripts.pory"
	.string "I find a lot of good stuff fishing down\n"
	.string "stream, not just Pokémon.$"

Route5_Text_LarryIntro::
# 182 "data/maps/Route5/scripts.pory"
	.string "The great outdoors is the best place to\n"
	.string "train Pokémon! Nothing beats fresh air\l"
	.string "and a good battle!$"

Route5_Text_LarryOutro::
# 186 "data/maps/Route5/scripts.pory"
	.string "Your Pokémon thrive in the outdoors!$"

Route5_Text_LarryPostBattle::
# 190 "data/maps/Route5/scripts.pory"
	.string "Be careful in the cave up ahead.$"

Route5_Text_AlexiaIntro::
# 201 "data/maps/Route5/scripts.pory"
	.string "In a battle, you can't afford to make\n"
	.string "even one mistake. Let's see how you do!$"

Route5_Text_AlexiaOutro::
# 205 "data/maps/Route5/scripts.pory"
	.string "Looks like I need to brush up on my\n"
	.string "strategy.$"

Route5_Text_AlexiaPostBattle::
# 209 "data/maps/Route5/scripts.pory"
	.string "Extra training starts now!$"
