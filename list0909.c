/*
	�����ַ�������ʾ
*/

#include <stdio.h>

/*--- ��ʾ�ַ���s�������У�---*/
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];

	printf("�������ַ�����");
	scanf("%s", str);

	printf("��������");
	put_string(str);
	printf("��\n");

	return 0;
}
