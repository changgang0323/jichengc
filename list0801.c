/*
	整数的平方和浮点数的平方（函数）
*/

#include <stdio.h>

/*--- 求int型整数的平方值 ---*/
int sqr_int(int x)
{
	return x * x;
}

/*--- 求double型浮点数的平方值 ---*/
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int    n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("该数的平方是%d。\n", sqr_int(n));

	printf("请输入一个实数：");
	scanf("%lf", &x);
	printf("该数的平方是%f。\n", sqr_double(x));

	return 0;
}
