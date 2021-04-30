#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "draw_chessboard.h"
//
void draw_chessboard(char **s, const int Size_Board)
{
    printf("  __________________");
    for (int i = 0; i < Size_Board; i++) {
        printf("\n");
        printf("%d |", Size_Board - i);
        for (int j = 0; j < Size_Board; j++) {
            if (s[i][j] != '-') {
                printf("%c ", s[i][j]);
            } else
                printf("  ");
        }
        printf("|");
    }
    printf("\n  ------------------");
    printf("\n   a b c d e f g h \n");
}
