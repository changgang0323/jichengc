/*
	��Բ���ʵ�ֵд��������ļ��ٽ��ж�ȡ
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("�ӱ���pi�õ���Բ����Ϊ%23.21f��\n", pi);

	/* д����� */
	if ((fp = fopen("PI.bin", "wb")) == NULL)		/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);			/* ��piд�� */
		fclose(fp);
	}												/* �ر��ļ� */

	/* ��ȡ���� */
	if ((fp = fopen("PI.bin", "rb")) == NULL)		/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fread(&pi, sizeof(double), 1, fp);			/* ��ȡ��pi */
		printf("���ļ���ȡ��Բ����Ϊ%23.21f��\n", pi);
		fclose(fp);									/* �ر��ļ� */
	}

	return 0;
}
