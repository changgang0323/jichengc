/*
	从输入的整数开始倒数到0
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;			/* no的值递减 */
	}
	printf("\n");		/* 换行 */

	return 0;
}
