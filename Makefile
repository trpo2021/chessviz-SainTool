CFLAGS= -Wall -Werror -I src
CC = gcc

OBJ_SRC_CHESS = obj/src/chess/
OBJ_SRC_LIBCHESS = obj/src/libchess/

SRC_CHESS = src/chess/
SRC_LIBCHESS = src/libchess/

.PHONY: chess.exe

chess.exe: $(OBJ_SRC_CHESS)Chess.o $(OBJ_SRC_LIBCHESS)libchess.a
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_SRC_CHESS)Chess.o: $(SRC_CHESS)Chess.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)libchess.a: $(SRC_LIBCHESS)move_Pp.o $(SRC_LIBCHESS)defining_a_moving_shape.o $(SRC_LIBCHESS)draw_chessboard.o $(SRC_LIBCHESS)game_start.o $(SRC_LIBCHESS)move_pawn.o $(SRC_LIBCHESS)perevod_8to0_0to8.o $(SRC_LIBCHESS)placing_pieces_on_the_board.o
	ar rcs $@ $^

$(OBJ_SRC_LIBCHESS)move_Pp.o: $(SRC_LIBCHESS)move_Pp.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)defining_a_moving_shape.o: $(SRC_LIBCHESS)defining_a_moving_shape.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)draw_chessboard.o: $(SRC_LIBCHESS)draw_chessboard.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)game_start.o: $(SRC_LIBCHESS)game_start.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)move_pawn.o: $(SRC_LIBCHESS)move_pawn.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)perevod_8to0_0to8.o: $(SRC_LIBCHESS)perevod_8to0_0to8.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)placing_pieces_on_the_board.o: $(SRC_LIBCHESS)placing_pieces_on_the_board.c
	$(CC) -c $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm $(OBJ_SRC_LIBCHESS)*.o chess

-include move_Pp.d defining_a_moving_shape.d draw_chessboard.d
-include game_start.d move_pawn.d perevod_8to0_0to8.d placing_pieces_on_the_board.d

