/*
	将数组的全部元素赋值为0.0并显示
*/

#include <stdio.h>

int main(void)
{
	int i;
	double x[7];	/* double[7]数组 */

	for (i = 0; i < 7; i++)		/* 为数组元素赋值 */
		x[i] = 0.0;

	for (i = 0; i < 7; i++)		/* 显示元素的值 */
		printf("x[%d] = %.1f\n", i, x[i]);

	return 0;
}
