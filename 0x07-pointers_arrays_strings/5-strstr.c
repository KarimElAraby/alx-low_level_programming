#include "main.h"
#include <stdio.h>

/**
 *  *  *  *  *  *  *  *_strstr - fills memory with a constnat byte
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *@haystack : pointer to put a constant
 *     *     *     *     *     *     *     *@needle : constant
 *      *      *       *       *       *      Return: pointer s
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return ('\0');
}
