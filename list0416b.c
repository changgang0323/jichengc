/*
	��ʾ�žų˷�����������4����ʱִ��continue��䣩
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki % 10 == 4 || seki / 10 == 4) {
				printf("   ");
				continue;
			}
			printf("%3d", seki);
		}
		putchar('\n');		/* ���� */
	}

	return 0;
}
