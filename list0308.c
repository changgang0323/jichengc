/*
	��λ����5��
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("������һ��������");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("�������ĸ�λ����5��");
	else
		puts("�������ĸ�λ������5��");

	return 0;
}
