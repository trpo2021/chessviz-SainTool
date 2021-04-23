#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "check_figure_black.h"
//
#define Number_of_shapes 6
//
int check_figure_black(char **s, const int Size_Board)
{
    char white_shapes[Number_of_shapes]
            = {{'p'}, {'r'}, {'n'}, {'b'}, {'q'}, {'k'}};
    for (int i = 0; i < Number_of_shapes; i++)
        if (s == white_shapes[i])
            return i;
    return 6;
}
