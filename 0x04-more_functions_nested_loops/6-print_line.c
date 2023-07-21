#include "main.h"
/**
 *  *  *print_line - print Lines
 *   *   *
 *   @n : numbers of _ times
 *    *    *
 */
void print_line(int n)
{
int i;
if (n > 0)
	for (i = 0; i <= n; i++)
		_putchar(95);
_putchar('\n');
}
