/*
	����ر��ļ�
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "r");						/* ���ļ� */

	if (fp == NULL)
		printf("\a�޷����ļ�\"abc\"��\n");
	else {
		printf("\a�ɹ������ļ�\"abc\"��\n");
		fclose(fp);								/* �ر��ļ� */
	}

	return 0;
}
