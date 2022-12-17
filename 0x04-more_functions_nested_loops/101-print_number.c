#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: input integer parameter
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
	_putchar('-');
	p = -n;
	}
	else
	{
	p = n;
	}
	if (p / 10 != 0)
	print_number(p / 10);
	_putchar((p % 10) + '0');
}
