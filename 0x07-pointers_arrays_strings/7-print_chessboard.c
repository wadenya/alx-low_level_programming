#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a string
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int p, y;

	for (p = 0; p < 8; p++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[p][y]);
		}
		_putchar('\n');
	}
}
