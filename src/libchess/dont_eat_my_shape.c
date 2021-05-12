#include "dont_eat_my_shape.h"
int dont_eat_my_shape(char** s, int pos_x_second, int pos_y_second, int hod)
{
    int i;
    int Number_of_shapes = 6;
    char white_shapes[7] = {"PRNBQK"};
    char black_shapes[7] = {"prnbqk"};

    for (i = 0; i < Number_of_shapes; i++) {
        if (hod && s[pos_y_second][pos_x_second] == white_shapes[i])
            return 0;
        if (!(hod) && s[pos_y_second][pos_x_second] == black_shapes[i])
            return 0;
    }
    return 1;
}
