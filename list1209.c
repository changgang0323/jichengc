/*
	汽车行驶
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))

/*=== 表示点的坐标的结构体 ===*/
typedef struct  {
	double x;	/* X坐标 */
	double y;	/* Y坐标 */
} Point;

/*=== 表示汽车的结构体 ===*/
typedef struct  {
	Point  pt;		/* 当前位置 */
	double fuel;	/* 剩余燃料 */
} Car;

/*--- 返回点pa和点pb之间的距离---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*--- 显示汽车的当前位置和剩余燃料 ---*/
void put_info(Car c)
{
	printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("剩余燃料：%.2f升\n", c.fuel);
}

/*--- 使c指向的汽车向目标坐标dest行驶 ---*/
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);	/* 行驶距离 */
	if (d > c->fuel)						/* 行驶距离超过了燃料 */
		return 0;							/* 无法行驶 */
	c->pt = dest;		/* 更新当前位置（向dest移动） */
	c->fuel -= d;		/* 更新燃料（减去行驶距离d所消耗的燃料） */
	return 1;								/* 成功行驶 */
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		Point dest;			/* 目的地的坐标 */

		put_info(mycar);	/* 显示当前位置和剩余燃料 */

		printf("开动汽车吗【Yes···1 / No···0】：");
		scanf("%d", &select);
		if (select != 1) break;

		printf("目的地的X坐标：");  scanf("%lf", &dest.x);
		printf("        Y坐标：");  scanf("%lf", &dest.y);

		if (!move(&mycar, dest))
			puts("\a燃料不足无法行驶。");
	}

	return 0;
}
