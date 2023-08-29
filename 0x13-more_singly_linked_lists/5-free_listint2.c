#include "lists.h"

/**
 *  *  *  * free_listint2 - calculate number of node
 *   *   *   * @head : pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (!head)
	{
		return;
	}

	current = *head;
	while (current)
	{
		next = current;
		current = current->next;
		free(next);
	}

	*head = NULL;
}
