#include "perevod_8to0_0to8.h"
int perevod_8to0_0to8(int pos_y) {
	int kk = 8, kkk;
	for (kkk = 0; kkk < pos_y; kkk++) {
		kk--;
	}
	return kk;
}
