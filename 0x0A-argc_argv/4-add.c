#include <stdio.h>
#include <stdlib.h>
/**
 *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *
 *    *    *    *    *   *@argc : numbers of arguments
 *     *     *     *     *   *@argv : variables of arguments
 *      *      *      *      *    *    *    * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
	return (printf("Error\n"), 1);
sum += atoi(argv[argc]);
}
}
printf("%d\n", sum);
return (0);
}
