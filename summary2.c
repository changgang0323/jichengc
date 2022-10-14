/*
	第8章总结（函数式宏、逗号运算符、字符的输入输出等）
*/

#include <stdio.h>

/* 响铃 */
#define alert() (putchar('\a'))

/* 显示字符c并换行 */
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;	/* 显示所有数字之和 */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {
			alert();
			putchar('\n');
		} else {
			putchar_ln(ch);
		}
	}

	printf("所有数字之和为%d。\n", sum);

	return 0;
}
