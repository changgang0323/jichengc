/*
	�������������ʼ������0
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ����������");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;			/* no��ֵ�ݼ� */
	}
	printf("\n");		/* ���� */

	return 0;
}
