/*
	确认拥有静态存储期的对象的默认的初始化
*/

#include <stdio.h>

int fx;						/* 用0初始化 */

int main(void)
{
	int i;
	static int    si;		/* 用0初始化 */
	static double sd;		/* 用0.0初始化 */
	static int    sa[5];	/* 所有元素都用0初始化 */

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);

	return 0;
}
