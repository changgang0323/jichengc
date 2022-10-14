/*
	将标准输入的数据写入文件
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;						/* 原文件名 */
	char fname[FILENAME_MAX];		/* 目标文件名 */

	printf("目标文件名：");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)	/* 打开目标文件 */
		printf("\a无法打开目标文件。\n");
	else {
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);							/* 关闭目标文件 */
	}

	return 0;
}
