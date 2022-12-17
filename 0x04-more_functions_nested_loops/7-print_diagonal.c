#include "main.h"

/**
 * print_diagonal - print a diagonal line 
 * @n: number of diagonal to be printed
 */

void print_diagonal(int n)
{
	int y, j;

	if (n <= 0)
		_putchar('\n');

	for (y = 0; y < n; y++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
