/*
	��ȡ����ʵ��ֵ����ʵ����ʾ�����ǵĺ͡��������
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;		/* ������ */

	puts("��������������");
	printf("ʵ��vx��");   scanf("%lf", &vx);
	printf("ʵ��vy��");   scanf("%lf", &vy);

	printf("vx + vy = %f\n",  vx + vy);
	printf("vx - vy = %f\n",  vx - vy);
	printf("vx * vy = %f\n",  vx * vy);
	printf("vx / vy = %f\n",  vx / vy);

	return 0;
}
