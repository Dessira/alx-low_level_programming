#include "lists.h"

/**
 * find_listint_loop - Finds loop contained in list
 * @head: head
 * Return: Address of node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i;
	listint_t *j;

	if (head == NULL || head->next == NULL)
		return (NULL);

	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;

			while (i != j)
			{
				i = i->next;
				j = j->next;
			}

			return (i);
		}

		i = i->next;
		j = (j->next)->next;
	}

	return (NULL);
}
