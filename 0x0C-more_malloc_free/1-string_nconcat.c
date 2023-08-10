#include "main.h"
/**
 *  *  *  *  *  *  *string_nconcat - to allocates memory using
 *   *     *     *     *     *     *@s1 : first string
 *	*@s2 : secnod string
 *	*@n : number of char
 *    *       *         Return: to pointer success . NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, s1siz, s2siz;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (s1siz = 0; s1[s1siz] != '\0'; s1siz++)
	;

for (s2siz = 0; s2[s2siz] != '\0'; s2siz++)
	;

p = malloc(s1siz + n + 1);
if (p == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
p[i] = s1[i];

for (j = 0; j < n; j++)
{
p[i] = s2[j];
i++;
}
p[i] = '\0';
return (p);
}
