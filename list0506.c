/*
	把数组中的全部元素复制到另一个数组中
*/

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {17, 23, 36};	/* 使用{17，23，36，0，0} 进行初始化 */
	int b[5];	

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("  a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}
