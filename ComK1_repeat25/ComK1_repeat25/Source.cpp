#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("数値 a =>");
	scanf_s("%d", &a);
	printf("数値 b =>");
	scanf_s("%d", &b);

	c = a%b;

	while (c != 0) {
		a = b;
		b = c;
		c = a%b;
	}

	printf("最大公約数 = %d \n", b);

	return 0;
}