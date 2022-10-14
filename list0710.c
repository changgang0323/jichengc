/*
	��������ľ���
*/

#include <math.h>
#include <stdio.h>

/*--- �����(x1,y1)�͵�(x2,y2)֮��ľ��� ---*/
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
	double x1, y1;		/* ��1 */
	double x2, y2;		/* ��2 */

	printf("�������ľ��롣\n");
	printf("��1������X����");   scanf("%lf", &x1);
	printf("      Y����");   scanf("%lf", &y1);
	printf("��2������X����");   scanf("%lf", &x2);
	printf("      Y����");   scanf("%lf", &y2);

	printf("����֮��ľ���Ϊ%f��\n", dist(x1, y1, x2, y2));

	return 0;
}
