/*
	对读取的整数值进行符号取反操作，并输出结果
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);								/* 读取整数值 */

	printf("符号取反之后的值是%d。\n", -num);	/* 单目-运算符 */

	return 0;
}
