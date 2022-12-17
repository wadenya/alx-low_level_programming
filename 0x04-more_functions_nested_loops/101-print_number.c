#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer parameter
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int p = n;

	if (n < 0)
	{
		_putchar(45);
		y = -y;
	}
	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar(y % 10 + '0');
}
