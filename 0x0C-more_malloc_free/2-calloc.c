#include "main.h"

/**
 *  *  *  *  *  *_memset - fills memory with a constnat byte
 *   *   *   *   *   *
 *    *    *    *    *    *@s : pointer to put a constant
 *     *     *     *     *     *@b : constant
 *      *      *      *      *      *@n : max byte to use
 *       *       *       *      Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;

return (ptr);
}

/**
 *  *  *  *  *  *  *  *_calloc - to allocates memory for an array
 *   *   *     *     *     *     *     *@nmemb : no. of element
 *    *	*@size : size of byte
 *      *    *       *         Return: to pointer success . NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (size == 0 || nmemb == 0)
	return (NULL);
p = malloc(sizeof(int) * nmemb);

if (p == 0)
	return (NULL);

_memset(p, 0, sizeof(int) * nmemb);

return (p);
}
