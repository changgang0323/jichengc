/*
	������ʾ��0�������������Ϊֹ�ĸ���������ʹ��for��䣩
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');		/* ���� */

	return 0;
}
