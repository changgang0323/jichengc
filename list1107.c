/*
	�����ַ�����������
*/

#include <stdio.h>

/*--- ���ַ���s���Ƶ�d ---*/
char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char *ptr = "1234";
	char tmp[128];

	printf("ptr = \"%s\"\n", ptr);

	printf("���Ƶ��ǣ�", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);					/* ��tmp���Ƶ�ptr */

	puts("�����ˡ�");
	printf("ptr = \"%s\"\n", ptr);		/* ��ʾ���ƺ��ptr */

	return 0;
}
