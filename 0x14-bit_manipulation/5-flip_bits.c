#include "main.h"
/**
 * flip_bits - flib number to another number
 * @n: first number
 * @m: sexond number
 * Return: number of bits to convert
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result)
{
if (xor_result & 1ul)
	count++;
xor_result = xor_result >> 1;
}
return (count);
}
