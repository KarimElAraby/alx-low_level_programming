#include "lists.h"

/**
 *  *  * listint_len - calc. numbers of nodes
 *   *   * @h : pointer to next
 *    *    *
 *     *     * Return: return numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
