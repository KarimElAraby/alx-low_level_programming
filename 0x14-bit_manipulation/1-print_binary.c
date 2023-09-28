#include "main.h"
/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{

unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leading_zeros = 1;

if (n == 0)
{
	printf("0");
}

while (mask != 0)
{
	if ((n & mask) != 0 || !leading_zeros)
	{
		printf("%d", (n & mask) != 0);
		leading_zeros = 0;
	}
	mask >>= 1;
}
}
