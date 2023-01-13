#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: an char
 *
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
