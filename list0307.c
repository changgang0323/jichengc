/*
	��������������������2��
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1��");   scanf("%d", &n1);
	printf("����2��");   scanf("%d", &n2);

	if (n1 != n2)
		puts("���ǲ���ȡ�");
	else
		puts("������ȡ�");

	return 0;
}
