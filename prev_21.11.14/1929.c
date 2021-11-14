#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int m, n, x, t, d;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; ++i) {
		d = pow(i, 0.5);
		t = 1;
		if (i == 1)	t = 0;
		for (int j = 2; j <= d; ++j){
			if (i % j == 0) {
				t = 0;
				break;
			}
		}
		if (t) printf("%d\n", i);
	}

	return 0;
}