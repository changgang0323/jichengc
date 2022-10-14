/*
	复制字符串（误例）
*/

#include <stdio.h>

/*--- 将字符串s复制到d ---*/
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

	printf("复制的是：", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);					/* 将tmp复制到ptr */

	puts("复制了。");
	printf("ptr = \"%s\"\n", ptr);		/* 显示复制后的ptr */

	return 0;
}
