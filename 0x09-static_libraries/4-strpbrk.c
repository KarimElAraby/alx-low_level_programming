#include "main.h"

/**
 *  *  *  *  *  *  *  *_strpbrk - fills memory with a constnat byte
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *@s : pointer to put a constant
 *     *     *     *     *     *     *     *@accept : constant
 *      *      *       *       *       *      Return: pointer s
 */
char *_strpbrk(char *s, char *accept)
{
int x, y;
char *p;
x = 0;
while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (accept[y] == s[x])
{
p = &s[x];
return (p);
}
y++;
}
x++;
}
return (0);
}
