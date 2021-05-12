#include <stdlib.h>

#include "move_Kk.h"
#include "move_Qq.h"

int move_Kk(
			char** s,
			int pos_x_first,
			int pos_x_second,
			int pos_y_first,
			int pos_y_second,
			const int Size_Board,
			int hod)
{
	if(!( (abs(pos_y_first - pos_y_second) == 1) && (abs(pos_x_first - pos_x_second)) == 1))
		return 0;	
	if (!(
                    move_Qq(s,
                            pos_x_first,
                            pos_x_second,
                            pos_y_first,
                            pos_y_second,
                            Size_Board,
                            hod)))
		return 0;           
    if(hod)
    	s[pos_y_second][pos_x_second] = 'K';
    else
    	s[pos_y_second][pos_x_second] = 'k';
    return 1;
    
}
