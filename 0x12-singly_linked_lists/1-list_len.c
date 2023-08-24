#include "lists.h"

/**
 * list_len - calculate number of node
 * @h : pointer to the head
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
