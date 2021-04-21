#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "check_figure_black.h"
#include "move_black.h"
//
#define Size_Board 8
#define Number_of_shapes 6
#define Buffer 6
//
void move_black(char s[Size_Board][Size_Board])
{
    int i, ii, xx;
    char a[Buffer];
    printf("\nBlack's move - ");
    scanf("%s", &a);
    char board_faces[Size_Board]
            = {{'a'}, {'b'}, {'c'}, {'d'}, {'e'}, {'f'}, {'g'}, {'h'}};
    for (i = 0; i < Size_Board; i++) {
        if (a[0] == board_faces[i])
            break;
    }
    int x = a[1] - 49;
    char j = s[x][i];
    switch (check_figure_black(j)) {
    case 0: // p
        for (ii = 0; ii < Size_Board; ii++)
            if (a[3] == board_faces[ii])
                break;
        xx = a[4] - 49;
        if (x == 1 and xx - x >= 1 and xx - x <= 2 and i == ii
            and s[x + (xx - x)][i] == '-') {
            s[x][i] = '-';
            s[x + (xx - x)][i] = 'p';
        } else {
            if (xx - x == 1 and i == ii and s[x + 1][i] == '-') {
                s[x][i] = '-';
                s[x + 1][i] = 'p';
            } else {
                printf("Input ERROR");
                move_black(s);
            }
        }
    case 1: // r
        printf("r");
        break;
    case 2: // n
        printf("n");
        break;
    case 3: // b
        printf("b");
        break;
    case 4: // q
        printf("q");
        break;
    case 5: // k
        printf("k");
        break;
    default: // error
        printf("Input ERROR");
        move_black(s);
        break;
    };
}