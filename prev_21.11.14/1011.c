#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	unsigned int t, x, y, r, j, count;   // 범위 조심
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d %d", &x, &y);
		count = 0;
		r = y - x;
		for (j = 1; j * (j + 1) < r; ++j)	count += 1;
		count *= 2;
		if (j * (j - 1) + j < r)	count += 2;
		else count += 1;
		printf("%d\n", count);
	}
	return 0;
}