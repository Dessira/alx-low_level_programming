#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: struct type
 * Return: node 
 */

size_t print_list(const list_t *h)
{
	int numb = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		numb++;
	}
	return (numb);
}
