#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Size_Board 8
#define Number_of_shapes 6
#define Buffer 6
void draw_chessboard(char s[Size_Board][Size_Board])
{
    printf("  __________________");
    for (int i = 0; i < Size_Board; i++) {
        printf("\n");
        printf("%d |", i + 1);
        for (int j = 0; j < Size_Board; j++) {
            if (s[i][j] != '-') {
                printf("%c ", s[i][j]);
            } else
                printf("  ");
        }
        printf("|");
    }
    printf("\n  ------------------");
    printf("\n   a b c d e f g h");
}
int check_figure_white(char s)
{
    char white_shapes[Number_of_shapes]
            = {{'P'}, {'R'}, {'N'}, {'B'}, {'Q'}, {'K'}};
    for (int i = 0; i < Number_of_shapes; i++)
        if (s == white_shapes[i])
            return i;
    return 6;
}
int check_figure_black(char s)
{
    char white_shapes[Number_of_shapes]
            = {{'p'}, {'r'}, {'n'}, {'b'}, {'q'}, {'k'}};
    for (int i = 0; i < Number_of_shapes; i++)
        if (s == white_shapes[i])
            return i;
    return 6;
}
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
int main()
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