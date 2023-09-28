#include "main.h"
/**
 * clear_bit - clear tje bit in index
 * @n: number
 * @index: the bit
 * Return: 1 when success , -1 in fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
	return (-1);

if (*n & 1L << index)
	*n ^= 1L << index;
return (1);
}
