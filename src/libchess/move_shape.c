#include <stdio.h>

#include "move_shape.h"
#include "perevod_8to0_0to8.h"
#include "defining_a_moving_shape.h"
#include "move_Pp.h"
void move_shape(char** board, const int Size_Board, int hod)
{
    const int Buffer = 7;
    int pos_x_first, pos_x_second;
    // *- - *-
    // position abcdefgh
    char a[Buffer];
    char board_faces[10] = {"abcdefgh"};
    if (hod)
        printf("\nWhite's move - ");
    else
        printf("\nBlack's move - ");
    scanf("%s", a);
    for (pos_x_first = 0; pos_x_first < Size_Board; pos_x_first++) {
        if (a[0] == board_faces[pos_x_first])
            break;
    }
    for (pos_x_second = 0; pos_x_second < Size_Board; pos_x_second++) {
        if (a[3] == board_faces[pos_x_second])
            break;
    }
    // perevod char -> int
    int pos_y_first = perevod_8to0_0to8((a[1] - 48));
    // search pos y 1-st input
    int pos_y_second = perevod_8to0_0to8((a[4] - 48));
    // search pos y second input
    // 1-st test (check input figure)
    switch (defining_a_moving_shape(board, pos_x_first, pos_y_first, hod)) {
    case 0: // Pp
        if (!(
                    move_Pp(board,
                            pos_x_first,
                            pos_x_second,
                            pos_y_first,
                            pos_y_second,
                            Size_Board,
                            hod))){
            printf("Input ERROR");
            move_shape(board, Size_Board, hod);}
        break;
    case 1: // Rr
        printf("R");
        break;
    case 2: // Nn
        printf("N");
        break;
    case 3: // Bb
        printf("B");
        break;
    case 4: // Qq
        printf("Q");
        break;
    case 5: // Kk
        printf("K");
        break;
    default: // error
        printf("Input ERROR");
        move_shape(board, Size_Board, hod);
        break;
    };
}
