#include "main.h"
/**
 *  *puts2 - returns the length of a string
 *   *   *
 *    *    *@str : pointer
 *     *     *
 *      *Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
{
if (i % 2 == 0)
	_putchar(str[i]);
}
_putchar('\n');
}
