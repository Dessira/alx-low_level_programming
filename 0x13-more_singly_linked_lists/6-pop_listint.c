#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head
 * Return: head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *newnode;

	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	newnode = *head;
	*head = (*head)->next;


	free(newnode);
	return (data);
}
