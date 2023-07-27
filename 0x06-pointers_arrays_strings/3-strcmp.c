#include "main.h"
/**
 *  *  *  *  *_strcmp - swaps the values of two integers
 *   *   *   *   *
 *    *    *    *    *@dest : 1st pointer
 *     *     *     *     *@src : 2nd pointer
 *      *      *      *      *
 *       *       *      Return: value the pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}
