#include "list.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
 unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
