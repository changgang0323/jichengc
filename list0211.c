/*
	读取三个整数，并显示出它们的合计值和平均值
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;				/* 合计值 */
	double ave;				/* 平均值 */

	puts("请输入三个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);
	printf("整数c：");   scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;		/* 类型转换 */

	printf("它们的合计值是%5d。\n",   sum);		/* 输出99999 */
	printf("它们的平均值是%5.1f。\n", ave);		/* 输出999.9 */

	return 0;
}
