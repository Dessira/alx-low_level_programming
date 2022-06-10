#include "lists.h"

/**
 * add_node_end - Adds new node at the end of a list
 * @head: struct type
 * @str: string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, numb = 0;
	list_t *dup;
	list_t *node;

	dup = malloc(sizeof(list_t));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		numb++;

	dup->len = i;
	dup->str = strdup(str);
	dup->next = NULL;

	if (*head == NULL)
	{
		*head = dup;
		return (dup);
	}

	node = *head;

	while (node->next != NULL)
		node = node->next;

	node->next = dup;

	return (dup);
}
