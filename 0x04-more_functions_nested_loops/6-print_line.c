#include "main.h"
/**
 *  *  *print_line - print Lines
 *   *   *
 *   @n : numbers of _ times
 *    *    *
 */
void print_line(int n)
{
if (n <= 0)
	_putchar('\n');
else
{
int i;
	for (i = 0; i <= n; i++)
		_putchar(95);
		_putchar('\n');
}
}
