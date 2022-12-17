#include "main.h"

/**
 * print_diagonal - print a diagonal line 
 * @n: input var
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int y, j;

	if (n <= 0)
		_putchar('\n');
	for (y = o; y < n; y++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
