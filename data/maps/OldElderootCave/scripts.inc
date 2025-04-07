OldElderootCave_MapScripts::
# 2 "data/maps/OldElderootCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldElderootCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldElderootCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/OldElderootCave/scripts.pory"
	map_script_2 VAR_ELDEROOT_TOWN_STATE, 6, GetPokemon
	.2byte 0


GetPokemon::
# 8 "data/maps/OldElderootCave/scripts.pory"
	lock
# 9 "data/maps/OldElderootCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GetPokemon_Movement_0
# 10 "data/maps/OldElderootCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/OldElderootCave/scripts.pory"
	msgbox GetPokemon_Text_0
# 20 "data/maps/OldElderootCave/scripts.pory"
	waitmessage
# 21 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 22 "data/maps/OldElderootCave/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 7
# 23 "data/maps/OldElderootCave/scripts.pory"
	release
	return


OldElderootCave_EventScripts_Pokeball1::
# 27 "data/maps/OldElderootCave/scripts.pory"
	lockall
# 28 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_PICHU, OldElderootCave_EventScripts_Pokeball1_2
	return

OldElderootCave_EventScripts_Pokeball1_1:
# 29 "data/maps/OldElderootCave/scripts.pory"
	showmonpic SPECIES_PICHU, 10, 3
# 30 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_0, MSGBOX_YESNO
# 31 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldElderootCave_EventScripts_Pokeball1_10
# 55 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 56 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_TakeYourTime
# 57 "data/maps/OldElderootCave/scripts.pory"
	closemessage
OldElderootCave_EventScripts_Pokeball1_9:
# 59 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 60 "data/maps/OldElderootCave/scripts.pory"
	releaseall
	end

OldElderootCave_EventScripts_Pokeball1_2:
# 28 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_ROWLET, OldElderootCave_EventScripts_Pokeball1_4
	return

OldElderootCave_EventScripts_Pokeball1_4:
# 28 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_CYNDAQUIL, OldElderootCave_EventScripts_Pokeball1_6
	return

OldElderootCave_EventScripts_Pokeball1_6:
# 28 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_OSHAWOTT, OldElderootCave_EventScripts_Pokeball1_1
	return

OldElderootCave_EventScripts_Pokeball1_10:
# 32 "data/maps/OldElderootCave/scripts.pory"
	givemon SPECIES_PICHU, 5, ITEM_ORAN_BERRY
# 33 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldElderootCave_EventScripts_Pokeball1_13
# 41 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldElderootCave_EventScripts_Pokeball1_14
# 50 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 51 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_2
	goto OldElderootCave_EventScripts_Pokeball1_9

OldElderootCave_EventScripts_Pokeball1_13:
# 34 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_1
# 36 "data/maps/OldElderootCave/scripts.pory"
	removeobject 2
# 37 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_PICHU
# 38 "data/maps/OldElderootCave/scripts.pory"
	call NicknamePichuPartyMon
# 39 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenPichu
	goto OldElderootCave_EventScripts_Pokeball1_9

OldElderootCave_EventScripts_Pokeball1_14:
# 42 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_1
# 44 "data/maps/OldElderootCave/scripts.pory"
	removeobject 2
# 45 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_PICHU
# 46 "data/maps/OldElderootCave/scripts.pory"
	call NicknamePichuBoxMon
# 47 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenPichu
	goto OldElderootCave_EventScripts_Pokeball1_9


OldElderootCave_EventScripts_Pokeball2::
# 66 "data/maps/OldElderootCave/scripts.pory"
	lockall
# 67 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_PICHU, OldElderootCave_EventScripts_Pokeball2_2
	return

OldElderootCave_EventScripts_Pokeball2_1:
# 68 "data/maps/OldElderootCave/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 69 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball2_Text_0, MSGBOX_YESNO
# 70 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldElderootCave_EventScripts_Pokeball2_10
# 94 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 95 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_TakeYourTime
# 96 "data/maps/OldElderootCave/scripts.pory"
	closemessage
OldElderootCave_EventScripts_Pokeball2_9:
# 98 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 99 "data/maps/OldElderootCave/scripts.pory"
	releaseall
	end

