#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to 1st node
 * @index: ndex of the node, starting at 0
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	if (head == NULL)
		return (NULL);
	for (p = 0; p < index; p++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
