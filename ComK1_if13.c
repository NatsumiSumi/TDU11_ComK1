#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("2つの整数を入力してください。 \n");
	scanf("%d%d", &num1, &num2);

	if (num1 <= num2) {
		printf("%d,%d", num2, num1);
	}

	else {
		printf("%d,%d", num1, num2);
	}

	return 0;
}