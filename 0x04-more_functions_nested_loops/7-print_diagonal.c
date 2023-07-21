#include "main.h"
/**
 *  *  *  *print_line - print Lines
 *   *   *   *
 *    *   @n : numbers of _ times
 *     *    *    *
 *      */
void print_diagonal(int n)
{
int i;
if (n <= 0)
		_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{
	if (i != n)
	_putchar(' ');
else
	_putchar("\\");
}

	_putchar('\n');
}
}
