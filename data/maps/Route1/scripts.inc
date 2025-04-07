Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_HealLocation_OnTransition
	.byte 0


Route1_HealLocation_OnTransition::
# 6 "data/maps/Route1/scripts.pory"
	setrespawn HEAL_LOCATION_ELDEROOT_TOWN_PLAYERS_HOUSE_2F
	end


Route1_EventScript_RouteSign::
# 11 "data/maps/Route1/scripts.pory"
	lock
# 12 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RouteSign_Text_0
# 13 "data/maps/Route1/scripts.pory"
	closemessage
# 14 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_RouteSign_Text_0:
# 12 "data/maps/Route1/scripts.pory"
	.string "{DOWN_ARROW} Route 2$"
