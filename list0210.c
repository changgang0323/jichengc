/*
	读取两个整数并用实数显示出它们的平均值（类型转换）
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("请输入两个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("它们的平均值是%f。\n", (double)(a + b) / 2);	/* 类型转换 */

	return 0;
}
