#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, sum, min = 64, max = 0, result;
	char c[51][51];
	char score[51][51] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%s", c[i]);
	}
	if (c[0][0] == 'W') {
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j) {
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
					if (c[i][j] != 'W') {
						score[i][j] += 1;
					}
				}
				else {
					if (c[i][j] != 'B') {
						score[i][j] += 1;
					}
				}
			}
	}
	else {
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j) {
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
					if (c[i][j] != 'B') {
						score[i][j] += 1;
					}
				}
				else {
					if (c[i][j] != 'W') {
						score[i][j] += 1;
					}
				}
			}
	}
	for (int i = 0; i < n - 7; ++i)
		for (int j = 0; j < m - 7; ++j) {
			sum = 0;
			for (int k = 0; k < 8; ++k) 
				for (int l = 0; l < 8; ++l) 
					sum += score[i + k][j + l];
			if (sum < min)
				min = sum;
			if (sum > max)
				max = sum;
		}
	if (64 - max > min)
		result = min;
	else
		result = 64 - max;
	printf("%d", result);
	return 0;
}

// 010101	101010
// 101010	010101
// 010101	101010
// 101010	010101

// 2가지 체스판으로 정의할 수 있음.
// 정의에 벗어나는 경우를 1, 정의에 맞는경우 0입력
// 8 * 8의 합중에 최소합을 찾는다.
// 8 * 8의 합중에 최대합을 찾는다.
// 64 - 최대합과 최소합중에 가장 적은 값을 찾는다.