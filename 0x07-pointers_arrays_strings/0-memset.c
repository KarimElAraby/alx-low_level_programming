#include "main.h"

/**
 *  *  *  *  *_memset - fills memory with a constnat byte
 *   *   *   *   *
 *    *    *    *    *@s : pointer to put a constant
 *     *     *     *     *@b : constant
 *      *      *      *      *@n : max byte to use
 *       *       *      Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int itr;
for (itr = 0; n > 0; itr++, n--)
{
s[itr] = b;
}
return (s);
}
