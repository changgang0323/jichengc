/*
	显示九九乘法表（遇到比40大的数时执行break语句）
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki > 40)
				break;
			printf("%3d", seki);
		}
		putchar('\n');				/* 换行 */
	}

	return 0;
}
