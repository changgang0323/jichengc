/*
	��ʾ����ȡ�������������ĺ�
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;
	int wa;		/* �� */

	puts("����������������");
	printf("����1��");   scanf("%d", &n1);
	printf("����2��");   scanf("%d", &n2);

	wa = n1 + n2;								/* ��n1��n2�ĺ͸�������wa */

	printf("���ǵĺ���%d��\n", wa);		/* ��ʾ�� */

	return 0;
}
