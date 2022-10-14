/*
	��4��ѧ�������ο�����3�γ̵��ֲܷ���ʾ�������棩
*/

#include <stdio.h>

/*--- ��4��3�о���a��b�ĺʹ洢��c�� ---*/
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/*--- ��ʾ4��3�о���m ---*/
void mat_print(const int m[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];			/* �ܷ� */

	mat_add(tensu1, tensu2, sum);				/* �����ο����гɼ����ܺ� */

	puts("��һ�ο��Եķ���");  mat_print(tensu1);	/* ��ʾ��һ�ο��Եķ��� */
	puts("�ڶ��ο��Եķ���");  mat_print(tensu2);	/* ��ʾ�ڶ��ο��Եķ��� */
	puts("�ܷ�");        mat_print(sum);		/* ��ʾ�ܷ� */

	return 0;
}
