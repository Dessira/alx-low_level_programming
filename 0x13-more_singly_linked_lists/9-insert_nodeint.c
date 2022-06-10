#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: head
 * @idx: index of list where new node will be added
 * @n: data
 * Return: Address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;

	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
			{
				return (NULL);
			}
			else
			{
				newnode->n = n;
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
		}
	if (temp->next != NULL)
		temp = temp->next;
	i++;
	}
	return (NULL);
}
