/*
	������ƽ���͸�������ƽ��������ʽ�꣩
*/

#include <stdio.h>

#define sqr(x)  ((x) * (x))		/* ����x��ƽ���ĺ���ʽ�� */

int main(void)
{
	int    n;
	double x;

	printf("������һ��������");
	scanf("%d", &n);
	printf("������ƽ����%d��\n", sqr(n));

	printf("������һ��ʵ����");
	scanf("%lf", &x);
	printf("������ƽ����%f��\n", sqr(x));

	return 0;
}
