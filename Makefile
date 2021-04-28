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
	
$(OBJ_SRC_LIBCHESS)libchess.a: $(SRC_LIBCHESS)check_figure_black.o $(SRC_LIBCHESS)check_figure_white.o $(SRC_LIBCHESS)draw_chessboard.o $(SRC_LIBCHESS)game_start.o $(SRC_LIBCHESS)move_black.o $(SRC_LIBCHESS)move_white.o $(SRC_LIBCHESS)placing_pieces_on_the_board.o
	ar rcs $@ $^

### $(SRC_LIBCHESS)check_figure_black.o $(SRC_LIBCHESS)check_figure_white.o (SRC_LIBCHESS)draw_chessboard.o $(SRC_LIBCHESS)game_start.o $(SRC_LIBCHESS)move_black.o $(SRC_LIBCHESS)move_white.o $(SRC_LIBCHESS)placing_pieces_on_the_board

$(SRC_LIBCHESS)check_figure_black.o: $(SRC_LIBCHESS)check_figure_black.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)check_figure_white.o: $(SRC_LIBCHESS)check_figure_white.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)draw_chessboard.o: $(SRC_LIBCHESS)draw_chessboard.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)game_start.o: $(SRC_LIBCHESS)game_start.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)move_black.o: $(SRC_LIBCHESS)move_black.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)move_white.o: $(SRC_LIBCHESS)move_white.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_SRC_LIBCHESS)placing_pieces_on_the_board.o: $(SRC_LIBCHESS)placing_pieces_on_the_board.c
	$(CC) -c $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm $(OBJ_SRC_LIBCHESS)*.o chess

-include check_figure_black.d check_figure_white.d draw_chessboard.d
-include game_start.d move_black.d move_white.d placing_pieces_on_the_board.d

