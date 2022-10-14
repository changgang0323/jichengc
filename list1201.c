/*
	对5名学生的“姓名和身高”按身高进行升序排列
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* 学生人数 */
#define NAME_LEN	64		/* 姓名的字符数 */

/*--- 交换x和y指向的整数值 ---*/
void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*--- 交换sx和sy指向的字符串 ---*/
void swap_str(char *sx, char *sy)
{
	char temp[NAME_LEN];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

/*--- 基于num对数组num和str的前n个元素进行升序排列 ---*/
void sort(int num[], char str[][NAME_LEN], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (num[j - 1] > num[j]) {
				swap_int(&num[j - 1], &num[j]);
				swap_str( str[j - 1],  str[j]);
			}
		}
	}
}

int main(void)
{
	int  i;
	int  height[] =         {178,    175,      173,     165,    179};
	char name[][NAME_LEN] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};

	for (i = 0; i < NUMBER; i++)
		printf("%2d：%-8s%4d\n", i + 1, name[i], height[i]);

	sort(height, name, NUMBER);		/* 按身高由低到高的顺序排列身高和姓名 */

	puts("\n按身高进行升序排列。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d：%-8s%4d\n", i + 1, name[i], height[i]);

	return 0;
}
