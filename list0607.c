/*
	��ʾ��һ��ֱ�������·��ĵ���ֱ�������Σ������棩
*/

#include <stdio.h>

/*--- ������ʾ��n��'*' ---*/
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;

	printf("����һ��ֱ�������·��ĵ���ֱ�������Ρ�\n");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
