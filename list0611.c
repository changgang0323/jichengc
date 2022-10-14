/*
	计算英语分数和数学分数中的最高分
*/

#include <stdio.h>

#define NUMBER	5		/* 学生人数 */

/*--- 返回元素个数为n的数组v中的最大值 ---*/
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];		/* 英语的分数 */
	int mat[NUMBER];		/* 数学的分数 */
	int max_e, max_m;		/* 最高分 */

	printf("请输入%d名学生的分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]英语：", i + 1);  scanf("%d", &eng[i]);
		printf( "   数学：");         scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* 英语的最高分 */
	max_m = max_of(mat, NUMBER);	/* 英语的最高分 */

	printf("英语的最高分＝%d\n", max_e);
	printf("英语的最高分＝%d\n", max_m);

	return 0;
}
