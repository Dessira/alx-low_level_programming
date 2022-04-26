#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);

		head = temp;
	}
}
