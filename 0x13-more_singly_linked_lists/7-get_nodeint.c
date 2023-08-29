#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head : pointer to first node
 * @index : index of node
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
