/*
	���ΰ�1��2��3��4��5 ��ֵ�������ÿ��Ԫ�ز���ʾ��ʹ��for��䣩
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5];	/* int[5]���� */

	for (i = 0; i < 5; i++)		/* Ϊ����Ԫ�ظ�ֵ */
		v[i] = i + 1;

	for (i = 0; i < 5; i++)		/* ��ʾԪ�ص�ֵ */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
