#include<stdio.h>
#include<math.h>

int main(void)
{
	double num1, num2, num3;

	printf("3辺の長さを入力してください \n");
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	scanf_s("%lf", &num3);

	if (num1 + num2 > num3 && num2 + num3 > num1 && num3 + num1 > num2) {
		printf("面積=%.2lf \n", sqrt((num1 + num2 + num3)*(-num1 + num2 + num3)*(num1 - num2 + num3)*(num1 + num2 - num3)) / 4);
	}

	else {
		printf("三角形ではありません \n");
	}

	return 0;
}