#include <stdio.h>
void draw(char s[8][8]) // masive print
{
    printf("  __________________");
    for (int i = 0; i < 8; i++) {
        printf("\n");
        printf("%d |", i + 1);
        for (int j = 0; j < 8; j++) {
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
    char chess[8][8] // Create masive chess
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'-', '-', '-', '-', '-', '-', '-', '-'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    draw(chess);
}