/*
	�������������ʼ������0����2��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ����������");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);	/* no��ֵ����ʾ֮��ݼ� */
	printf("\n");				/* ���� */

	return 0;
}
