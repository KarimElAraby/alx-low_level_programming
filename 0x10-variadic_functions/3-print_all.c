#include "variadic_functions.h"
/**
 * format_char - to print char
 * @separator : separator
 * @ar : argument pointer
 */
void format_char(char *separator, va_list ar)
{
printf("%s%c", separator, va_arg(ar, int));
}
/**
 *  * format_int - to print int
 *   * @separator : separator
 *    * @ar : argument pointer
 */
void format_int(char *separator, va_list ar)
{
printf("%s%d", separator, va_arg(ar, int));
}
/**
 *  * format_float - to print float
 *   * @separator : separator
 *    * @ar : argument pointer
 */
void format_float(char *separator, va_list ar)
{
	printf("%s%f", separator, va_arg(ar, double));
}
/**
 *  * format_string - to print char
 *   * @separator : separator
 *    * @ar : argument pointer
 */
void format_string(char *separator, va_list ar)
{
	char *s = va_arg(ar, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
	printf("%s%s", separator, s);
}
/**
 * print_all - print any argument
 * @format : the format string
 */
void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list ar;
to_t tok[] = {
	{"c", format_char},
	{"i", format_int},
	{"f", format_float},
	{"s", format_string},
	{NULL, NULL}
};

va_start(ar, format);
while (format && format[i])
{
j = 0;
while (tok[j].to)
{
if (format[i] == tok[j].to[0])
{
tok[j].f(separator, ar);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(ar);
}
