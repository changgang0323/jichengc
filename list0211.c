/*
	��ȡ��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;				/* �ϼ�ֵ */
	double ave;				/* ƽ��ֵ */

	puts("����������������");
	printf("����a��");   scanf("%d", &a);
	printf("����b��");   scanf("%d", &b);
	printf("����c��");   scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;		/* ����ת�� */

	printf("���ǵĺϼ�ֵ��%5d��\n",   sum);		/* ���99999 */
	printf("���ǵ�ƽ��ֵ��%5.1f��\n", ave);		/* ���999.9 */

	return 0;
}
