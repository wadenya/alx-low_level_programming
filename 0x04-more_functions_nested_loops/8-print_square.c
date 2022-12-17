#include "main.h"


/**
 * print_square - print square followed by a new line
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int y, j;

	if (size > 0)
	{
	for (y = 0; y < size; y++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}

	}

	else
	{
	_putchar ('\n');
	}
}
