#include "main.h"

/**
 *  *  *  *  *  *  *  *  * _sqrt_recursion - to get the factorial of number
 *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *@n : number
 *    *@rot : square root
 *     *     *     *       *       *       *      Return: the sum
 */
int sqr(int n, int rot);
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}
/**
 *  *  *  *  *  *  *  *  *sqr - to get the factorial of number
 *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *@n : number
 *    *@rot : square root
 *     *     *     *       *       *       *      Return: the sum
 */
int sqr(int n, int rot)
{
if (rot * rot == n)
{
return (rot);
}
else if (rot * rot < n)
{
	return (sqr(n, rot + 1));
}
else
{
return (-1);
}
}
