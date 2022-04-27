#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: head
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	register short i = 0;

	int dex;

	while (head)
	{
		dex = head - head->next;
		i++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (dex > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
