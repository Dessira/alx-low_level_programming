#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);

		head = head->next;
	}
}
