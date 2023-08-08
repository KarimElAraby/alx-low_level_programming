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
	int i, j, sum = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	sum += i;
	}
	p = malloc(sum);

	if (p == 0)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = str[j];

	return (p);
}
