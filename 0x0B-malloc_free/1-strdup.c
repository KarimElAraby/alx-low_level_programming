#include "main.h"
/**
 *  *  *  *  *  *  *_strdup - duplicate the string
 *   *   *   *   *   *   *
 *     *     *     *     *     *     *@str : string
 *      *      *       *      *      *      *
 *       *       *        *       *      Return: 0 success . null fail
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)

	p = malloc(i * sizeof(*str) + 1);

	if (p == 0)
		return (NULL);
	else
	{
	for (j = 0; j < i; j++)
		p[j] = str[j];
	}
	return (p);
}
