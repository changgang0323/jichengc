/*
	读取一个整数并显示其5倍数的值
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);							/* 读取整数值 */

	printf("它的5倍数是%d。\n", 5 * no);

	return 0;
}
