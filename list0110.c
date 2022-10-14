/*
	对两个变量进行初始化并显示
*/

#include <stdio.h>

int main(void)
{
	int vx = 57;					/* vx是int型的变量（初始化为57）*/
	int vy = vx + 10;				/* vy是int型的变量（初始化为vx+10）*/

	printf("vx的值是%d。\n", vx);	/* 显示vx的值 */
	printf("vy的值是%d。\n", vy);	/* 显示vy的值 */

	return 0;
}
