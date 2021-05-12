#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//
#include "draw_chessboard.h"
#include "game_start.h"
#include "move_shape.h"
#include "placing_pieces_on_the_board.h"

//
void game_start()
{
    const int Size_Board = 8;
    char** chess;
    int hod = 1; // 1 - White; 0 - Black
    chess = (char**)malloc(Size_Board * sizeof(char*));
    for (int i = 0; i < Size_Board; i++)
        chess[i] = (char*)malloc(Size_Board * sizeof(char));
    placing_pieces_on_the_board(chess, Size_Board);
    // test 10 move
    for (int i = 0; i < 5; i++) {
        draw_chessboard(chess, Size_Board);
        move_shape(chess, Size_Board, hod);
        hod--;
        draw_chessboard(chess, Size_Board);
        move_shape(chess, Size_Board, hod);
        draw_chessboard(chess, Size_Board);
        hod++;
    }
    for (int i = 0; i < Size_Board; i++)
        free(chess[i]);
    free(chess);
}
