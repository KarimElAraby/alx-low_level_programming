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
int x;
if (*needle == 0)
	return (haystack);

while (*haystack)
{
x = 0;
if (haystack[x] == needle[x])
{
do {
	if (needle[x + 1] == '\0')
		return (haystack);
	x++;
} while (haystack[x] == needle[x]);
}
haystack++;
}
return ('\0');
}
