/*
	显示出一个直角在左下方的等腰直角三角形（函数版）
*/

#include <stdio.h>

/*--- 连续显示出n个'*' ---*/
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;

	printf("生成一个直角在左下方的等腰直角三角形。\n");
	printf("短边：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
