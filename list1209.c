/*
	������ʻ
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))

/*=== ��ʾ�������Ľṹ�� ===*/
typedef struct  {
	double x;	/* X���� */
	double y;	/* Y���� */
} Point;

/*=== ��ʾ�����Ľṹ�� ===*/
typedef struct  {
	Point  pt;		/* ��ǰλ�� */
	double fuel;	/* ʣ��ȼ�� */
} Car;

/*--- ���ص�pa�͵�pb֮��ľ���---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*--- ��ʾ�����ĵ�ǰλ�ú�ʣ��ȼ�� ---*/
void put_info(Car c)
{
	printf("��ǰλ�ã�(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("ʣ��ȼ�ϣ�%.2f��\n", c.fuel);
}

/*--- ʹcָ���������Ŀ������dest��ʻ ---*/
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);	/* ��ʻ���� */
	if (d > c->fuel)						/* ��ʻ���볬����ȼ�� */
		return 0;							/* �޷���ʻ */
	c->pt = dest;		/* ���µ�ǰλ�ã���dest�ƶ��� */
	c->fuel -= d;		/* ����ȼ�ϣ���ȥ��ʻ����d�����ĵ�ȼ�ϣ� */
	return 1;								/* �ɹ���ʻ */
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		Point dest;			/* Ŀ�ĵص����� */

		put_info(mycar);	/* ��ʾ��ǰλ�ú�ʣ��ȼ�� */

		printf("����������Yes������1 / No������0����");
		scanf("%d", &select);
		if (select != 1) break;

		printf("Ŀ�ĵص�X���꣺");  scanf("%lf", &dest.x);
		printf("        Y���꣺");  scanf("%lf", &dest.y);

		if (!move(&mycar, dest))
			puts("\aȼ�ϲ����޷���ʻ��");
	}

	return 0;
}
