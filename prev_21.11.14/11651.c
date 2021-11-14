#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int x;
	int y;
}box;

box arr[100001];

void merge(box *xy, int first, int mid, int last) {
	int i, j, k;
	i = first;
	j = mid + 1;
	k = first;

	// ���ϸ鼭 �ֱ�
	while (i <= mid && j <= last) {
		if (xy[i].y < xy[j].y)
			arr[k++] = xy[i++];
		else if (xy[i].y > xy[j].y)
			arr[k++] = xy[j++];
		else {
			if (xy[i].x < xy[j].x)
				arr[k++] = xy[i++];
			else
				arr[k++] = xy[j++];
		}
	}

	// ���� ���� �ֱ�
	if (i <= mid)
		for (int l = i; l <= mid; l++)
			arr[k++] = xy[l];
	else
		for (int l = j; l <= last; l++)
			arr[k++] = xy[l];

	// arr(�ӽ�)�迭 ������ �ٽ� ���� �迭�� �ű�
	for (int l = first; l <= last; l++)
		xy[l] = arr[l];
}

void mergesort(box* xy, int first, int last) {
	int mid;
	if (first < last) {
		mid = (first + last) / 2;
		mergesort(xy, first, mid);
		mergesort(xy, mid + 1, last);
		merge(xy, first, mid, last);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	box* xy = malloc(sizeof(box) * n);  //�ڷ��� box ���� �迭
	for (int i = 0; i < n; i++)
		scanf("%d %d", &xy[i].x, &xy[i].y);
	mergesort(xy, 0, n - 1);

	for (int i = 0; i < n; i++) 
		printf("%d %d\n", xy[i].x, xy[i].y);

	free(xy);
	return 0;
}