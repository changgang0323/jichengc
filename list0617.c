/*
	ȷ�ϱ�ʶ����������
*/

#include <stdio.h>

int x = 75;						/* A���ļ������� */

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int i;
	int x = 999;				/* B���������� */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++) {
		int x = i * 100;		/* C���������� */
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}
