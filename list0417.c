/*
	��һ��������
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("����������һ�������Ρ�");
	printf("�ߣ�");   scanf("%d", &height);
	printf("��");   scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* ��������height�� */
		for (j = 1; j <= width; j++)		/* ��ʾwidth ��'*'* */
			putchar('*');
		putchar('\n');						/* ���� */
	}
	return 0;
}
