#include "main.h"

/**
 *  *  *  *  *  *  *_strlen_recursion - fills memory with a constnat byte
 *   *   *   *   *   *   *
 *    *    *    *    *    *    *@s : pointer to put a constant
 *     *       *       *       *      Return: pointer s
 */
int _strlen_recursion(char *s)
{
int sum = 0;
if (*s > '\0')
{
sum += _strlen_recursion(s + 1) + 1;
}
return (sum);
}
