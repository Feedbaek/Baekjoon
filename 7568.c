#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, cnt;
	int x[51], y[51];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d %d", &x[i], &y[i]);
	for (int i = 0; i < n; ++i) {
		cnt = 1;
		for (int j = 0; j < n; ++j) 
			if (x[i] < x[j] && y[i] < y[j])	cnt += 1;
		printf("%d ", cnt);
	}
	return 0;
}