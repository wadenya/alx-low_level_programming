#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list_t
 * @str: value to enter in element
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ad;

	ad = malloc(sizeof(list_t));
	if (ad == NULL)
		return (NULL);
	ad->str = strdup(str);
	ad->len = strlen(str);
	ad->next = *head;
	*head = ad;

	return (ad);
}
