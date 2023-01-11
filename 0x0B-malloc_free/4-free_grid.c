#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: a char
 * @height: a char
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
