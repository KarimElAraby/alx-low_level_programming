#include "main.h"
/**
 *  * print_times_table - prints the n times table
 *   *
 *   @n : input
 *    * Example table
 *     * 0, 0, 0, ..
 *      * 0, 1, 2, 3, ..
 *       *
 */
void print_times_table(int n)
{
	int i, j, prod;
if (n <= 15 || n > 0)
{
for (i = 0; i <= n; i++)
{
	_putchar(48);
	for (j = 1; j <= n; j++)
	{
		_putchar(',');
		_putchar(' ');
		prod = n * n;
	if (prod <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod +48);
	}
	else if (prod <= 99)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
	else if (prod <= 999)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((prod / 100) + 48);
	_putchar(((prod / 10) % 10) + 48);
	_putchar((prod % 10) + 48);
}
}
	_putchar('\n');
}
}
}
