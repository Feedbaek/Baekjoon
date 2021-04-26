#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	if (*(int*)a < *(int*)b)
		return -1;
	if (*(int*)a > *(int*)b)
		return 1;
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for (int i = 0; i < n; ++i) 
		printf("%d\n", arr[i]);
	free(arr);
	return 0;
}