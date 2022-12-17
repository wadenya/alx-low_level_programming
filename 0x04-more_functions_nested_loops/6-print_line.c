#include "main.h"

/**
 * print_line - printing a straight line
 * @n: number of times printed
 *
 * Return: void
 */

void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar('_');
	}
	_putchar ('\n');
}
