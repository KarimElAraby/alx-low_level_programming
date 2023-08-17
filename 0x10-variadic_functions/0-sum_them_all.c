#include "variadic_functions.h"

/**
 * sum_them_all - print sum of adds all args
 * @n : numbers of args
 * Return: return sum , 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ar;
unsigned int i, sum = 0;

if (n == 0)
	return (0);
va_start(ar, n);
for (i = 0; i < n; i++)
	sum += va_arg(ar, unsigned int);
va_end(ar);
return (sum);
}
