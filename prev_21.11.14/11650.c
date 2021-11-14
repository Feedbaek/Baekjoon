#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}box;

box xy[100001];

int merge(box* arr, int first, int mid, int last) {
	int i, j, k;
	i = first;
	j = mid + 1;
	k = first;

	while (i <= mid && j <= last) {
		if (arr[i].x < arr[j].x)
			xy[k++] = arr[i++];
		else if(arr[i].x > arr[j].x)
			xy[k++] = arr[j++];
		else {
			if (arr[i].y < arr[j].y)
				xy[k++] = arr[i++];
			else if (arr[i].y > arr[j].y)
				xy[k++] = arr[j++];
		}
	}

	if (i <= mid) {
		while (i <= mid)
			xy[k++] = arr[i++];
	}
	else {
		while (j <= last)
			xy[k++] = arr[j++];
	}
	for (k = first; k <= last; k++)
		arr[k] = xy[k];
}

void mergesort(box* arr, int first, int last) {
	int mid;
	if(first < last) {
		mid = (first + last) / 2;
		mergesort(arr, first, mid);
		mergesort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	box* x = malloc(sizeof(box) * n);
	for (int i = 0; i < n; ++i)
		scanf("%d %d", &x[i].x, &x[i].y);

	mergesort(x, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", x[i].x, x[i].y);

	return 0;
}
