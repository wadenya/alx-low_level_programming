#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: dble pntr
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rewined, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	rewined = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = rewined;
		rewined = *head;
		*head = next;
	}
	*head = rewined;
	return (*head);
}
