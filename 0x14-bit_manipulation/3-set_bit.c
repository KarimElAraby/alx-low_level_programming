#include "main.h"
/**
 * set_bit - set the bit in index
 * @n: number
 * @index: the bit
 * Return: 1 when success, -1 in fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
	return (-1);
return (!!(*n != 1L << index));
}
