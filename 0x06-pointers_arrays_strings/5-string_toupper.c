#include "main.h"
/**
 *  *  *  *  *string_toupper - swaps the values of two integers
 *   *   *   *   *
 *     *     *     *     *@str : 2nd pointer
 *      *      *      *      *
 *        *       *      Return: value the pointer to dest
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str);
}
