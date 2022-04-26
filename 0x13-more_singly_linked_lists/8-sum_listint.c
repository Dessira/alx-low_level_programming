#include "lists.h"

/**
 * sum_listint - Returns sum of all data in linked list
 * @head: head
 * Return: 0 if empty else sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
