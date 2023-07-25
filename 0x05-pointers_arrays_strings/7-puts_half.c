#include "main.h"
/**
 *  *  *puts_half - returns the length of a string
 *   *   *   *
 *    *    *    *@str : pointer
 *     *     *     *
 *      *      *Return: void
 */
void puts_half(char *str);
{
int i;
for (i = 0; str[i] != '\0'; i++)
	;

if (i % 2 = 0)
{
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
else 
{
for (i = (i - 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
