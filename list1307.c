/*
	�����ļ�
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *sfp;						/* ԭ�ļ� */
	FILE *dfp;						/* Ŀ���ļ� */
	char sname[FILENAME_MAX];		/* ԭ�ļ��� */
	char dname[FILENAME_MAX];		/* Ŀ���ļ��� */

	printf("��ԭ�ļ���");   scanf("%s", sname);
	printf("��Ŀ���ļ���");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* ��ԭ�ļ� */
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* ��Ŀ���ļ� */
			printf("\aĿ���ļ���ʧ�ܡ�\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				fputc(ch, dfp);
			fclose(dfp);						/* �ر�Ŀ���ļ� */
		}
		fclose(sfp);							/* �ر�ԭ�ļ� */
	}

	return 0;
}
