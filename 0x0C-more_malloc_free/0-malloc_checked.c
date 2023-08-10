#include "main.h"
/**
 *  *  *  *  *  *malloc_checked - to allocates memory using
 *     *     *     *     *     *@b : numbers of bytes
 *       *        *       *      Return: to pointer success . 98 if fails
 */
void *malloc_checked(unsigned int b)
{
int *p = malloc(b);

if (p == 0)
	exit(98);

return (p);
}
