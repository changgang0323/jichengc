/*
	�����ַ�������ʾ
*/

#include <stdio.h>

#define STR_LENGTH	128		/* �ַ�������󳤶ȣ�����null�ַ���*/

/*--- ��ʾ�ַ���s���乹���ַ� ---*/
void put_string_rep(const char s[])
{
	int i = 0;

	while (s[i])
		putchar(s[i++]);

	printf("   { ");

	i = 0;
	while (s[i]) {
		putchar('"');
		putchar(s[i++]);
		printf("' ");
	}

	printf("'\\0' }\n");
}

int main(void)
{
	int i;
	char s[STR_LENGTH];
	char ss[5][STR_LENGTH];

	printf("�ַ���s��");
	scanf("%s", s);

	printf("������5���ַ�����\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]��", i);
		scanf("%s", ss[i]);
	}

	printf("�ַ���s��");
	put_string_rep(s);

	printf("�ַ�������ss\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]��", i);
		put_string_rep(ss[i]);
	}

	return 0;
}
