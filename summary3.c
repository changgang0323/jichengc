/*
	��ʾ����������������нϴ�����ͽ�С����
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1��");   scanf("%d", &n1);
	printf("����2��");   scanf("%d", &n2);

	if (n1 > n2) {
		printf("�ϴ������n1��\n");
		printf("���ǵĲ���%d��\n", n1 - n2);
	} else {
		printf("�ϴ������n2��\n");
		printf("���ǵĲ���%d��\n", n2 - n1);
	}

	return 0;
}
