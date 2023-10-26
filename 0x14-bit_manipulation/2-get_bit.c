#include "main.h"
/**
 *  * get_bit - gets bit in index
 *   * @n: number
 *    * @index: the bit
 *     * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
