#include "defining_a_moving_shape.h"
int defining_a_moving_shape(char** board, int pos_x, int pos_y, int hod)
{
    int i;
    int Number_of_shapes = 6;
    char white_shapes[7] = {"PRNBQK"};
    char black_shapes[7] = {"prnbqk"};
    char find_figure = board[pos_y][pos_x];
    for (i = 0; i < Number_of_shapes; i++) {
        if (hod && find_figure == white_shapes[i])
            return i;
        if (!(hod) && find_figure == black_shapes[i])
            return i;
    }
    return 6;
}
