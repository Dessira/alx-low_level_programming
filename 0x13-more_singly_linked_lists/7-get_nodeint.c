#include "lists.h"

/**
 * get_node_at_index - Returns the nth node of a linked list
 * @head: head
 * @index: index of node
 * Return: NULL or node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (index > i)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			i++;
			head = head->next;
		}
	}
	return (head);
}
