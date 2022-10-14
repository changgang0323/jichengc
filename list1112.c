/*
	使用atoi函数的例子
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	printf("转换为整数后为%d。\n", atoi(str));

	return 0;
}
