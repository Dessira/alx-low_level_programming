#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of linked list
 * @head: head
 * @index: node to be deleted
 * Returns: 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		temp = node->next;
		free(node);
		*head = temp;
		return (1);
	}
	while (node != NULL)
	{
		if (i + 1 == index)
		{
			temp = node->next;
			node->next = temp->next;
			free(temp);
			return (1);
		}
		if (node->next != NULL)
			node = node->next;
		i++;
	}
	return (-1);
}
