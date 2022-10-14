/*--- 使用strcat函数的例子 ---*/
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1)					/* 前进到s1的末尾处 */
		s1++;
	while (*s1++ = *s2++)		/* 循环复制直到遇到s2中的'\0' */
		;

	return tmp;
}

/*--- 使用strncat函数的例子 ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1)							/* 前进到s1的末尾处 */
		s1++;
	while (n--)
		if (!(*s1++ = *s2++)) break;	/* 遇到'\0'就结束循环 */
	*s1 = '\0';							/* 在s1的末尾插入'\0' */

	return tmp;
}
