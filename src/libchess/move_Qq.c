#include "move_Qq.h"
#include "dont_eat_my_shape.h"
#include "move_Bb.h"
#include "move_Rr.h"

int move_Qq(
        char** s,
        int pos_x_first,
        int pos_x_second,
        int pos_y_first,
        int pos_y_second,
        const int Size_Board,
        int hod)
{
    if (!(
                move_Bb(s,
                        pos_x_first,
                        pos_x_second,
                        pos_y_first,
                        pos_y_second,
                        Size_Board,
                        hod)))
        if (!(
                    move_Qq(s,
                            pos_x_first,
                            pos_x_second,
                            pos_y_first,
                            pos_y_second,
                            Size_Board,
                            hod)))
            return 0;
    if (hod)
        s[pos_y_second][pos_x_second] = 'Q';
    else
        s[pos_y_second][pos_x_second] = 'q';
    return 1;
}
