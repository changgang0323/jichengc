/*
	�������������������ż���أ������Լ�����Ը����ѭ��������
*/

#include <stdio.h>

int main(void)
{
	int retry;		/* Ҫ������ */

	do {
		int no;

		printf("������һ��������");
		scanf("%d", &no);

		if (no % 2)
			puts("���������������");
		else
			puts("���������ż����");

		printf("Ҫ�ظ�һ���𣿡�Yes��0 / No��9��:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
