#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a char
 * @n: an int
 *
 * Return(void)
 */
void reverse_array(int *a, int n)
{
	int y, p;

	for (y = 0; (y < (n - 1) / 2); y++)
		{
		p = a[y];
		a[y] = a[n - 1 - y];
		a[n - 1 - y] = p;
		}
}
