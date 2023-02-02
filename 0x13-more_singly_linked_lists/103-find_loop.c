#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pntr to the start of list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *srch, *ggl;

	srch = ggl = head;
	while (srch && ggl && ggl->next)
	{
		srch = srch->next;
		ggl = ggl->next->next;
		if (srch == ggl)
		{
			srch = head;
			break;
		}
	}
	if (!srch || !ggl || !ggl->next)
		return (NULL);
	while (srch != ggl)
	{
		srch = srch->next;
		ggl = ggl->next;
	}
	return (ggl);
}
