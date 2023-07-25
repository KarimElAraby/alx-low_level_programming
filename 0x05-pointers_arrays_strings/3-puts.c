#include "main.h"
/**
 *  *_puts - returns the length of a string
 *   *   *
 *    *    *@str : pointer
 *     *     *
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str + 0);
	str++;
}
_putchar('\n');
}
