/*
	�Ը��������ж�μӷ�����
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	float value;		/* ֵ */
	float sum = 0.0f;	/* �� */

	puts("�Ը��������ж�μӷ����㡣");
	printf("ֵ");     scanf("%f", &value);
	printf("����");   scanf("%d", &no);

	for (i = 0; i < no; i++)
		sum += value;
	printf("�ӷ�����Ľ����%f��\n", sum);

	return 0;
}
