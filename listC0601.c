/*
	为n行3列的二维数组的所有构成元素赋上同样的值
*/

#include <stdio.h>

/*---将v赋值给元素类型为int[3]、元素个数为n的数组m的所有构成元素---*/
void fill(int m[][3], int n, int v)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = v;
}

/*---显示元素类型为int[3]、元素个数为n的数组m的所有构成元素---*/
void mat_print(const int m[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main()
{
	int no;
	int x[2][3] = {0};		/* 2行3列：元素类型为int[3]、元素个数为2 */
	int y[4][3] = {0};		/* 4行3列：元素类型为int[3]、元素个数为4 */

	printf("赋给所有构成元素的值：");
	scanf("%d", &no);

	fill(x, 2, no);			/* 将no赋给x的所有构成元素 */
	fill(y, 4, no);			/* 将no赋给y的所有构成元素 */

	printf("--- x ---\n");   mat_print(x, 2);
	printf("--- y ---\n");   mat_print(y, 4);

	return 0;
}