OldElderootCave_EventScripts_Pokeball2_2:
# 67 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_ROWLET, OldElderootCave_EventScripts_Pokeball2_4
	return

OldElderootCave_EventScripts_Pokeball2_4:
# 67 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_CYNDAQUIL, OldElderootCave_EventScripts_Pokeball2_6
	return

OldElderootCave_EventScripts_Pokeball2_6:
# 67 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_OSHAWOTT, OldElderootCave_EventScripts_Pokeball2_1
	return

OldElderootCave_EventScripts_Pokeball2_10:
# 71 "data/maps/OldElderootCave/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 72 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldElderootCave_EventScripts_Pokeball2_13
# 80 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldElderootCave_EventScripts_Pokeball2_14
# 89 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 90 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_2
	goto OldElderootCave_EventScripts_Pokeball2_9

OldElderootCave_EventScripts_Pokeball2_13:
# 73 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball2_Text_1
# 75 "data/maps/OldElderootCave/scripts.pory"
	removeobject 3
# 76 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_OSHAWOTT
# 77 "data/maps/OldElderootCave/scripts.pory"
	call NicknameOshawottPartyMon
# 78 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenOshawatt
	goto OldElderootCave_EventScripts_Pokeball2_9

OldElderootCave_EventScripts_Pokeball2_14:
# 81 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball2_Text_1
# 83 "data/maps/OldElderootCave/scripts.pory"
	removeobject 3
# 84 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_OSHAWOTT
# 85 "data/maps/OldElderootCave/scripts.pory"
	call NicknameOshawottBoxMon
# 86 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenOshawatt
	goto OldElderootCave_EventScripts_Pokeball2_9


OldElderootCave_EventScripts_Pokeball3::
# 105 "data/maps/OldElderootCave/scripts.pory"
	lockall
# 106 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_PICHU, OldElderootCave_EventScripts_Pokeball3_2
	return

OldElderootCave_EventScripts_Pokeball3_1:
# 107 "data/maps/OldElderootCave/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 108 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball3_Text_0, MSGBOX_YESNO
# 109 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldElderootCave_EventScripts_Pokeball3_10
# 133 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 134 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_TakeYourTime
# 135 "data/maps/OldElderootCave/scripts.pory"
	closemessage
OldElderootCave_EventScripts_Pokeball3_9:
# 137 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 138 "data/maps/OldElderootCave/scripts.pory"
	releaseall
	end

OldElderootCave_EventScripts_Pokeball3_2:
# 106 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_ROWLET, OldElderootCave_EventScripts_Pokeball3_4
	return

OldElderootCave_EventScripts_Pokeball3_4:
# 106 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_CYNDAQUIL, OldElderootCave_EventScripts_Pokeball3_6
	return

OldElderootCave_EventScripts_Pokeball3_6:
# 106 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_OSHAWOTT, OldElderootCave_EventScripts_Pokeball3_1
	return

OldElderootCave_EventScripts_Pokeball3_10:
# 110 "data/maps/OldElderootCave/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_ORAN_BERRY
# 111 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldElderootCave_EventScripts_Pokeball3_13
# 119 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldElderootCave_EventScripts_Pokeball3_14
# 128 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 129 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_2
	goto OldElderootCave_EventScripts_Pokeball3_9

OldElderootCave_EventScripts_Pokeball3_13:
# 112 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball3_Text_1
# 114 "data/maps/OldElderootCave/scripts.pory"
	removeobject 5
# 115 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_ROWLET
# 116 "data/maps/OldElderootCave/scripts.pory"
	call NicknameRowletPartyMon
# 117 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenRowlet
	goto OldElderootCave_EventScripts_Pokeball3_9

OldElderootCave_EventScripts_Pokeball3_14:
# 120 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball3_Text_1
# 122 "data/maps/OldElderootCave/scripts.pory"
	removeobject 5
# 123 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_ROWLET
# 124 "data/maps/OldElderootCave/scripts.pory"
	call NicknameRowletBoxMon
# 125 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenRowlet
	goto OldElderootCave_EventScripts_Pokeball3_9


