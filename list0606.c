/*
	������
*/

#include <stdio.h>

/*--- ����x��n���� ---*/
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;	/* tmp����x */
	return tmp;
}

int main(void)
{
	double a;
	int b;

    printf("��a��b���ݡ�\n");
	printf("ʵ��a��");   scanf("%lf", &a);
	printf("����b��");   scanf("%d",  &b);

	printf("%.2f��%d������%.2f��\n", a, b, power(a, b));

	return 0;
}
