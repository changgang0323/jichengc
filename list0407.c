/*
	������ʾ��0�������������Ϊֹ�ĸ�������
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* i��ֵ����ʾ֮����� */
	printf("\n");				/* ���� */

	return 0;
}
