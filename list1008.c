/*
	������ʵ��ֵ���л�����������
*/

#include <stdio.h>

/*--- ��px��py��ָ�����ֵ���л��� ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	double da, db;

	puts("����������ʵ����");
	printf("ʵ��A��");  scanf("%lf", &da);
	printf("ʵ��B��");  scanf("%lf", &db);

	swap(&da, &db);

	puts("������������ֵ��");
	printf("ʵ��A��%f��\n", da);
	printf("ʵ��B��%f��\n", db);

	return 0;
}
