/*
	����׼���������д���ļ�
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;						/* ԭ�ļ��� */
	char fname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("Ŀ���ļ�����");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)	/* ��Ŀ���ļ� */
		printf("\a�޷���Ŀ���ļ���\n");
	else {
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);							/* �ر�Ŀ���ļ� */
	}

	return 0;
}
