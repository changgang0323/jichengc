/*
	�����׼�������г��ֵ������ַ�������2�棩
*/

#include <stdio.h>

int main(void)
{
	int i, ch;
	int cnt[10] = {0};		/* �����ַ��ĳ��ִ��� */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}

	puts("�����ַ��ĳ��ִ���");
	for (i = 0; i < 10; i++)
		printf("'%d'��%d\n", i, cnt[i]);

	return 0;
}
