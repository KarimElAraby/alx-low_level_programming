#include "3-calc.h"

/**
 *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *
 *    *    *   *@argc : numbers of arguments
 *     *     *   *@argv : variables of arguments
 *      *      *    *    *    * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int (*oper_fun)(int, int), num1, num2;

if (argc != 4)
	printf("Error\n"), exit(98);

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

oper_fun = get_op_func(argv[2]);
if (!oper_fun)
	printf("Error\n"), exit(99);
if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	printf("Error\n"), exit(100);
printf("%d\n", oper_fun(num1, num2));
return (0);
}
