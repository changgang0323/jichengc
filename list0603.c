/*
	��������������ƽ����
*/

#include <stdio.h>

/*--- ����x��ƽ�� ---*/
int sqr(int x)
{
	return x * x;
}

/*--- ����x��y�Ĳ�ֵ ---*/
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* ��ֵ��Сֵ */
}

int main(void)
{
	int x, y;

	puts("����������������");
	printf("����x��");   scanf("%d", &x);
	printf("����y��");   scanf("%d", &y);

	printf("x��y��ƽ������%d��\n", diff(sqr(x), sqr(y)));

	return 0;
}
