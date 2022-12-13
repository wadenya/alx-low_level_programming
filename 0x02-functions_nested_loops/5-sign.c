#include "main.h"



/**
 * print_sign - prints sign of a number
 *
 * @n: the number of sign to be printed
 *
 * Return: 1 if number is greater than zero
 *
 * 0 for number zero
 *
 * -1 if number is less than 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}

}
