#include "lists.h"

/**
 * pop_listint -  deletes the head node
 * @head : addres of pointer to first node
 *
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int x;

	if (!head || !*head)
		return (0);

	new_node = *head;
	x = new_node->n;
	*head = new_node->next;
	free(new_node);

	return (x);
}
