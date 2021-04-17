#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "check_figure_white.h"
#include "move_white.h"
//
#define Size_Board 8
#define Number_of_shapes 6
#define Buffer 6
//
void move_white(char s[Size_Board][Size_Board])
{
    int i, ii, xx;
    char a[Buffer];
    printf("\nWhite's move - ");
    scanf("%s", &a);
    char board_faces[Size_Board]
            = {{'a'}, {'b'}, {'c'}, {'d'}, {'e'}, {'f'}, {'g'}, {'h'}};
    for (i = 0; i < Size_Board; i++) {
        if (a[0] == board_faces[i])
            break;
    }
    int x = a[1] - 49;
    char j = s[x][i];
    switch (check_figure_white(j)) {
    case 0: // P
        for (ii = 0; ii < Size_Board; ii++)
            if (a[3] == board_faces[ii])
                break;
        xx = a[4] - 49;
        if (x == 6 and x - xx >= 1 and x - xx <= 2 and i == ii
            and s[x - (x - xx)][i] == '-') {
            s[x][i] = '-';
            s[x - (x - xx)][i] = 'P';
        } else {
            if (x - xx == 1 and i == ii and s[x - 1][i] == '-') {
                s[x][i] = '-';
                s[x - 1][i] = 'P';
            } else {
                printf("Input ERROR");
                move_white(s);
            }
        }
        break;
    case 1: // R
        printf("R");
        break;
    case 2: // N
        printf("N");
        break;
    case 3: // B
        printf("B");
        break;
    case 4: // Q
        printf("Q");
        break;
    case 5: // K
        printf("K");
        break;
    default: // error
        printf("Input ERROR");
        move_white(s);
        break;
    };
}