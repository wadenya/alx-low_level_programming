#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a dble pntr
 * @idx: index of the list where the new node should be added
 * @n: new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (y = 0; y < idx - 1 && temp != NULL; y++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
