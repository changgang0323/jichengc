/*
	�������ȫ��Ԫ�ظ�ֵΪ0.0����ʾ
*/

#include <stdio.h>

int main(void)
{
	int i;
	double x[7];	/* double[7]���� */

	for (i = 0; i < 7; i++)		/* Ϊ����Ԫ�ظ�ֵ */
		x[i] = 0.0;

	for (i = 0; i < 7; i++)		/* ��ʾԪ�ص�ֵ */
		printf("x[%d] = %.1f\n", i, x[i]);

	return 0;
}