OldElderootCave_EventScripts_Pokeball4::
# 144 "data/maps/OldElderootCave/scripts.pory"
	lockall
# 145 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_PICHU, OldElderootCave_EventScripts_Pokeball4_2
	return

OldElderootCave_EventScripts_Pokeball4_1:
# 146 "data/maps/OldElderootCave/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 147 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball4_Text_0, MSGBOX_YESNO
# 148 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldElderootCave_EventScripts_Pokeball4_10
# 172 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 173 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_TakeYourTime
# 174 "data/maps/OldElderootCave/scripts.pory"
	closemessage
OldElderootCave_EventScripts_Pokeball4_9:
# 176 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 177 "data/maps/OldElderootCave/scripts.pory"
	releaseall
	end

OldElderootCave_EventScripts_Pokeball4_2:
# 145 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_ROWLET, OldElderootCave_EventScripts_Pokeball4_4
	return

OldElderootCave_EventScripts_Pokeball4_4:
# 145 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_CYNDAQUIL, OldElderootCave_EventScripts_Pokeball4_6
	return

OldElderootCave_EventScripts_Pokeball4_6:
# 145 "data/maps/OldElderootCave/scripts.pory"
	goto_if_unset FLAG_GOT_OSHAWOTT, OldElderootCave_EventScripts_Pokeball4_1
	return

OldElderootCave_EventScripts_Pokeball4_10:
# 149 "data/maps/OldElderootCave/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 150 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldElderootCave_EventScripts_Pokeball4_13
# 158 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldElderootCave_EventScripts_Pokeball4_14
# 167 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 168 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball1_Text_2
	goto OldElderootCave_EventScripts_Pokeball4_9

OldElderootCave_EventScripts_Pokeball4_13:
# 151 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball4_Text_1
# 153 "data/maps/OldElderootCave/scripts.pory"
	removeobject 4
# 154 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_CYNDAQUIL
# 155 "data/maps/OldElderootCave/scripts.pory"
	call NicknameCyndaquilPartyMon
# 156 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenCyndaquil
	goto OldElderootCave_EventScripts_Pokeball4_9

OldElderootCave_EventScripts_Pokeball4_14:
# 159 "data/maps/OldElderootCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Pokeball4_Text_1
# 161 "data/maps/OldElderootCave/scripts.pory"
	removeobject 4
# 162 "data/maps/OldElderootCave/scripts.pory"
	setflag FLAG_GOT_CYNDAQUIL
# 163 "data/maps/OldElderootCave/scripts.pory"
	call NicknameCyndaquilBoxMon
# 164 "data/maps/OldElderootCave/scripts.pory"
	call PokemonChosenCyndaquil
	goto OldElderootCave_EventScripts_Pokeball4_9


PokemonChosenPichu::
# 187 "data/maps/OldElderootCave/scripts.pory"
	lock
# 188 "data/maps/OldElderootCave/scripts.pory"
	msgbox PokemonChosenPichu_Text_0
# 191 "data/maps/OldElderootCave/scripts.pory"
	waitmessage
# 192 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 193 "data/maps/OldElderootCave/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 8
# 194 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 195 "data/maps/OldElderootCave/scripts.pory"
	removeobject 3
# 196 "data/maps/OldElderootCave/scripts.pory"
	removeobject 4
# 197 "data/maps/OldElderootCave/scripts.pory"
	removeobject 5
# 198 "data/maps/OldElderootCave/scripts.pory"
	removeobject 6
# 199 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/OldElderootCave/scripts.pory"
	release
	return


PokemonChosenOshawatt::
# 204 "data/maps/OldElderootCave/scripts.pory"
	lock
# 205 "data/maps/OldElderootCave/scripts.pory"
	msgbox PokemonChosenOshawatt_Text_0
# 208 "data/maps/OldElderootCave/scripts.pory"
	waitmessage
# 209 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 210 "data/maps/OldElderootCave/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 8
# 211 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 212 "data/maps/OldElderootCave/scripts.pory"
	removeobject 2
# 213 "data/maps/OldElderootCave/scripts.pory"
	removeobject 4
# 214 "data/maps/OldElderootCave/scripts.pory"
	removeobject 5
