#include "lists.h"

/**
 * listint_len - Returns number of elements in linked list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
