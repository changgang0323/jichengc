/*
	������߷�
*/

#include <stdio.h>

#define NUMBER	5	/* ѧ������ */

int tensu[NUMBER];	/* ���鶨�� */

int top(void);		/* ����top�ĺ���ԭ������ */

int main(void)
{
	extern int tensu[];		/* ���������������ʡ�ԣ� */
	int i;

	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d��", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("��߷�=%d\n", top());

	return 0;
}

/*--- ��������tensu �����ֵ������top�ĺ������壩---*/
int top(void)
{
	extern int tensu[];		/* ���������������ʡ�ԣ�*/
	int i;
	int max = tensu[0];

	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}
