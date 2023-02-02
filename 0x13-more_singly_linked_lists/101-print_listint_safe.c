#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _ch - changes memory for array of pntr to nodes
 * @lst: old lidt to append
 * @siz: size of new list
 * @new: new node to add to list
 *
 * Return: pntr to new list
 */
const listint_t **_ch(const listint_t **lst, size_t siz, const listint_t *new)
{
	const listint_t **nl;
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
 * print_listint_safe - listint_t linked list
 * @head: pointer to the start of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t y, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (y = 0; y < num; y++)
		{
			if (head == list[y])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _ch(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
