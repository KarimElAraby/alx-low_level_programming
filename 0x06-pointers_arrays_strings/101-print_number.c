#include "main.h"
/**
 *  *  *  *  *  *print_number - swaps the values of two integers
 *   *   *   *   *   *
 *    *     *     *     *     *@n : 2nd pointer
 *     *      *      *      *      *
 *      *        *       *      Return: value the pointer to dest
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
