#include "main.h"

/**
 * print_triangle -print a triangle followed by a new line
 * @size: size of a triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int w, s, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 1; w <= size; w++)
		{
			for (p = size - w; p >= 1; p--)
			{
				_putchar(' ');
			}
			for (s = 1; s <= w; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}	

