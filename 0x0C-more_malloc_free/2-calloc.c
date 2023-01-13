#include "main.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: a char
 * @size: a char
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (h = 0; h < (nmemb * size); h++)
		p[h] = 0;
	return (p);
}
