/*
	��ʾ��ѡ����Ľ���
*/

#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

/*--- ���� ---*/
void dog(void)
{
	puts("����!!");
}

/*--- è�� ---*/
void cat(void)
{
	puts("��~!!");
}

/*--- ��� ---*/
void monkey(void)
{
	puts("����!!");
}

/*--- ѡ���� ---*/
enum animal select(void)
{
	int tmp;

	do {
		printf("0��������  1������è  2��������   3������������");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;

	do {
		switch (selected = select()) {
		 case Dog	 : dog();	 break;
		 case Cat	 : cat();	 break;
		 case Monkey : monkey(); break;
		}
	} while (selected != Invalid);

	return 0;
}