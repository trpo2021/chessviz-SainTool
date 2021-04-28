#include <stdio.h>
#include <stdlib.h>

#include "placing_pieces_on_the_board.h"

void placing_pieces_on_the_board(char** chess, const int Size_Board)
{
    int x, y;
    // placing_Black
    chess[0][0] = 'r';
    chess[0][7] = 'r';
    chess[0][1] = 'n';
    chess[0][6] = 'n';
    chess[0][2] = 'b';
    chess[0][5] = 'b';
    chess[0][3] = 'q';
    chess[0][4] = 'k';
    for (x = 0; x < Size_Board; x++)
        chess[1][x] = 'p';
    // placing_White
    chess[7][0] = 'R';
    chess[7][7] = 'R';
    chess[7][1] = 'N';
    chess[7][6] = 'N';
    chess[7][2] = 'B';
    chess[7][5] = 'B';
    chess[7][3] = 'Q';
    chess[7][4] = 'K';
    for (x = 0; x < Size_Board; x++)
        chess[6][x] = 'P';
    // placing_hole
    for (y = 2; y < 6; y++) {
        for (x = 0; x < Size_Board; x++)
            chess[y][x] = '-';
    }
}
