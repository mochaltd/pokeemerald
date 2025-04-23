BravefortTown_TwoSeaTower_Rooms_MapScripts::
	.byte 0


BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman::
# 6 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 7 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 10, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0
# 8 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 10
# 9 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Text_0
# 13 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 14 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 10, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_1
# 15 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 10
# 16 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Rooms_EventScript_Shelby::
# 20 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, BravefortTown_TwoSeaTower_Rooms_Text_ShelbyIntro, BravefortTown_TwoSeaTower_Rooms_Text_ShelbyOutro
# 21 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_Text_ShelbyPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_TwoSeaTower_Rooms_EventScript_Melissa::
# 39 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, BravefortTown_TwoSeaTower_Rooms_Text_MelissaIntro, BravefortTown_TwoSeaTower_Rooms_Text_MelissaOutro
# 40 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_TwoSeaTower_Rooms_EventScript_Dwayne::
# 58 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, BravefortTown_TwoSeaTower_Rooms_Text_DwayneIntro, BravefortTown_TwoSeaTower_Rooms_Text_DwayneOutro
# 59 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_TwoSeaTower_Rooms_EventScript_Fernando::
# 79 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, BravefortTown_TwoSeaTower_Rooms_Text_FernandoIntro, BravefortTown_TwoSeaTower_Rooms_Text_FernandoOutro, BravefortTown_TwoSeaTower_Rooms_EventScript_LeaveTown
# 80 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmessage
# 82 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	end


BravefortTown_TwoSeaTower_Rooms_EventScript_LeaveTown::
# 102 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 103 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_LeaveTown_Text_0
# 105 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 106 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	setflag FLAG_GOT_PASSWORD
# 107 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman2::
# 111 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 112 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 4, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0
# 113 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 4
# 114 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman2_Text_0
# 115 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 116 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 4, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_1
# 117 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 4
# 118 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Rooms_EventScript_Haley::
# 122 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, BravefortTown_TwoSeaTower_Rooms_Text_HaleyIntro, BravefortTown_TwoSeaTower_Rooms_Text_HaleyOutro
# 123 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmessage
	end


BravefortTown_TwoSeaTower_Rooms_EventScript_Sister::
# 142 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 143 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 7, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0
# 144 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 7
# 145 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_Sister_Text_0
# 146 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 147 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 7, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_1
# 148 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 7
# 149 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Rooms_EventScript_LittleGirl::
# 153 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 154 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 8, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0
# 155 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 8
# 156 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_LittleGirl_Text_0
# 157 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 158 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 8, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_1
# 159 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 8
# 160 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


BravefortTown_TwoSeaTower_Rooms_EventScript_Rest::
# 164 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	lock
# 165 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	applymovement 2, BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0
# 166 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	waitmovement 2
# 167 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	msgbox BravefortTown_TwoSeaTower_Rooms_EventScript_Rest_Text_0
# 168 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	closemessage
# 169 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	release
	return


# 7 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_0:
# 7 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	face_player
	step_end

# 14 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Movement_1:
# 14 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	face_original_direction
	step_end

BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman_Text_0:
# 9 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "I like to spend my time traveling to\n"
	.string "different regions and seeing the world.\p"
	.string "Other regions I've been to have what\n"
	.string "they call a 'Gym Challenge' where\l"
	.string "trainers from all across the region can\l"
	.string "battle Gym Leaders for badges and get\l"
	.string "stronger.\p"
	.string "Eventually some trainers can become so\n"
	.string "strong that they can challenge the\l"
	.string "Pokémon League and maybe even become\l"
	.string "the Champion of their region.\p"
	.string "I wonder if Shizen will ever adopt a\n"
	.string "system like that to motivate trainers.$"

BravefortTown_TwoSeaTower_Rooms_EventScript_LeaveTown_Text_0:
# 103 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "The gang call themselves the Venom\n"
	.string "Lotus, but I don't know what they're\l"
	.string "planning. I'm not sure where the\l"
	.string "password goes either but hopefully it\l"
	.string "helps.\p"
	.string "Be safe out there.$"

BravefortTown_TwoSeaTower_Rooms_EventScript_Gentleman2_Text_0:
# 114 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "A battle? Oh, I'm much too old for that,\n"
	.string "but my granddaughter over there is an\l"
	.string "excellent trainer.$"

BravefortTown_TwoSeaTower_Rooms_EventScript_Sister_Text_0:
# 145 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "My parents left my sister and I here\n"
	.string "while they took the yacht out. It's so\l"
	.string "unfair.$"

BravefortTown_TwoSeaTower_Rooms_EventScript_LittleGirl_Text_0:
# 156 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "I wanna go to the beach NOW!!$"

BravefortTown_TwoSeaTower_Rooms_EventScript_Rest_Text_0:
# 167 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "This is a resting room. Feel free to lie\n"
	.string "down on the bed for a bit.$"

BravefortTown_TwoSeaTower_Rooms_Text_ShelbyIntro::
# 26 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "My Pokémon keep me young!$"

BravefortTown_TwoSeaTower_Rooms_Text_ShelbyOutro::
# 30 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "The fire of youth burns in my heart!$"

BravefortTown_TwoSeaTower_Rooms_Text_ShelbyPostBattle::
# 34 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Take care of your Pokémon and they will\n"
	.string "take care of you.$"

BravefortTown_TwoSeaTower_Rooms_Text_MelissaIntro::
# 45 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "My Pokémon is beautiful!$"

BravefortTown_TwoSeaTower_Rooms_Text_MelissaOutro::
# 49 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Maybe we need some lessons in being\n"
	.string "graceful during battle.$"

BravefortTown_TwoSeaTower_Rooms_Text_MelissaPostBattle::
# 53 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Can I give your Pokémon a makeover?$"

BravefortTown_TwoSeaTower_Rooms_Text_DwayneIntro::
# 64 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Uuugghhh...\p"
	.string "I don't feel so good.\p"
	.string "Oh, you want to battle? Sure, I guess\n"
	.string "so.$"

BravefortTown_TwoSeaTower_Rooms_Text_DwayneOutro::
# 70 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "I think I need to go to bed.$"

BravefortTown_TwoSeaTower_Rooms_Text_DwaynePostBattle::
# 74 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "I gotta stop drinking so\n"
	.string "much...uh...soda.$"

BravefortTown_TwoSeaTower_Rooms_Text_FernandoIntro::
# 86 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Are you looking for something, or just a\n"
	.string "fight?!\p"
	.string "...\p"
	.string "Actually, I have to be honest, I don't\n"
	.string "want to be in the gang anymore, they've\l"
	.string "gotten out of control.\p"
	.string "Here, I'll give you this password if you\n"
	.string "can beat me, I have to prove I put up\l"
	.string "some sort of fight.$"

BravefortTown_TwoSeaTower_Rooms_Text_FernandoOutro::
# 93 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "The password is WEEZING.$"

BravefortTown_TwoSeaTower_Rooms_Text_FernandoPostBattle::
# 97 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Be safe out there.$"

BravefortTown_TwoSeaTower_Rooms_Text_HaleyIntro::
# 128 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "I love my grandpa, but we've been\n"
	.string "playing the same card game for an hour.\p"
	.string "Can you give me some excitement?$"

BravefortTown_TwoSeaTower_Rooms_Text_HaleyOutro::
# 133 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "What a great battle!$"

BravefortTown_TwoSeaTower_Rooms_Text_HaleyPostBattle::
# 137 "data/maps/BravefortTown_TwoSeaTower_Rooms/scripts.pory"
	.string "Don't tell my grandpa what I said...$"
