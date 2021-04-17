#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "draw_chessboard.h"//
#include "move_black.h"
#include "move_white.h"
#include "game_start.h"//
//
#define Size_Board 8
#define Number_of_shapes 6
#define Buffer 6
//
void game_start()
{
    char chess[Size_Board][Size_Board]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    int win = true;
    for (int i = 0; i < 5; i++) { // test 5 move
        system("cls");
        draw_chessboard(chess);
        move_white(chess);
        system("cls");
        draw_chessboard(chess);
        move_black(chess);
    }
}