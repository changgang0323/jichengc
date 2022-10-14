/*
	遍历字符串并显示
*/

#include <stdio.h>

#define STR_LENGTH	128		/* 字符串的最大长度（包括null字符）*/

/*--- 显示字符串s及其构成字符 ---*/
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

	printf("字符串s：");
	scanf("%s", s);

	printf("请输入5个字符串。\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]：", i);
		scanf("%s", ss[i]);
	}

	printf("字符串s：");
	put_string_rep(s);

	printf("字符串数组ss\n");
	for (i = 0; i < 5; i++) {
		printf("ss[%d]：", i);
		put_string_rep(ss[i]);
	}

	return 0;
}
