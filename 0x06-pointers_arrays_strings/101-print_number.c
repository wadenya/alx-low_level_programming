#include "main.h"

/**
 * print_number - prints an integer.
 * @n: an integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int w;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	w = n;

	if (w / 10)
		print_number(w / 10);

	_putchar (w % 10 + '0');

}
