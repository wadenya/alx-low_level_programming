#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: name of list
 *
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
