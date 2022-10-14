/*
	将圆周率的值写入二进制文件再进行读取
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("从变量pi得到的圆周率为%23.21f。\n", pi);

	/* 写入操作 */
	if ((fp = fopen("PI.bin", "wb")) == NULL)		/* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);			/* 从pi写入 */
		fclose(fp);
	}												/* 关闭文件 */

	/* 读取操作 */
	if ((fp = fopen("PI.bin", "rb")) == NULL)		/* 打开文件 */
		printf("\a文件打开失败。\n");
	else {
		fread(&pi, sizeof(double), 1, fp);			/* 读取至pi */
		printf("从文件读取的圆周率为%23.21f。\n", pi);
		fclose(fp);									/* 关闭文件 */
	}

	return 0;
}
