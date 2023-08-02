#include "main.h"

/**
 *  *  *  *  *  *  *  *  *  *_pow_recursion - to get the factorial of number
 *   *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *    *@x : number
 *    *@y : the power of number
 *     *     *     *     *       *       *       *      Return: the sum
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else if (y == 0)
{
return (1);
}
return (x *  _pow_recursion(x, y - 1));
}
