/*
	������ߺ����أ����㲢��ʾ���ǵ�ƽ��ֵ
*/

#include <stdio.h>

int main(void)
{
	FILE   *fp;
	int    ninzu = 0;			/* ���� */
	char   name[100];			/* ���� */
	double height, weight;		/* ��ߣ����� */
	double hsum = 0.0;			/* ��ߺϼ� */
	double wsum = 0.0;			/* ���غϼ� */

	if ((fp = fopen("hw.dat", "r")) == NULL)				/* ���ļ� */
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("----------------------\n");
		printf("ƽ��       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);											/* �ر��ļ� */
	}

	return 0;
}
