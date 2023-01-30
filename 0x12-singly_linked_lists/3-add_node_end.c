#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to linked list
 * @str: string to add node
 *
 * Return: pointer to node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
}
