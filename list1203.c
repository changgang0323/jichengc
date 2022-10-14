/*
	用表示学生的结构体来显示高尾的信息
*/

#include <stdio.h>

#define NAME_LEN	64		/* 姓名的字符数 */

/*=== 表示学生的结构体 ===*/
struct student {
	char  name[NAME_LEN];	/* 姓名 */
	int   height;			/* 身高 */
	float weight;			/* 体重 */
	long  schols;			/* 奖学金 */
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};

	printf("姓名 = %s\n",   takao.name);
	printf("身高 = %d\n",   takao.height);
	printf("体重 = %.1f\n", takao.weight);
	printf("奖学金 = %ld\n",  takao.schols);

	return 0;
}
