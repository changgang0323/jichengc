/*
	��ȡ�����������ø�������ʾ������ƽ��ֵ
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("����������������");
	printf("����a��");   scanf("%d", &a);
	printf("����b��");   scanf("%d", &b);

	printf("���ǵ�ƽ��ֵ��%f��\n", (a + b) / 2.0);

	return 0;
}
