#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 big endian , 1 small endian
 */

int get_endianness(void)
{
unsigned long int num = 1;

return (*(char *)&num);
}
