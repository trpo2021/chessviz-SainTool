#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
#include "check_figure_white.h"
//
int check_figure_white(char s)
{
    int Number_of_shapes=6;
    char white_shapes[7]= {"PRNBQK"};
    for (int i = 0; i < Number_of_shapes; i++)
        if (s == white_shapes[i])
            return i;
    return 6;
}
