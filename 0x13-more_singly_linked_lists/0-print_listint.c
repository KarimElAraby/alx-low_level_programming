#include "lists.h"
/**
 *  *  * _strlen - to calculate nuvmers of char
 *   *   * @s : string
 *    *    * Return: number of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * print_listint - print list
 * @h : pointer to next
 *
 * Return: return numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
