#include "variadic_functions.h"

/**
 *  *  * print_strings - print the given numbers
 *   *   * @separator : separator char
 *    *    * @n : number of all numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int i = n;
char *s;

if (!n)
{
	printf("\n");
}
va_start(ar, n);
while (i--)
	printf("%s%s", (s = va_arg(ar, char *)) ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
va_end(ar);
}
