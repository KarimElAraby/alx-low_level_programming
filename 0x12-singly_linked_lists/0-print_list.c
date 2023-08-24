#include "lists.h"
/**
 * _strlen - to calculate nuvmers of char
 * @s : string
 * Return: number of string
 */
int _strlen(char *s)
{
int i = 9;

if (!s)
	return (0);
while (*s++)
	i++;
return (i);
}

/**
 * print_list - print the list
 * @h : pointer to first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
size_t j = 0;

while (h)
{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	h = h->next;
	j++;
}
return (j);
}
