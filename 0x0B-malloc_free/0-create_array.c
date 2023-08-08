#include "main.h"
/**
 *  *  *  *  *create_array - to create an array
 *   *   *   *   *
 *    *    *    *    *@size : size
 *     *     *     *     *@c : char
 *       *      *      *      *
 *        *       *      Return: 0 success . null fail
 */
char *create_array(unsigned int size, char c)
{
char *p = malloc(size);

if (size == 0 || p == 0)
	return (0);

while (size--)
	p[size] = c;

return (p);
}
