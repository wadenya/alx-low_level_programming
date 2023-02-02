#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: dble pntr to the start of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t y = 0;
	int df;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		df = *h - (*h)->next;
		if (df > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			y++;
		}
		else
		{
			free(*h);
			*h = NULL;
			y++;
			break;
		}
	}
	*h = NULL;
	return (y);
}
