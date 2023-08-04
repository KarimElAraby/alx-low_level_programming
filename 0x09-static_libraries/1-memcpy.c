#include "main.h"
/**
 *  *  *  *  *_memcpy - swaps the values of two integers
 *   *   *   *   *
 *    *    *    *    *@dest : 1st pointer
 *     *     *     *     *@src : 2nd pointer
 *      *     @n : most number of bytes from src
 *       *      *      *      *
 *        *       *      Return: value the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
