#include "main.h"
/**
 *  *more_numbers - print numbers from 0 to 14
 *   *
 *    *
 */
void more_numbers(void)
{
int i, j, k;
for (j = 0; j < 10; j++)
{
	for (i = 0; i <= 14; i++)
	{
		k = i;
		if (i > 9)
		{
			_putchar(1 + 48);
			k = i % 10;
		}
			_putchar(k + 48);
	}
	_putchar('\n');
}
}
