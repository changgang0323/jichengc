/*
	��ʽ���ַ���"12345"����ʾ
*/

#include <stdio.h>

int main(void)
{
	char str[] = "12345";

	printf("%s\n",   str);		/* ԭ����� */
	printf("%3s\n",  str);		/* ������ʾ3λ */
	printf("%.3s\n", str);		/* �����ʾ3λ */
	printf("%8s\n",  str);		/* �Ҷ��� */
	printf("%-8s\n", str);		/* ����� */

	return 0;
}
