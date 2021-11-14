#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
	if (*(int*)a < *(int*)b)
		return -1;
	if (*(int*)a > *(int*)b)
		return 1;
	return 0;
}

int main() {
	int n, x, max;
	int center, many = 0, scope, stack = 0;
	double sum = 0;
	int count[8001] = { 0 };
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		sum += x;
		arr[i] = x;
		count[x+4000] += 1;
	}
	sum /= n;
	max = -1; 
	for (int i = 0; i <= 8000; ++i) {
		if (count[i] > max) {
			many = i;
			max = count[i];
			stack = 1;
		}
		else if (count[i] == max && stack == 1) {
			many = i;
			stack = 0;
		}
	}
	many -= 4000; 
	qsort(arr, n, sizeof(int), compare);
	if (n % 2 == 1)
		center = arr[n / 2];
	else
		center = (arr[n / 2] + arr[(n / 2) - 1]) / 2;
	scope = arr[n - 1] - arr[0];
	
	if (sum < 0) {
		sum *= -1;
		sum += 0.5;
		sum = floor(sum);
		sum *= -1;
	}
	else {
		sum += 0.5;
		sum = floor(sum);
	}
	
	printf("%.0f\n%d\n%d\n%d", sum, center, many, scope);
	
	free(arr);
	return 0;
}