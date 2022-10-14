/*
	计算两个整数的平方差
*/

#include <stdio.h>

/*--- 返回x的平方 ---*/
int sqr(int x)
{
	return x * x;
}

/*--- 返回x和y的差值 ---*/
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* 大值减小值 */
}

int main(void)
{
	int x, y;

	puts("请输入两个整数。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("x和y的平方差是%d。\n", diff(sqr(x), sqr(y)));

	return 0;
}
