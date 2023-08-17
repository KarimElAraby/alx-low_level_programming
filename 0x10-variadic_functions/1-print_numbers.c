#include "variadic_functions.h"

/**
 * print_numbers - print the given numbers
 * @separator : separator char
 * @n : number of all numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int i = n;
if (!n)
{
printf("\n");
return;
}
	va_start(ar, n);
	while (i--)
		printf("%d%s", va_arg(ar, unsigned int),
				i ? (separator ? separator : "") : "\n");
	va_end(ar);
}
