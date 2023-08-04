#include <stdio.h>
#include <stdlib.h>
/**
 *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *
 *    *    *   *@argc : numbers of arguments
 *     *     *   *@argv : variables of arguments
 *      *      *    *    *    * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int mul;
if (argc == 1)
{
printf("Error\n");
return (1);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
