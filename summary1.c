/*
	��3�µ��ܽᣨ��1����ʾ��������·������ļ���
*/

#include <stdio.h>

int main(void)
{
	int month;					/* �� */

	printf("�������·ݣ�");
	scanf("%d", &month);

	if (month < 1 || month > 12)
		printf("%d�²�����!!\a\n", month);
	else if (month <= 2 || month == 12)
		printf("%d���Ƕ�����\n", month);
	else if (month >= 9)
		printf("%d�����＾��\n", month);
	else if (month >= 6)
		printf("%d�����ļ���\n", month);
	else
		printf("%d���Ǵ�����\n", month);

	return 0;
}
