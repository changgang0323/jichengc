/*
	������������ֵΪ�������жϸ�ֵ����ż�Բ���ʾ
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("������Ϊż����");
		else
			puts("������Ϊ������");
	else
		puts("������Ĳ���������\a\n");

	return 0;
}
