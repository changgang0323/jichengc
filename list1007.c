/*
	����������ֵ����������
*/

#include <stdio.h>

/*--- ��px��py��ָ�����ֵ���л��� ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- ����˳��Ϊ*n1��*n2 ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int na, nb;

	puts("����������������");
	printf("����A��");   scanf("%d", &na);
	printf("����B��");   scanf("%d", &nb);

	sort2(&na, &nb);

	puts("��������ֵ���������С�");
	printf("����A��%d��\n", na);
	printf("����B��%d��\n", nb);

	return 0;
}
