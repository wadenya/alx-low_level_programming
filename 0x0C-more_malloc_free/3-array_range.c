#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: a char
 * @max: a char
 *
 * Return: void
 */
int *array_range(int min, int max)
{
	int *p;
	int y, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	p = malloc(sizeof(int) * z);

	if (p == NULL)
		return (NULL);
	for (y = 0; min <= max; y++)
		p[y] = min++;

	return (p);
}
