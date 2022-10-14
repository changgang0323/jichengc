/*
	用数组实现的字符串的改写
*/

#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("s = \"%s\"\n", s);

	s = "DEF";		/* 出错 */

	printf("s = \"%s\"\n", s);

	return 0;
}
