/*
	��������֮��ľ���
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))		/* ����˷� */

/*=== ��ʾ�������Ľṹ�� ===*/
typedef struct  {
	double x;	/* X���� */
	double y;	/* Y���� */
} Point;

/*--- ���ص�pa�͵�pb֮��ľ���---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
	Point crnt, dest;

	printf("��ǰ�ص��X���꣺");   scanf("%lf", &crnt.x);
	printf("          Y���꣺");   scanf("%lf", &crnt.y);
	printf("Ŀ�ĵص�X���꣺");   scanf("%lf", &dest.x);
	printf("        Y���꣺");   scanf("%lf", &dest.y);

	printf("��Ŀ�ĵصľ���Ϊ%.2f��\n", distance_of(crnt, dest));

	return 0;
}
