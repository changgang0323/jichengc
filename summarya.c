/*
	��4�µ��ܽᣨ��һ��д����
*/ 

#include <stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;

	do {
		printf("0~100 ������ֵ��");
		scanf("%d", &x);
	} while (!(x >= 0 && x <= 100));

	y = x;
	z = x;
	while (y >= 0)
		printf("%d %d\n", y--, ++z);

	printf("��͸�Ϊ�������Ϊ%d"
		   "�ĳ����εı߳��ǣ�\n", x);
	for (i = 1; i < x; i++) {
		if (i * i > x) break;      /* break���    */
		if (x % i != 0) continue;  /* continue��� */
		printf("%d �� %d\n", i, x / i);
	}

	puts("5��7�е��Ǻ�");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 7; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