# 215 "data/maps/OldElderootCave/scripts.pory"
	removeobject 6
# 216 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 217 "data/maps/OldElderootCave/scripts.pory"
	release
	return


PokemonChosenRowlet::
# 221 "data/maps/OldElderootCave/scripts.pory"
	lock
# 222 "data/maps/OldElderootCave/scripts.pory"
	msgbox PokemonChosenRowlet_Text_0
# 225 "data/maps/OldElderootCave/scripts.pory"
	waitmessage
# 226 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 227 "data/maps/OldElderootCave/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 8
# 228 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/OldElderootCave/scripts.pory"
	removeobject 2
# 230 "data/maps/OldElderootCave/scripts.pory"
	removeobject 3
# 231 "data/maps/OldElderootCave/scripts.pory"
	removeobject 4
# 232 "data/maps/OldElderootCave/scripts.pory"
	removeobject 6
# 233 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 234 "data/maps/OldElderootCave/scripts.pory"
	release
	return


PokemonChosenCyndaquil::
# 238 "data/maps/OldElderootCave/scripts.pory"
	lock
# 239 "data/maps/OldElderootCave/scripts.pory"
	msgbox PokemonChosenCyndaquil_Text_0
# 242 "data/maps/OldElderootCave/scripts.pory"
	waitmessage
# 243 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 244 "data/maps/OldElderootCave/scripts.pory"
	setvar VAR_ELDEROOT_TOWN_STATE, 8
# 245 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/OldElderootCave/scripts.pory"
	removeobject 2
# 247 "data/maps/OldElderootCave/scripts.pory"
	removeobject 3
# 248 "data/maps/OldElderootCave/scripts.pory"
	removeobject 5
# 249 "data/maps/OldElderootCave/scripts.pory"
	removeobject 6
# 250 "data/maps/OldElderootCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 251 "data/maps/OldElderootCave/scripts.pory"
	release
	return


NicknamePichuPartyMon::
# 255 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknamePichuPartyMon_Text_0, MSGBOX_YESNO
# 256 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 257 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichuPartyMon_1
	return

NicknamePichuPartyMon_1:
# 258 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 259 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknamePichuBoxMon::
# 264 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknamePichuPartyMon_Text_0, MSGBOX_YESNO
# 265 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 266 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichuBoxMon_1
	return

NicknamePichuBoxMon_1:
# 267 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 268 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


NicknameOshawottPartyMon::
# 273 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameOshawottPartyMon_Text_0, MSGBOX_YESNO
# 274 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 275 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameOshawottPartyMon_1
	return

NicknameOshawottPartyMon_1:
# 276 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 277 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameOshawottBoxMon::
# 282 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameOshawottPartyMon_Text_0, MSGBOX_YESNO
# 283 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 284 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameOshawottBoxMon_1
	return

NicknameOshawottBoxMon_1:
# 285 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 286 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


NicknameRowletPartyMon::
# 291 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameRowletPartyMon_Text_0, MSGBOX_YESNO
# 292 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 293 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameRowletPartyMon_1
	return

NicknameRowletPartyMon_1:
# 294 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 295 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameRowletBoxMon::
# 300 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameRowletPartyMon_Text_0, MSGBOX_YESNO
# 301 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 302 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameRowletBoxMon_1
	return

NicknameRowletBoxMon_1:
# 303 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 304 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


NicknameCyndaquilPartyMon::
# 309 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameCyndaquilPartyMon_Text_0, MSGBOX_YESNO
# 310 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 311 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameCyndaquilPartyMon_1
	return

NicknameCyndaquilPartyMon_1:
# 312 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 313 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameCyndaquilBoxMon::
# 318 "data/maps/OldElderootCave/scripts.pory"
	msgbox NicknameCyndaquilPartyMon_Text_0, MSGBOX_YESNO
# 319 "data/maps/OldElderootCave/scripts.pory"
	hidemonpic
# 320 "data/maps/OldElderootCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameCyndaquilBoxMon_1
	return

NicknameCyndaquilBoxMon_1:
# 321 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 322 "data/maps/OldElderootCave/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


