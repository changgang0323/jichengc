/*
	��8���ܽᣨö�٣�
*/

#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void)
{
	int color;

	printf("0~2��ֵ��");  scanf("%d", &color);

	printf("��ѡ����");  
	switch (color) {
	 case 0 : printf("��ɫ��\n");  break;
	 case 1 : printf("��ɫ��\n");  break;
	 case 2 : printf("��ɫ��\n");  break;
	}

	return 0;
}
