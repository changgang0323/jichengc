/*
	ʹ��atoi����������
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[128];

	printf("�������ַ�����");
	scanf("%s", str);

	printf("ת��Ϊ������Ϊ%d��\n", atoi(str));

	return 0;
}
