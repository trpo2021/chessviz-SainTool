#include <stdio.h>
#define Size_Board 8
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

    draw_chessboard(chess);
}