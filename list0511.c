/*
	输入学生的分数并显示出其中的最高分和最低分
*/

#include <stdio.h>

#define NUMBER	5		/* 学生人数 */

int main(void)
{
	int i;
	int tensu[NUMBER];	/* NUMBER名学生的分数 */
	int max, min;		/* 最高分和最低分 */

	printf("请输入%d名学生的分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("最高分：%d\n", max);
	printf("最低分：%d\n", min);

	return 0;
}
