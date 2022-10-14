/*
	返回结构体的函数
*/

#include <stdio.h>

/*=== xyz结构体 ===*/
struct xyz {
	int    x;
	long   y;
	double z;
};

/*--- 返回具有{x,y,z}的值的结构体xyz ---*/
struct xyz xyz_of(int x, long y, double z)
{
	struct xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}

int main(void)
{
	struct xyz s = {0, 0, 0};

	s = xyz_of(12, 7654321, 35.689);

	printf("xyz.x = %d\n",  s.x);
	printf("xyz.y = %ld\n", s.y);
	printf("xyz.z = %f\n",  s.z);

	return 0;
}
