/*
	ȷ��ӵ�о�̬�洢�ڵĶ����Ĭ�ϵĳ�ʼ��
*/

#include <stdio.h>

int fx;						/* ��0��ʼ�� */

int main(void)
{
	int i;
	static int    si;		/* ��0��ʼ�� */
	static double sd;		/* ��0.0��ʼ�� */
	static int    sa[5];	/* ����Ԫ�ض���0��ʼ�� */

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);

	return 0;
}
