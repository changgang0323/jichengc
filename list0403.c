/*
	��ͣ��������������ʾ��ͼ�ƽ��ֵ
*/

#include <stdio.h>

int main(void)
{
	int sum = 0;	/* �� */
	int cnt = 0;	/* �������� */
	int retry;		/* �Ƿ�������� */

	do {
		int t;

		printf("������һ��������");
		scanf("%d", &t);

		sum = sum + t;	 /* ��sum��t�Ľ����ֵ��sum��sum��t��*/
		cnt = cnt + 1;	 /* ��cnt��1�Ľ����ֵ��cnt��cnt��1��*/

		printf("�Ƿ������ <Yes�� 0/No�� 9>:");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("��Ϊ%d��ƽ��ֵΪ%.2f��\n", sum, (double)sum / cnt);

	return 0;
}
