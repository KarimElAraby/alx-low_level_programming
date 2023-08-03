#include "main.h"

/**
 *  *  *  *  *  *  *  *  *  *is_prime_number - to get the factorial of number
 *   *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *    *@n : number
 *     *    *@x : another n to check
 *      *     *     *     *       *       *       *      Return: the sum
 */
int prime(int n, int x);
int is_prime_number(int n)
{
return (prime(n, 2));
}
/**
 *  *  *  *  *  *  *  *  *  *  *prime - to get the factorial of number
 *   *   *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *    *    *@n : number
 *     *     *    *@x : another n to check
 *      *      *     *     *     *       *       *       *      Return: the sum
 */
int prime(int n, int x)
{
if (x >= n && n > 1)
	return (1);
else if (n % x == 0 || n <= 1)
	return (0);
else
	return (prime(n, x + 1));
}
