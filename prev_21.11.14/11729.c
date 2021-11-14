#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;

void c_hanoi(int x, int y, int z, int n) {
	if (n == 1) {
		count += 1;
	}
	else {
		c_hanoi(x, z, y, n - 1);
		count += 1;
		c_hanoi(y, x, z, n - 1);
	}
}

void p_hanoi(int x, int y, int z, int n) {
	if (n == 1) {
		printf("%d %d\n", x, z);
	}
	else {
		p_hanoi(x, z, y, n - 1);
		printf("%d %d\n", x, z);
		p_hanoi(y, x, z, n - 1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	c_hanoi(1, 2, 3, n);
	printf("%d\n", count);
	p_hanoi(1, 2, 3, n);
	return 0;
}