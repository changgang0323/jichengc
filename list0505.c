/*
	��ͷ��ʼ������1��2��3��4��5 �������Ԫ�ؽ��г�ʼ������ʾ
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5] = {1, 2, 3, 4, 5};		/* ��ʼ�� */

	for (i = 0; i < 5; i++)			/* ��ʾԪ�ص�ֵ */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
