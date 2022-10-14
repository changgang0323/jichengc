/*
	不停地输入整数，显示其和及平均值（其2）
    ※ 使用复合赋值运算符和后置递增运算符
*/

#include <stdio.h>

int main(void)
{
	int sum = 0;	/* 和 */
	int cnt = 0;	/* 整数个数 */
	int retry;		/* 是否继续处理 */

	do {
		int t;

		printf("请输入一个整数：");
		scanf("%d", &t);

		sum += t;	 /* sum加t */
		cnt++;		 /* cnt的值递增 */

        printf("是否继续？ <Yes… 0/No… 9>:");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("和为%d，平均值为%.2f。\n", sum, (double)sum / cnt);

	return 0;
}
