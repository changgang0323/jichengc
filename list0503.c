/*
	依次把1、2、3、4、5 赋值给数组的每个元素并显示（使用for语句）
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5];	/* int[5]数组 */

	for (i = 0; i < 5; i++)		/* 为数组元素赋值 */
		v[i] = i + 1;

	for (i = 0; i < 5; i++)		/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
