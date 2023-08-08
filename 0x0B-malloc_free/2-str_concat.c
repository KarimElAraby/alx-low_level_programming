#include "main.h"

/**
 *  *_strlen - returns the length of a string
 *   *   *
 *    *    *@s : pointer
 *     *     *
 *      *Return: length of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	;
	return (x);
}

/**
 *  *  *  *  *  *str_concat - to create an array
 *   *   *   *   *   *
 *    *    *    *    *    *@s1 : first string
 *     *     *     *     *     *@s2 : second string
 *      *       *      *      *      *
 *       *        *       *      Return: 0 success . null fail
 */
char *str_concat(char *s1, char *s2)
{
int x1, x2, i;
char *p;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

x1 = _strlen(s1);
x2 = _strlen(s2);
p = malloc((x1 + x2) *sizeof(char) + 1);
if (p == 0)
	return (0);
for (i = 0; i <= x1 + x2; i++)
{
if (i < x1)
	p[i] = s1[i];
else
	p[i] = s2[i - x1];
}
p[i] = '\0';
return (p);
}
