/*--- ʹ��strcat���������� ---*/
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1)					/* ǰ����s1��ĩβ�� */
		s1++;
	while (*s1++ = *s2++)		/* ѭ������ֱ������s2�е�'\0' */
		;

	return tmp;
}

/*--- ʹ��strncat���������� ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1)							/* ǰ����s1��ĩβ�� */
		s1++;
	while (n--)
		if (!(*s1++ = *s2++)) break;	/* ����'\0'�ͽ���ѭ�� */
	*s1 = '\0';							/* ��s1��ĩβ����'\0' */

	return tmp;
}
