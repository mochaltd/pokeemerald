Route2_PaintersHouse_MapScripts::
	.byte 0


Route2_PaintersHouse_Painter::
# 6 "data/maps/Route2_PaintersHouse/scripts.pory"
	lock
# 7 "data/maps/Route2_PaintersHouse/scripts.pory"
	applymovement 1, Route2_PaintersHouse_Painter_Movement_0
# 8 "data/maps/Route2_PaintersHouse/scripts.pory"
	waitmovement 1
# 9 "data/maps/Route2_PaintersHouse/scripts.pory"
	msgbox Route2_PaintersHouse_Painter_Text_0
# 10 "data/maps/Route2_PaintersHouse/scripts.pory"
	applymovement 1, Route2_PaintersHouse_Painter_Movement_1
# 11 "data/maps/Route2_PaintersHouse/scripts.pory"
	waitmovement 1
# 12 "data/maps/Route2_PaintersHouse/scripts.pory"
	release
	return


# 7 "data/maps/Route2_PaintersHouse/scripts.pory"
Route2_PaintersHouse_Painter_Movement_0:
# 7 "data/maps/Route2_PaintersHouse/scripts.pory"
	face_player
	step_end

# 10 "data/maps/Route2_PaintersHouse/scripts.pory"
Route2_PaintersHouse_Painter_Movement_1:
# 10 "data/maps/Route2_PaintersHouse/scripts.pory"
	face_left
	step_end

Route2_PaintersHouse_Painter_Text_0:
# 9 "data/maps/Route2_PaintersHouse/scripts.pory"
	.string "Living up on this hill gives me a great\n"
	.string "view of Route 2. Its beauty gives me so\l"
	.string "much inspiration! I hope you find\l"
	.string "beauty in your travels.$"
