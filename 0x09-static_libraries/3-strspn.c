#include "main.h"

/**
 *  *  *  *  *  *  *_strspn - fills memory with a constnat byte
 *   *   *   *   *   *   *
 *    *    *    *    *    *    *@s : pointer to put a constant
 *     *     *     *     *     *     *@accept : constant
 *      *       *       *       *      Return: pointer s
 */
unsigned int _strspn(char *s, char *accept)
{
int x, y;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; accept[y] != s[x]; y++)
{
if (accept[y] == '\0')
	return (x);
}
}
return (x);
}
