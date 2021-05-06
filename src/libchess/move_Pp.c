#include "move_Pp.h"
#include "dont_eat_my_shape.h"

int move_Pp(
        char** s,
        int pos_x_first,
        int pos_x_second,
        int pos_y_first,
        int pos_y_second,
        const int Size_Board,
        int hod)
{
    int i = dont_eat_my_shape(s, pos_x_second, pos_y_second, hod); 
    // input format pos_x_first, pos_y_first, pos_x_second, pos_y_second
    if (hod) {
    
        // check 1-2 title move
        if (pos_x_first == pos_x_second && pos_y_first == 6
            && (pos_y_first - pos_y_second == 2
                || pos_y_first - pos_y_second == 1)
            && s[pos_y_second][pos_x_second] == '-') {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_second] = 'P';
            return 1;
        }
        // check 1 title move before
        if (pos_x_first == pos_x_second && s[pos_y_second][pos_x_second] == '-'
            && pos_y_first - pos_y_second == 1) {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_second] = 'P';
            return 1;
        }
        // pawn slice
        if ((((pos_x_first - pos_x_second) || (pos_x_second - pos_x_first))
            && pos_y_first - pos_y_second == 1
            && !(s[pos_y_second][pos_x_second] == '-')) && i) {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_second] = 'P';
            return 1;
        }
    } else {
        if (pos_x_first == pos_x_second && pos_y_first == 1
            && (pos_y_second - pos_y_first == 2
                || pos_y_second - pos_y_first == 1)
            && s[pos_y_second][pos_x_second] == '-') {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_first + (pos_x_second - pos_x_first)] = 'p';
            return 1;
        }
        if (pos_x_first == pos_x_second && s[pos_y_second][pos_x_second] == '-'
            && pos_y_second - pos_y_first == 1) {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_second] = 'p';
            return 1;
        }
        if (((pos_x_first - pos_x_second) || (pos_x_second - pos_x_first))
            && pos_y_second - pos_y_first == 1
            && !(s[pos_y_second][pos_x_second] == '-')) {
            s[pos_y_first][pos_x_first] = '-';
            s[pos_y_second][pos_x_second] = 'p';
            return 1;
        }
    }
    return 0;
}
