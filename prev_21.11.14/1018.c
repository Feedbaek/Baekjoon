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

// 2���� ü�������� ������ �� ����.
// ���ǿ� ����� ��츦 1, ���ǿ� �´°�� 0�Է�
// 8 * 8�� ���߿� �ּ����� ã�´�.
// 8 * 8�� ���߿� �ִ����� ã�´�.
// 64 - �ִ��հ� �ּ����߿� ���� ���� ���� ã�´�.