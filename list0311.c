/*
	��ʾ����������������нϴ����
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1��");   scanf("%d", &n1);
	printf("����2��");   scanf("%d", &n2);

	if (n1 > n2)
		printf("�ϴ������%d��\n", n1);
	else
		printf("�ϴ������%d��\n", n2);

	return 0;
}
