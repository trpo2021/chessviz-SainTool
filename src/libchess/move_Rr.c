#include <stdio.h>

#include "move_Rr.h"
#include "dont_eat_my_shape.h"

int move_Rr(
	char** s,
	int pos_x_first,
	int pos_x_second,
	int pos_y_first,
	int pos_y_second,
	const int Size_Board,
	int hod)
{
	int i = dont_eat_my_shape(s, pos_x_second, pos_y_second, hod);
	if (hod) {
		//os y
		if (pos_x_first - pos_x_second == 0 && i) {
			//up
			if (pos_y_first - pos_y_second > 0) {
				for (int j = pos_y_first-1; j > pos_y_second; j--) {
					if (s[j][pos_x_first] != '-'){
						printf("%d %d %c \n", j , pos_x_first, s[j][pos_x_first]);
						return 0;}
				}
			}
			//down
			else {
				for (int j = pos_y_first+1; j < pos_y_second; j++) {
					if (s[j][pos_x_first] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'R';
			return 1;
		}
		if (pos_y_first - pos_y_second == 0 && i) {
			//left
			if (pos_x_first - pos_x_second > 0) {
				for (int j = pos_x_first-1; j > pos_x_second; j--) {
					if (s[pos_y_first][j] != '-')
						return 0;
				}
			}
			//right
			else {
				for (int j = pos_x_first+1; j < pos_x_second; j++) {
					if (s[pos_y_first][j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'R';
			return 1;
		}
	}
	else {
		//os y
		if (pos_x_first - pos_x_second == 0 && i) {
			//up
			if (pos_y_first - pos_y_second > 0) {
				for (int j = pos_y_first-1; j > pos_y_second; j--) {
					if (s[j][pos_x_first] != '-'){
						printf("%d %d %c \n", j , pos_x_first, s[j][pos_x_first]);
						return 0;}
				}
			}
			//down
			else {
				for (int j = pos_y_first+1; j < pos_y_second; j++) {
					if (s[j][pos_x_first] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'r';
			return 1;
		}
		if (pos_y_first - pos_y_second == 0 && i) {
			//left
			if (pos_x_first - pos_x_second > 0) {
				for (int j = pos_x_first-1; j > pos_x_second; j--) {
					if (s[pos_y_first][j] != '-')
						return 0;
				}
			}
			//right
			else {
				for (int j = pos_x_first+1; j < pos_x_second; j++) {
					if (s[pos_y_first][j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'r';
			return 1;
		}
	}
	return 0;
}
