#include "main.h"
/**
 *  *  *  *_strncat - swaps the values of two integers
 *   *   *   *
 *    *    *    *@dest : 1st pointer
 *     *     *     *@src : 2nd pointer
 *     @n : most number of bytes from src
 *      *      *      *
 *       *      Return: value the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;
while (dest[c])
	c++;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[c + i] = src[i];
dest[c + i] = '\0';

return (dset);
}
