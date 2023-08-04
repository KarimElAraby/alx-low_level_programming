#include "main.h"
/**
 *  *  *  *_strcat - swaps the values of two integers
 *   *   *   *
 *    *    *    *@dest : 1st pointer
 *     *     *     *@src : 2nd pointer
 *      *      *      *
 *       *      Return: value the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
	c++;

for (c2 = 0; src[c2]; c2++)
	dest[c++] = src[c2];
return (dest);
}
