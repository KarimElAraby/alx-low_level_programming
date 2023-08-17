#include "variadic_functions.h"

/**
 * print_numbers - print the given numbers
 * @separator : separator char
 * @n : number of all numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int i;

if (separator == NULL)
{
	va_start(ar, n);
	for (i = 0; i < (n - 1); i++)
		printf("%d", va_arg(ar, unsigned int));
	printf("\n");
	va_end(ar);
}
else
{
	va_start(ar, n);
	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(ar, unsigned int), separator);
	printf("%d\n", va_arg(ar, unsigned int));
	va_end(ar);
}
}
