/*
	无法取得地址的对象（本程序无法执行）
*/

#include <stdio.h>

int main(void)
{
	register int x;

	printf("%p\n", &x);		/* 错误 */

	return 0;
}