OldElderootCave_EventScripts_Primaroot::
# 329 "data/maps/OldElderootCave/scripts.pory"
	lock
# 330 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_Primaroot_Text_0
# 332 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 333 "data/maps/OldElderootCave/scripts.pory"
	release
	return


OldElderootCave_EventScripts_DontForgetPokemon::
# 337 "data/maps/OldElderootCave/scripts.pory"
	lock
# 338 "data/maps/OldElderootCave/scripts.pory"
	msgbox OldElderootCave_EventScripts_DontForgetPokemon_Text_0
# 339 "data/maps/OldElderootCave/scripts.pory"
	closemessage
# 340 "data/maps/OldElderootCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldElderootCave_EventScripts_DontForgetPokemon_Movement_0
# 341 "data/maps/OldElderootCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 342 "data/maps/OldElderootCave/scripts.pory"
	release
	return


# 9 "data/maps/OldElderootCave/scripts.pory"
GetPokemon_Movement_0:
# 9 "data/maps/OldElderootCave/scripts.pory"
	walk_up
# 9 "data/maps/OldElderootCave/scripts.pory"
	walk_up
# 9 "data/maps/OldElderootCave/scripts.pory"
	walk_up
# 9 "data/maps/OldElderootCave/scripts.pory"
	walk_up
	step_end

# 340 "data/maps/OldElderootCave/scripts.pory"
OldElderootCave_EventScripts_DontForgetPokemon_Movement_0:
# 340 "data/maps/OldElderootCave/scripts.pory"
	walk_up
	step_end

GetPokemon_Text_0:
# 11 "data/maps/OldElderootCave/scripts.pory"
	.string "Welcome, {PLAYER}. It is here that\n"
	.string "your Pokémon journey will begin.\p"
	.string "In order to bring Celebi back home, you\n"
	.string "must prove yourself as a trainer, and\l"
	.string "have an astounding bond with your\l"
	.string "Pokémon.\p"
	.string "You must travel to the temples of the\n"
	.string "League of Eight, spread throughout the\l"
	.string "Shizen region.\p"
	.string "The League of Eight were the eight\n"
	.string "trainers that banded together to stop\l"
	.string "DIALGA and PALKIA and ended the War of\l"
	.string "Time.\p"
	.string "In each temple resides an avatar of\n"
	.string "each member of the League of Eight,\l"
	.string "where you must battle them with your\l"
	.string "Pokémon.\p"
	.string "If you're able to emerge victorious,\n"
	.string "they will bestow upon you a STONE.\l"
	.string "These eight STONES will be necessary in\l"
	.string "order to bring Celebi back.\p"
	.string "Now, the time has come for you to\n"
	.string "choose your first Pokémon.\p"
	.string "In front of you are Poké Balls that\n"
	.string "contain rare Pokémon that have existed\l"
	.string "since the birth of the Shizen region.\p"
	.string "I have kept them here for safekeeping\n"
	.string "and one of them will serve you greatly\l"
	.string "on your journey. Choose the partner\l"
	.string "that speaks to your heart the most.$"

OldElderootCave_EventScripts_Pokeball1_Text_0:
# 30 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to choose Pichu, the Tiny\n"
	.string "Mouse Pokémon?$"

OldElderootCave_EventScripts_Pokeball1_Text_1:
# 35 "data/maps/OldElderootCave/scripts.pory"
	.string "You received a Pichu!$"

OldElderootCave_EventScripts_Pokeball1_Text_2:
# 51 "data/maps/OldElderootCave/scripts.pory"
	.string "You don't have any room.$"

OldElderootCave_EventScripts_Pokeball2_Text_0:
# 69 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to choose Oshawott, the\n"
	.string "Sea Otter Pokémon?$"

OldElderootCave_EventScripts_Pokeball2_Text_1:
# 74 "data/maps/OldElderootCave/scripts.pory"
	.string "You received an Oshawott!$"

OldElderootCave_EventScripts_Pokeball3_Text_0:
# 108 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to choose Rowlet, the Grass\n"
	.string "Quill Pokémon?$"

OldElderootCave_EventScripts_Pokeball3_Text_1:
# 113 "data/maps/OldElderootCave/scripts.pory"
	.string "You received a Rowlet!$"

