#include "main.h"
/**
 * print_sign  -  function to check if
 *	numbers is positive or negative
 *
 * @n : checks input of function
 *
 * Return: returns 1 if 'n' is positive
 * Returb: returns -1 if 'n' is negative
 *	otherwise alwys 0 (success)
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
_putchar(48);
return (0);
}
