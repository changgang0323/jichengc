/*
	输入数组元素的值并显示
*/

#include <stdio.h>

int main(void)
{
	int i;
	int x[5];

	for (i = 0; i < 5; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 5; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
