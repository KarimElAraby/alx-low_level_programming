#include "variadic_functions.h"
/**
 * print_all - print any type
 * @format : format of variable
 */
void print_all(const char * const format, ...)
{
int i = 0;
char c;
int num;
float f;
char *s;
char sep = '\0';
va_list args;
va_start(args, format);
while (format[i] != '\0')
{
	if (format[i] == 'c')
	{
		c = (char) va_arg(args, int);
		printf("%c", c);
	} else if (format[i] == 'i')
	{
		num = va_arg(args, int);
		printf("%d", num);
	} else if (format[i] == 'f')
	{
		f = (float) va_arg(args, double);
		printf("%f", f);
	} else if (format[i] == 's')
	{
		s = va_arg(args, char*);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
	}
	sep = (format[i + 1] != '\0') ? ',' : '\0';
	if (sep != '\0')
	{
		printf(", ");
	} i++;
}
va_end(args);
printf("\n");
}
