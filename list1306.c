/*
	��ʾ�ļ�����
*/

#include <stdio.h>

int main(void)
{
	int  ch;
	FILE *fp;
	char fname[FILENAME_MAX];		/* �ļ��� */

	printf("�ļ�����");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)					/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);											/* �ر��ļ� */
	}

	return 0;
}
