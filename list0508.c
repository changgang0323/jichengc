/*
	�������ȫ��Ԫ�ؽ��е�������
*/

#include <stdio.h>

int main(void)
{
	int i;
	int x[7];					/* int[7] ���� */

	for (i = 0; i < 7; i++) {	/* ����Ԫ�ص�ֵ */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* ������Ԫ�ؽ��е������� */
		int temp = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = temp;
	}

	puts("���������ˡ�");
	for (i = 0; i < 7; i++)		/* ��ʾԪ�ص�ֵ */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
