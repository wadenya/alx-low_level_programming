#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: a char
 *
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
