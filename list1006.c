/*
	����������ֵ����
*/

#include <stdio.h>

/*--- ��px��pyָ��Ķ����ֵ���л��� ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	int na, nb;

	puts("����������������");
	printf("����A��");   scanf("%d", &na);
	printf("����B��");   scanf("%d", &nb);

	swap(&na, &nb);

	puts("������������ֵ��");
	printf("����A��%d��\n", na);
	printf("����B��%d��\n", nb);

	return 0;
}
