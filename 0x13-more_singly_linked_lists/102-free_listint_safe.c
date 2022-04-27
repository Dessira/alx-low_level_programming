#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to head of list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *c;
	listint_t *next;
	int dex;

	register short i = 0;

	if (!h || !(*h))
		return (i);
	c = *h;
	while (c)
	{
		dex = c - c->next;
		if (dex > 0)
		{
			next = c->next;
			free(c);
			c = next;
			i++;
		} else
		{
			free(c);
			*h = NULL;
			i++;
			break;
		}

	}
	*h = NULL;
	return (i);
}
