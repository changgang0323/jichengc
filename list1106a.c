/*
	�����ַ���
*/
#include <stdio.h>

/*--- ���ַ���s���Ƶ�d ---*/
char *str_copy(char *d, const char *s)
{
	int i;

	while (d[i] = s[i])
		i++;
	return d;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("���Ƶ��ǣ�", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("�����ˡ�");
	printf("str = \"%s\"\n", str);

	return 0;
}
