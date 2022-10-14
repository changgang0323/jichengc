/*
	打开与关闭文件
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "r");						/* 打开文件 */

	if (fp == NULL)
		printf("\a无法打开文件\"abc\"。\n");
	else {
		printf("\a成功打开了文件\"abc\"。\n");
		fclose(fp);								/* 关闭文件 */
	}

	return 0;
}
