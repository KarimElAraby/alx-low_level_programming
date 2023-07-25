#include "main.h"
/**
 *  *print_rev - returns the length of a string
 *   *   *
 *    *    *@s : pointer
 *     *     *
 *      *Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;
while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
