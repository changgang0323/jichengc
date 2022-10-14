/*
	以十进制、二进制、八进制、十六进制的形式显示0~65535
*/

#include <stdio.h>

/*--- 返回整数x中设置的位数 ---*/
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

/*--- 返回unsigned型的位数 ---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*--- 显示unsigned型整数x的后n位 ---*/
void print_nbits(unsigned x, unsigned n)
{
	int i = int_bits();
	i = (n < i) ? n - 1 : i - 1;
	for ( ; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned i;

	for (i = 0; i <= 65535U; i++) {
		printf("%5u ", i);
		print_nbits(i, 16);
		printf(" %06o %04X\n", i, i);
	}

	return 0;
}

