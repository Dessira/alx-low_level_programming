#include "lists.h"

/**
 * print_listint - Prints number of elements
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
