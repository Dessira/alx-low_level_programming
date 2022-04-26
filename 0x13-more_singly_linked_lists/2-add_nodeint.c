#include "lists.h"

/**
 * add_nodeint - Adds node at the beginning of a list
 * @head: head
 * @n: integer value
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode

		if (head == NULL)
			return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
