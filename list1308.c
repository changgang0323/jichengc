/*
	��Բ���ʵ�ֵд��Ŀ���ļ����ٽ��ж�ȡ
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("�ӱ���pi�õ���Բ����Ϊ%23.21f��\n", pi);

	/* д����� */
	if ((fp = fopen("PI.txt", "w")) == NULL)			/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fprintf(fp, "%f", pi);							/* ��piд�� */
		fclose(fp);										/* �ر��ļ� */
	}

	/* ��ȡ���� */
	if ((fp = fopen("PI.txt", "r")) == NULL)			/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fscanf(fp, "%lf", &pi);							/* ��ȡ��pi */
		printf("���ļ���ȡ��Բ����Ϊ%23.21f��\n", pi);
		fclose(fp);										/* �ر��ļ� */
	}

	return 0;
}