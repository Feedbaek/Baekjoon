#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char a[10001] = { 0 };
	char b[10001] = { 0 };
	char x[10002] = { 0 };
	int carry = 0, alen, blen, m, n;

	scanf("%s %s", a, b);
	alen = strlen(a);
	blen = strlen(b);

	if (alen > blen) {
		m = alen;
		n = blen;
	}
	else {
		m = blen;
		n = alen;
	}

	for (int i = 1; i <= n; ++i) {
		x[m - i + 1] += a[alen - i] - '0' + b[blen - i] - '0';
		if (x[m - i + 1] > 9) {
			x[m - i + 1] -= 10;
			x[m - i] += 1;
		}
	}

	for (int i = m - n; i > 0; --i) {
		if (m == alen)	x[i] += a[i - 1] - '0';
		else x[i] += b[i - 1] - '0';
		if (x[i] > 9) {
			x[i] -= 10;
			x[i - 1] += 1;
		}
	}

	if (x[0] == 0)	carry = 1;

	for (int i = carry; i <= m; ++i) {
		printf("%d", x[i]);
	}
	
	return 0;
}	 