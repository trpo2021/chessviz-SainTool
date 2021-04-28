#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//
#include "placing_pieces_on_the_board.h"
#include "draw_chessboard.h"
#include "move_black.h"
#include "move_white.h"
#include "game_start.h"

//
void game_start()
{
    const int Size_Board = 8;
    char** chess;
    chess = (char**)malloc(Size_Board * sizeof(char*));
    for (int i = 0; i < Size_Board; i++)
        chess[i] = (char*)malloc(Size_Board * sizeof(char));
    placing_pieces_on_the_board(chess, Size_Board);
    for (int i = 0; i <= 0; i++) { // test 5 move
        draw_chessboard(chess, Size_Board);
        move_white(chess, Size_Board);
        draw_chessboard(chess, Size_Board);
        //move_black(chess, Size_Board);
    }
}
