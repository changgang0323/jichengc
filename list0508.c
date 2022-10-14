/*
	对数组的全部元素进行倒序排列
*/

#include <stdio.h>

int main(void)
{
	int i;
	int x[7];					/* int[7] 数组 */

	for (i = 0; i < 7; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* 对数组元素进行倒序排列 */
		int temp = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = temp;
	}

	puts("倒序排列了。");
	for (i = 0; i < 7; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
