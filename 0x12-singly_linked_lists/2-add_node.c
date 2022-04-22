#include "lists.h"

/**
 * add_node - Adds new node at the beginning of a list
 * @head: struct type
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i, numb = 0;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		numb++;

	node->len = i;
	node->str = strdup(str);
	node->next = *head;

		*head = node;
	return (node);
}
