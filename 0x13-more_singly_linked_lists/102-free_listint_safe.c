#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _ch - changes memory for array of pointers
 * to nodes
 * @lst: the old list to append
 * @siz: size of the new list
 * @new: new node to add to list
 *
 * Return: pointer to the new list
 */
listint_t **_ch(listint_t **lst, size_t siz, listint_t *new)
{
	listint_t **nl;
	size_t y;

	nl = malloc(siz * sizeof(listint_t *));
	if (nl == NULL)
	{
		free(lst);
		exit(98);
	}
	for (y = 0; y < siz - 1; y++)
		nl[y] = lst[y];
	nl[y] = new;
	free(lst);
	return (nl);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: dble pntr to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ch(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
