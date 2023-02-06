#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: numb to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int y, c = 0;
	unsigned long int k;

	for (y = 63; y >= 0; y--)
	{
		k = n >> y;
		if (k & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		_putchar('0');
	}
	if (!c)
		_putchar('0');
}
