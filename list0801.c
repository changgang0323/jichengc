/*
	������ƽ���͸�������ƽ����������
*/

#include <stdio.h>

/*--- ��int��������ƽ��ֵ ---*/
int sqr_int(int x)
{
	return x * x;
}

/*--- ��double�͸�������ƽ��ֵ ---*/
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int    n;
	double x;

	printf("������һ��������");
	scanf("%d", &n);
	printf("������ƽ����%d��\n", sqr_int(n));

	printf("������һ��ʵ����");
	scanf("%lf", &x);
	printf("������ƽ����%f��\n", sqr_double(x));

	return 0;
}
