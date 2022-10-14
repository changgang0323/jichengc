/*
	第3章的总结（其2）显示数值对应的颜色
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("请输入一个整数：");
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("红色");  break;
		 case 2: printf("蓝色");  break;
		 case 3: printf("白色");  break;
		}
		printf("\n");
	}

	return 0;
}
