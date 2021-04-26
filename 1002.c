#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t, x1, y1, r1, x2, y2, r2;
	float d;
	scanf("%d", &t);
	for (; t > 0; --t) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2) , 0.5);
		if (d == 0) {
			if (r1 == r2)	printf("-1\n");
			else printf("0\n");
			continue;
		}
		if (d > r1 + r2 || d < abs(r1 - r2))	printf("0\n");
		else if (d == r1 + r2 || d == abs(r1 - r2))	printf("1\n");
		else printf("2\n");
	}
	return 0;
}