#include "main.h"
/**
 *  *  *  *  *  *  *  *array_range - to print numbers between min and max
 *   *   *     *     *     *     *     *@min : minimum no.
 *    *	*@max : maximum no.
 *      *    *       *         Return: to pointer success . NULL if fails
 */
int *array_range(int min, int max)
{
int i, len;
int *p;

if (min > max)
	return (NULL);
len = max - min + 1;
p = malloc(sizeof(int) * len);

if (!p)
	return (NULL);
for (i = 0; i < len; i++)
	p[i] = min++;
return (p);
}
