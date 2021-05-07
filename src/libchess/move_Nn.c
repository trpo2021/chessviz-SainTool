#include "move_Nn.h"
#include "dont_eat_my_shape.h"

int move_Nn(
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
		// -*-*-
		// *---*
		// --N--
		// *---*
		// -*-*-

		//left pos
		if ((pos_x_first - pos_x_second == 1 || pos_x_first - pos_x_second == 2) && i) {
			//left up pos
			if ((pos_y_first - pos_y_second == 2 && pos_x_first - pos_x_second == 1) || (pos_x_first - pos_x_second == 2 && pos_y_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'N';
				return 1;
			}
			//left down pos
			if ((pos_y_second - pos_y_first == 1 && pos_x_first - pos_x_second == 2) || (pos_y_second - pos_y_first == 2 && pos_x_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'N';
				return 1;
			}
		}
		//right pos
		if ((pos_x_second - pos_x_first == 1 || pos_x_second - pos_x_first == 2) && i) {
			//right up pos
			if ((pos_y_first - pos_y_second == 2 && pos_x_second - pos_x_first == 1) || (pos_x_second - pos_x_first == 2 && pos_y_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'N';
				return 1;
			}
			//right down pos
			if ((pos_y_second - pos_y_first == 1 && pos_x_second - pos_x_first == 2) || (pos_y_second - pos_y_first == 2 && pos_x_second - pos_x_first == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'N';
				return 1;
			}
		}
	}
	else {
		//left pos
		if ((pos_x_first - pos_x_second == 1 || pos_x_first - pos_x_second == 2) && i) {
			//left up pos
			if ((pos_y_first - pos_y_second == 2 && pos_x_first - pos_x_second == 1) || (pos_x_first - pos_x_second == 2 && pos_y_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'n';
				return 1;
			}
			//left down pos
			if ((pos_y_second - pos_y_first == 1 && pos_x_first - pos_x_second == 2) || (pos_y_second - pos_y_first == 2 && pos_x_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'n';
				return 1;
			}
		}
		//right pos
		if ((pos_x_second - pos_x_first == 1 || pos_x_second - pos_x_first == 2 ) && i) {
			//right up pos
			if ((pos_y_first - pos_y_second == 2 && pos_x_second - pos_x_first == 1) || (pos_x_second - pos_x_first == 2 && pos_y_first - pos_x_second == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'n';
				return 1;
			}
			//right down pos
			if ((pos_y_second - pos_y_first == 1 && pos_x_second - pos_x_first == 2) || (pos_y_second - pos_y_first == 2 && pos_x_second - pos_x_first == 1)) {
				s[pos_y_first][pos_x_first] = '-';
				s[pos_y_second][pos_x_second] = 'n';
				return 1;
			}
		}
	}
	return 0;
}
