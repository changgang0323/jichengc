/*
	���������ֵ����������ż��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no % 2)
		puts("��������������");
	else
		puts("��������ż����");

	return 0;
}
