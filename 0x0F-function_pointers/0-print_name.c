#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print name
 * @name : the name
 * @f : the printing function
 */

void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
