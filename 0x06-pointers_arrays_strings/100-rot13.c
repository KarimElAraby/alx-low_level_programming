#include "main.h"
/**
 *  *  *  *  *  *rot13 - swaps the values of two integers
 *   *   *   *   *   *
 *    *     *     *     *     *@s : 2nd pointer
 *     *      *      *      *      *
 *      *        *       *      Return: value the pointer to dest
 */
char *rot13(char *s)
{
int i;
char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *ptr = s;

while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == rot13[i])
{
*s = ROT13[i];
break;
}
}
s++;
}
return (ptr);
}
