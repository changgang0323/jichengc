/*
	复制字符串
*/
#include <stdio.h>

/*--- 将字符串s复制到d ---*/
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

	printf("复制的是：", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("复制了。");
	printf("str = \"%s\"\n", str);

	return 0;
}
