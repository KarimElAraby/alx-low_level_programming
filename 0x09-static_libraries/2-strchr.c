#include "main.h"

/**
 *  *  *  *  *  *_strchr - fills memory with a constnat byte
 *   *   *   *   *   *
 *    *    *    *    *    *@s : pointer to put a constant
 *     *     *     *     *     *@c : constant
 *       *       *       *      Return: pointer s
 */
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
{
return (s + x);
}
}
return ('\0');
}
