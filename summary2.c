/*
	��8���ܽᣨ����ʽ�ꡢ������������ַ�����������ȣ�
*/

#include <stdio.h>

/* ���� */
#define alert() (putchar('\a'))

/* ��ʾ�ַ�c������ */
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;	/* ��ʾ��������֮�� */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {
			alert();
			putchar('\n');
		} else {
			putchar_ln(ch);
		}
	}

	printf("��������֮��Ϊ%d��\n", sum);

	return 0;
}
