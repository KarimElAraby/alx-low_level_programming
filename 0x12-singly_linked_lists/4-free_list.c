#include "lists.h"
/**
 *  * free_list - calculate number of node
 *   * @head : pointer to the head
 */

void free_list(list_t *head)
{
list_t *node, *next_node;

if (!head)
	return;
node = head;
while (node)
{
next_node = node->next;
free(node->str);
free(node);
node = next_node;
}
}
