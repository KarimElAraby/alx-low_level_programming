#include "lists.h"
/**
 *  *  * free_listint - calculate number of node
 *   *   * @head : pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