OldElderootCave_EventScripts_Pokeball4_Text_0:
# 147 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to choose Cyndaquil, the\n"
	.string "Fire Mouse Pokémon?$"

OldElderootCave_EventScripts_Pokeball4_Text_1:
# 152 "data/maps/OldElderootCave/scripts.pory"
	.string "You received a Cyndaquil!$"

PokemonChosenPichu_Text_0:
# 188 "data/maps/OldElderootCave/scripts.pory"
	.string "A great choice indeed, young\n"
	.string "{PLAYER}. You and Pichu can now begin\l"
	.string "the greatest adventure known to\l"
	.string "Shizen, together.\p"
	.string "Selene, the Leader of Darkness, will be\n"
	.string "waiting for you at the temple in\l"
	.string "Shivervale Town.\p"
	.string "Go forth, and remember...true strength\n"
	.string "comes from the trust, love, and\l"
	.string "understanding between trainer and\l"
	.string "Pokémon.$"

PokemonChosenOshawatt_Text_0:
# 205 "data/maps/OldElderootCave/scripts.pory"
	.string "A great choice indeed, young\n"
	.string "{PLAYER}. You and Oshawott can now\l"
	.string "begin the greatest adventure known to\l"
	.string "Shizen, together.\p"
	.string "Selene, the Leader of Darkness, will be\n"
	.string "waiting for you at the temple in\l"
	.string "Shivervale Town.\p"
	.string "Go forth, and remember...true strength\n"
	.string "comes from the trust, love, and\l"
	.string "understanding between trainer and\l"
	.string "Pokémon.\p"
	.string "$"

PokemonChosenRowlet_Text_0:
# 222 "data/maps/OldElderootCave/scripts.pory"
	.string "A great choice indeed, young\n"
	.string "{PLAYER}. You and Rowlet can now\l"
	.string "begin the greatest adventure known to\l"
	.string "Shizen, together.\p"
	.string "Selene, the Leader of Darkness, will be\n"
	.string "waiting for you at the temple in\l"
	.string "Shivervale Town.\p"
	.string "Go forth, and remember...true strength\n"
	.string "comes from the trust, love, and\l"
	.string "understanding between trainer and\l"
	.string "Pokémon.$"

PokemonChosenCyndaquil_Text_0:
# 239 "data/maps/OldElderootCave/scripts.pory"
	.string "A great choice indeed, young\n"
	.string "{PLAYER}. You and Cyndaquil can now\l"
	.string "begin the greatest adventure known to\l"
	.string "Shizen, together.\p"
	.string "Selene, the Leader of Darkness, will be\n"
	.string "waiting for you at the temple in\l"
	.string "Shivervale Town.\p"
	.string "Go forth, and remember...true strength\n"
	.string "comes from the trust, love, and\l"
	.string "understanding between trainer and\l"
	.string "Pokémon.$"

NicknamePichuPartyMon_Text_0:
# 255 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to give Pichu a nickname?$"

NicknameOshawottPartyMon_Text_0:
# 273 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to give Oshawott a nickname?$"

NicknameRowletPartyMon_Text_0:
# 291 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to give Rowlet a nickname?$"

NicknameCyndaquilPartyMon_Text_0:
# 309 "data/maps/OldElderootCave/scripts.pory"
	.string "Do you want to give Cyndaquil a nickname?$"

OldElderootCave_EventScripts_Primaroot_Text_0:
# 330 "data/maps/OldElderootCave/scripts.pory"
	.string "There are some preserved roots here\n"
	.string "encased in glass. This must be the\l"
	.string "roots of the Primaroot Tree that the\l"
	.string "Sage mentioned.\p"
	.string "It feels warm and comforting to the\n"
	.string "touch.$"

OldElderootCave_EventScripts_DontForgetPokemon_Text_0:
# 338 "data/maps/OldElderootCave/scripts.pory"
	.string "I can't forget my Pokémon!$"

OldElderootCave_TakeYourTime::
# 182 "data/maps/OldElderootCave/scripts.pory"
	.string "Don't worry, take your time. It's a big\n"
	.string "decision.$"
