#include "main.h"

/**
 *  *  *  *  *  *  *  *factorial - to get the factorial of number
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *@n : number
 *     *     *       *       *       *      Return: the sum
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
