/*
	��3�µ��ܽᣨ��2����ʾ��ֵ��Ӧ����ɫ
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("������һ��������");
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("��ɫ");  break;
		 case 2: printf("��ɫ");  break;
		 case 3: printf("��ɫ");  break;
		}
		printf("\n");
	}

	return 0;
}
