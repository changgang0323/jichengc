/*
	��ʾֱ�������·��ĵ���ֱ��������
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("����ֱ�������·��ĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		/* i ��(i = 1, 2, --- , len) */
		for (j = 1; j <= i; j++)		/* ÿ����ʾi ��'*' */
			putchar('*');
		putchar('\n');					/* ���� */
	}

	return 0;
}
