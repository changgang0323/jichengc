/*
	��ʾ���������������3������
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("�����ܱ�3������");
	else if (no % 3 == 1)
		puts("��������3��������1��");
	else
		puts("��������3��������2��");

	return 0;
}
