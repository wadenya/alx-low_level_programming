#include "main.h"
#include <stdio.h>

/**
 * print_line - print z bytes
 * @w: print buffer
 * @x: print bytes
 * @y: print line
 *
 * Return: void
 */

void print_line(char *w, int x, int y)
{
	int p, d;

	for (p = 0; p <= 9; p++)
	{
		if (p <= x)
			printf("%02x", w[y * 10 + p]);
		else
			printf(" ");
		if (p % 2)
			putchar(' ');
	}
	for (d = 0; d <= x; d++)
	{
		if (w[y * 10 + d] > 31 && w[y * 10 + d] < 127)
			putchar(w[y * 10 + d]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer.
 * @b: string
 * @size: a size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int h;

	for (h = 0; h <= (size - 1) / 10 && size; h++)
	{
		printf("%08x: ", h * 10);
		if (h < size / 10)
		{
			print_line(b, 9, h);
		}
		else
		{
			print_line(b, size % 10 - 1, h);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
