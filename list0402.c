/*
	���ݶ�ȡ������ֵ��ʾ������ȭ��ֻ����0��1��2��
*/

#include <stdio.h>

int main(void)
{
	int hand;	/* ��ȭ */

	do {
		printf("��ѡ���ʲôȭ��0������ʯͷ/1����������/2����������:");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("��ѡ����");
	switch (hand) {
	 case 0: printf("ʯͷ��\n");	break;
	 case 1: printf("������\n");	break;
	 case 2: printf("����\n");	    break;
	}

	return 0;
}
