/*
	用字符和字符编码显示文件内容
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE *fp;
	char fname[FILENAME_MAX];			/* 文件名 */

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "rb")) == NULL)					/* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		while ((n = fread(buf, 1, 16, fp)) > 0) {
			int i;

			printf("%08lX ", count);						/* 地址 */

			for (i = 0; i < n; i++)							/* 十六进制数 */
				printf("%02X ", (unsigned)buf[i]);

			if (n < 16)
				for (i = n; i < 16; i++)
					printf("   ");

			for (i = 0; i < n; i++)							/* 字符 */
				putchar(isprint(buf[i]) ? buf[i] : '.');

			putchar('\n');

			count += 16;
		}
		fclose(fp);											/* 关闭文件 */
	}

	return 0;
}
