/*
	����Ӣ���������ѧ�����е���߷�
*/

#include <stdio.h>

#define NUMBER	5		/* ѧ������ */

/*--- ����Ԫ�ظ���Ϊn������v�е����ֵ ---*/
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];		/* Ӣ��ķ��� */
	int mat[NUMBER];		/* ��ѧ�ķ��� */
	int max_e, max_m;		/* ��߷� */

	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]Ӣ�", i + 1);  scanf("%d", &eng[i]);
		printf( "   ��ѧ��");         scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* Ӣ�����߷� */
	max_m = max_of(mat, NUMBER);	/* Ӣ�����߷� */

	printf("Ӣ�����߷֣�%d\n", max_e);
	printf("Ӣ�����߷֣�%d\n", max_m);

	return 0;
}
