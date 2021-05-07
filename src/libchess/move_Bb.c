#include <stdio.h>
#include <stdlib.h>
#include "move_Rr.h"
#include "dont_eat_my_shape.h"

int move_Bb(
	char** s,
	int pos_x_first,
	int pos_x_second,
	int pos_y_first,
	int pos_y_second,
	const int Size_Board,
	int hod)
{
	// input format pos_x_first, pos_y_first, pos_x_second, pos_y_second
	// out format pos_y pos_x
	int i = dont_eat_my_shape(s, pos_x_second, pos_y_second, hod);
	int x_smesh = 0, j;
	if (hod) {
		//up
		printf("%d %d %d %d %d", pos_y_first - pos_y_second > 0, i, pos_y_first - pos_y_second == pos_x_first - pos_x_second , pos_y_first - pos_y_second, pos_x_first - pos_x_second);
		if (pos_y_first - pos_y_second > 0 && i && abs(pos_y_first - pos_y_second) == abs(pos_x_first - pos_x_second)) {
			
			//up-left
			if (pos_x_first - pos_x_second > 0) {
				for (j = 1; j < pos_y_first - pos_y_second; j++) {
					if (s[pos_y_first - j][pos_x_first - j] != '-') {
						return 0;
					}
					
				}
			}
			//up-right
			else {
				for (j = 1 ; j < abs(pos_y_second - pos_y_first); j++) {
					printf("%d",s[pos_y_first - j][pos_x_first + j]);
					if (s[pos_y_first - j][pos_x_first + j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'B';
			return 1;
		}
		//down
		if (pos_y_first - pos_y_second < 0 && i && abs(pos_y_first - pos_y_second) != abs(pos_x_first - pos_x_second)) {
			//down - left
			if (pos_x_first - pos_x_second > 0) {
				for (j = 1; j < abs(pos_y_first - pos_y_second); j++) {
					printf("%d",s[pos_y_first + j][pos_x_first - j]);
					if (s[pos_y_first + j][pos_x_first - j] != '-')
						return 0;
				}
			}
			//down - right
			else {
				for (j = 1; j < abs(pos_y_first - pos_y_second); j++) {
					printf("%d",s[pos_y_first + j][pos_x_first + j]);
					if (s[pos_y_first + j][pos_x_first + j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'B';
			return 1;
		}
	}
	else {
		//up
		printf("%d %d %d %d %d", pos_y_first - pos_y_second > 0, i, pos_y_first - pos_y_second == pos_x_first - pos_x_second , pos_y_first - pos_y_second, pos_x_first - pos_x_second);
		if (pos_y_first - pos_y_second > 0 && i && abs(pos_y_first - pos_y_second) == abs(pos_x_first - pos_x_second)) {
			
			//up-left
			if (pos_x_first - pos_x_second > 0) {
				for (j = 1; j < pos_y_first - pos_y_second; j++) {
					if (s[pos_y_first - j][pos_x_first - j] != '-') {
						return 0;
					}
					
				}
			}
			//up-right
			else {
				for (j = 1 ; j < abs(pos_y_second - pos_y_first); j++) {
					printf("%d",s[pos_y_first - j][pos_x_first + j]);
					if (s[pos_y_first - j][pos_x_first + j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'b';
			return 1;
		}
		//down
		if (pos_y_first - pos_y_second < 0 && i && abs(pos_y_first - pos_y_second) != abs(pos_x_first - pos_x_second)) {
			//down - left
			if (pos_x_first - pos_x_second > 0) {
				for (j = 1; j < abs(pos_y_first - pos_y_second); j++) {
					printf("%d",s[pos_y_first + j][pos_x_first - j]);
					if (s[pos_y_first + j][pos_x_first - j] != '-')
						return 0;
				}
			}
			//down - right
			else {
				for (j = 1; j < abs(pos_y_first - pos_y_second); j++) {
					printf("%d",s[pos_y_first + j][pos_x_first + j]);
					if (s[pos_y_first + j][pos_x_first + j] != '-')
						return 0;
				}
			}
			s[pos_y_first][pos_x_first] = '-';
			s[pos_y_second][pos_x_second] = 'b';
			return 1;
		}
	}
	return 0;
}
