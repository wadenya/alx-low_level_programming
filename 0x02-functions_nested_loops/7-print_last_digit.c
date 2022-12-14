#include "main.h"



/**
 * print_last_digit - prints the last digit
 *
 * @n: the number
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int n)
{

	int dl = n % 10;

	if (dl < 0)
		dl *= -1;

	_putchar(dl + '0');

	return (dl);
}


