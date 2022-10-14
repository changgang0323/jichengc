/*
	响铃并显示的宏定义（误例：不可编译、执行）
*/

#include <stdio.h>

#define puts_alert(str)  { putchar('\a'); puts(str); }

int main(void)
{
	int n;

	printf("请输入一个整数：");
	scanf("%d", &n);

	if (n)
		puts_alert("这个数不是0。");
	else
		puts_alert("这个数是0。");

	return 0;
}
