/*
	����һ��������������ʾ����������*(ʹ��for ���)
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("������");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}
