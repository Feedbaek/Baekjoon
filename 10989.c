#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, j, x;
	int arr[10001] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &x);
		arr[x]++;
	}
	for (i = 0; i < 10001; ++i) 
		for (j = 0; j < arr[i]; ++j)
			printf("%d\n",i);
	return 0;
}