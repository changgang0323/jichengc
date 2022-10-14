/*
	输入的整数是奇数还是偶数呢（按照自己的意愿进行循环操作）
*/

#include <stdio.h>

int main(void)
{
	int retry;		/* 要继续吗 */

	do {
		int no;

		printf("请输入一个整数：");
		scanf("%d", &no);

		if (no % 2)
			puts("这个整数是奇数。");
		else
			puts("这个整数是偶数。");

		printf("要重复一次吗？【Yes…0 / No…9】:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
