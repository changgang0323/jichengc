/*
	���岢��ʾ�ĺ궨�壨���������ɱ��롢ִ�У�
*/

#include <stdio.h>

#define puts_alert(str)  { putchar('\a'); puts(str); }

int main(void)
{
	int n;

	printf("������һ��������");
	scanf("%d", &n);

	if (n)
		puts_alert("���������0��");
	else
		puts_alert("�������0��");

	return 0;
}
