#include "3-calc.h"

/**
 * get_op_func - call the operator func
 * @s : the operator's symbol
 * Return: to the right func , NULL if doesn't match
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i = 0;

while (i < 5)
{
	if (s && s[0] == ops[i].op[0] && !s[1])
		return (ops[i].f);
	i++;
}
return (NULL);
}
