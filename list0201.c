/*
	��ȡ����������ֵ��Ȼ����ʾ�����ǵĺ͡�������̺�����
*/

#include <stdio.h>

int main(void)
{
	int vx, vy;

	puts("����������������");
	printf("����vx��");   scanf("%d", &vx);
	printf("����vy��");   scanf("%d", &vy);

	printf("vx + vy = %d\n",  vx + vy);
	printf("vx - vy = %d\n",  vx - vy);
	printf("vx * vy = %d\n",  vx * vy);
	printf("vx / vy = %d\n",  vx / vy);
	printf("vx %% vy = %d\n", vx % vy);

	return 0;
}
