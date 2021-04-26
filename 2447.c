#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char map[2500][2500];

void set(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			map[i][j] = '*';
	}
}

void blank(int x, int y, int size) {
	for (int i = x; i < x + size/3; ++i) {
		for (int j = y; j < y + size/3; ++j) {
			map[i][j] = ' ';
		}
	}
}

void star(int n, int cnt) {
	if (n == 1)	return;
	else {
		star(n / 3, cnt * 3);
		for (int i = 0; i < cnt; ++i) {
			for (int j = 0; j < cnt; ++j) {
				blank(n/3 + i*n, n/3 + j*n, n);
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	set(n);
	star(n,1);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			printf("%c",map[i][j]);
		printf("\n");
	}
	return 0;
}