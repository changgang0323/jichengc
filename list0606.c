/*
	计算幂
*/

#include <stdio.h>

/*--- 返回x的n次幂 ---*/
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;	/* tmp乘以x */
	return tmp;
}

int main(void)
{
	double a;
	int b;

    printf("求a的b次幂。\n");
	printf("实数a：");   scanf("%lf", &a);
	printf("整数b：");   scanf("%d",  &b);

	printf("%.2f的%d次幂是%.2f。\n", a, b, power(a, b));

	return 0;
}
