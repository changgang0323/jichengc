/*
	��ȡ������������ʵ����ʾ�����ǵ�ƽ��ֵ������ת����
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("����������������");
	printf("����a��");   scanf("%d", &a);
	printf("����b��");   scanf("%d", &b);

	printf("���ǵ�ƽ��ֵ��%f��\n", (double)(a + b) / 2);	/* ����ת�� */

	return 0;
}
