CFLAGS= -Wall -Werror -I src

OBJ_SRC_CHESS = obj/src/chess/
OBJ_SRC_LIBCHESS = obj/src/libchess/

SRC_CHESS = src/chess/
SRC_LIBCHESS = src/libchess/
.PHONY: chess.exe

chess.exe: $(OBJ_SRC_CHESS)Chess.o $(OBJ_SRC_LIBCHESS)libchess.a
	gcc $(CFLAGS) -o $@ $^

$(OBJ_SRC_CHESS)Chess.o: $(SRC_CHESS)Chess.c
	gcc -c $(CFLAGS) -o $@ $<
	
$(OBJ_SRC_LIBCHESS)libchess.a: $(OBJ_SRC_LIBCHESS)*.o
	ar rcs $@ $^

### $(SRC_LIBCHESS)check_figure_black.o $(SRC_LIBCHESS)check_figure_white.o $(SRC_LIBCHESS)draw_chessboard.o $(SRC_LIBCHESS)game_start.o $(SRC_LIBCHESS)move_black.o $(SRC_LIBCHESS)move_white.o

$(OBJ_SRC_LIBCHESS)*.o: $(SRC_LIBCHESS)*.c
	gcc -c $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -rf *.o chesss

-include check_figure_black.d check_figure_white.d draw_chessboard.d
-include game_start.d move_black.d move_white.d

