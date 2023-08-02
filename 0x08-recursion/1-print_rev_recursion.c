#include "main.h"

/**
 *  *  *  *  *  *  *  *_print_rev_recursion - fills memory with a constnat byte
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *@s : pointer to put a constant
 *     *     *       *       *       *      Return: pointer s
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
