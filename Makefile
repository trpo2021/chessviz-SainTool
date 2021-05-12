CFLAGS= -Wall -Werror -I src
CC = gcc

BIN=bin/

OBJ_SRC_CHESS = obj/src/chess/
OBJ_SRC_LIBCHESS = obj/src/libchess/

OBJ_TEST = obj/test
THIRDPARTY = 

SRC_CHESS = src/chess/
SRC_LIBCHESS = src/libchess/

.PHONY: $(BIN)chess.exe

$(BIN)chess.exe: $(OBJ_SRC_CHESS)Chess.o $(OBJ_SRC_LIBCHESS)libchess.a
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_SRC_CHESS)Chess.o: $(SRC_CHESS)Chess.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)libchess.a: $(SRC_LIBCHESS)move_Pp.o $(SRC_LIBCHESS)defining_a_moving_shape.o $(SRC_LIBCHESS)draw_chessboard.o $(SRC_LIBCHESS)game_start.o $(SRC_LIBCHESS)move_shape.o $(SRC_LIBCHESS)perevod_8to0_0to8.o $(SRC_LIBCHESS)placing_pieces_on_the_board.o $(SRC_LIBCHESS)move_Nn.o $(OBJ_SRC_LIBCHESS)dont_eat_my_shape.o $(OBJ_SRC_LIBCHESS)move_Rr.o $(OBJ_SRC_LIBCHESS)move_Qq.o $(OBJ_SRC_LIBCHESS)move_Kk.o $(OBJ_SRC_LIBCHESS)move_Bb.o
	ar rcs $@ $^

$(OBJ_SRC_LIBCHESS)move_Pp.o: $(SRC_LIBCHESS)move_Pp.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)defining_a_moving_shape.o: $(SRC_LIBCHESS)defining_a_moving_shape.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)draw_chessboard.o: $(SRC_LIBCHESS)draw_chessboard.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)game_start.o: $(SRC_LIBCHESS)game_start.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)move_shape.o: $(SRC_LIBCHESS)move_shape.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)perevod_8to0_0to8.o: $(SRC_LIBCHESS)perevod_8to0_0to8.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)placing_pieces_on_the_board.o: $(SRC_LIBCHESS)placing_pieces_on_the_board.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)move_Nn.o: $(SRC_LIBCHESS)move_Nn.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)dont_eat_my_shape.o: $(SRC_LIBCHESS)dont_eat_my_shape.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)move_Rr.o: $(SRC_LIBCHESS)move_Rr.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)move_Qq.o: $(SRC_LIBCHESS)move_Qq.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)move_Kk.o: $(SRC_LIBCHESS)move_Kk.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)move_Bb.o: $(SRC_LIBCHESS)move_Bb.c
	$(CC) -c $(CFLAGS) -o $@ $<

.PHONY: test

test: $(BIN)test.exe

$(BIN)test.exe: $()

.PHONY: clean

clean:
	rm $(OBJ_SRC_CHESS)*.o
	rm $(OBJ_SRC_LIBCHESS)*.o
	rm $(OBJ_SRC_LIBCHESS)*.a
	rm $(SRC_LIBCHESS)*.o

-include defining_a_moving_shape.d draw_chessboard.d
-include game_start.d move_shape.d perevod_8to0_0to8.d placing_pieces_on_the_board.d dont_eat_my_shape.d
-include move_Pp.d move_Nn.d move_Rr.d move_Qq.d move_Kk.d move_Bb.d 

