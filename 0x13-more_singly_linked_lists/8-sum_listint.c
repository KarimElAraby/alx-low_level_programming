#include "lists.h"
/**
 * sum_listint - the sum of all the data (n)
 * @head : pointer to first node
 * Return: returns the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *new_node = head;
	int sum = 0;

	if (!head)
		return (0);
	while (new_node != NULL)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
