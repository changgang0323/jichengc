/*
	�Զ��洢�ں;�̬�洢��
*/

#include <stdio.h>

int fx = 0;				/* ��̬�洢��+�ļ������� */

void func(void)
{
	static int sx = 0;	/* ��̬�洢��+�������� */
	int        ax = 0;	/* �Զ��洢��+�������� */

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void)
{
	int i;

	puts(" ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
		func();
	puts("----------");

	return 0;
}
