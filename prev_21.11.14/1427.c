#include <stdio.h>
#include <string.h>

int main() {
	int n, tmp;
	char len[11];
	scanf("%s", len);
	n = strlen(len);
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1 - i; ++j)
			if (len[j] < len[j + 1]) {
				tmp = len[j];
				len[j] = len[j + 1];
				len[j + 1] = tmp;
			}
	}
	printf("%s", len);
	return 0;
}