#include <stdio.h>

int main()


{
	int a;
	int b;
	int x, y, m, n;

	scanf("%d %d", &a, &b);

	x = a + b;
	y = a - b;
	m = a * b;
	n = a / b;

	printf("%d+%d= %d\n", a, b, x);
	printf("%d-%d= %d\n", a, b, y);
	printf("%d*%d= %d\n", a, b, m);
	printf("%d/%d= %d\n", a, b, n);

	return 0;
}