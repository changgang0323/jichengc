/*
	ͨ��ָ�����޸����
*/

#include <stdio.h>

/*--- ���ӣ�����߲���180cm���˳���180cm��---*/
void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato   = 178;		/* ���ٵ���� */
	int sanaka = 175;		/* ���е���� */
	int masaki = 179;		/* �������� */

	hiroko(&masaki);

	printf("���ٵ���ߣ�%d\n", sato);
	printf("���е���ߣ�%d\n", sanaka);
	printf("�������ߣ�%d\n", masaki);

	return 0;
}
