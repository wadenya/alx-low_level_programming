#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a char
 * @old_size: size in bytes for ptr space
 * @new_size:size of new memory
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *q;
	unsigned int y, h = new_size;
	char *d = ptr;

	if (ptr == NULL)
	{
		q = malloc(new_size);
		return (q);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	q = malloc(new_size);
	if (q == NULL)
		return (NULL);
	for (y = 0; y < h; y++)
		q[y] = d[y];
	free(ptr);
	return (q);
}
