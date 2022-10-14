/*--- 使用strcpy函数的例子 ---*/
char *strcpy(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1++ = *s2++)
		;

	return tmp;
}

/*--- 使用strncpy函数的例子 ---*/
char *strncpy(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (n) {
		if (!(*s1++ = *s2++)) break;	/* 遇到'\0'就结束循环 */
		n--;
	}
	while (n--)
		*s1++ = '\0';					/* 用'\0'填充剩余部分 */

	return tmp;
}
