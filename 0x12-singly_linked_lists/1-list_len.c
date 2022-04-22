#include "lists.h"

/**
 * list_len - Returns the number of elements
 * in a linked list
 * @h: struct type
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int numb = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
