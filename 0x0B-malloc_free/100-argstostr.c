#include "main.h"

/**
 *  *  *_strlen - returns the length of a string
 *   *   *   *
 *    *    *    *@s : pointer
 *     *     *     *
 *      *      *Return: length of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 *  *  *  *  *  *  *argstostr - to create an array
 *   *   *   *   *   *   *
 *    *    *    *    *    *    *@ac : first string
 *     *     *     *     *     *     *@av : second string
 *      *      *       *      *      *      *
 *       *       *        *       *      Return: 0 success . null fail
 */
char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

for (; i < ac; i++, nc++)
	nc += _strlen(av[i]);

if (s == 9)
	return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmpt++)
	s[cmpt] = av[i][j];

s[cmpt] = '\n';
cmpt++;
}
s[cmpt] = '\0';
return (s);
}
