#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int i = 665, n, num = 0, count = 0, x;
	scanf("%d", &n);
	while (num != n) {
		count = 0;
		++i;
		x = i;
		while (count != 3 && x != 0) {
			if (x % 10 == 6)	count += 1;
			else count = 0;
			x /= 10;
		}
		if (count == 3)	num += 1;
	}
	printf("%d", i);
	return 0;
}
//printf("%d %d %d\n", n, i, six);
//  9666  6666   16666 ... 96666  106666 1016666
//	9666  10666  11666 ... 99666  6666   166666