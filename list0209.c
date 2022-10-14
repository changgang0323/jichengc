/*
	读取两个整数并用浮点数显示出它们平均值
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("请输入两个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("它们的平均值是%f。\n", (a + b) / 2.0);

	return 0;
}
