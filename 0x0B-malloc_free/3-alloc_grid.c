#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: a char
 * @height: a char
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **a, y, g;
	int h = width * height;

	if (h <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		a[y] = (int *)malloc(sizeof(int) * width);
		if (a[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(a[y]);
			free(a);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (g = 0; g < width; g++)
		a[y][g] = 0;

	return (a);
}
