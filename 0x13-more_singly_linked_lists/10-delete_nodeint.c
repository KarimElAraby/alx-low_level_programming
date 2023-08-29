#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head : address of pointer to first node
 * @index : index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *perv_node;
unsigned int count = 0;

if (!head || !*head)
	return (-1);
if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}
node = *head;
while (node)
{
if (count == index)
{
perv_node->next = node->next;
free(node);
return (1);
}
count++;
perv_node = node;
node = node->next;
}
return (-1);
}
