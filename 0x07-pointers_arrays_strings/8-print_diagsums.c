#include "main.h"

/**
 * print_diagsums - function that prints sum of two diagonals of square
 * @a: a string
 * @size: a char
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int p, y, w, j = 0, s = 0;

	for (p = 0; p < size; p++)
	{
		w = (p * size) + p;
		j += *(a + w);
	}
	for (y = 0; y < size; y++)
	{
		w = (y * size) + (size - 1 - y);
		s += *(a + w);
	}
	printf("%i %i\n", j, s);
}
