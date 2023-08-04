#include "main.h"
/**
 *  *  *  *_strncpy - swaps the values of two integers
 *   *   *   *
 *    *    *    *@dest : 1st pointer
 *     *     *     *@src : 2nd pointer
 *      *      *      *
 *       @n : most number of bytes from src
 *       *      Return: value the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
