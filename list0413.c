/*
	����涨��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ��ʹ��for ��䣩
*/

#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;			/* �ϼ�ֵ */
	int num, tmp;

	printf("������ٸ�������");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("No.%d:", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("�ϼ�ֵ��%d\n", sum);
	printf("ƽ��ֵ��%.2f\n", (double)sum / num);

	return 0;
}
