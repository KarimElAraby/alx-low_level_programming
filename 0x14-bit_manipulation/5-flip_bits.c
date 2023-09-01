#include "main.h"

/**
 *  * flip_bits - get the bit in index
 *   * @n : int number
 *    * @m : the 2nd number
 *     *
 *      * Return: numver of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorva = n ^ m;
unsigned int count = 0;

while (xorva)
{
if (xorva & 1ul)
	count++;
xorva = xorva >> 1;
}
return (count);
}
