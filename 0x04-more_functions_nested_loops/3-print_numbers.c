#include "main.h"
/**
 * print_numbers - prints numbers from 0123456789
 * Return: Always 0
 */
void print_numbers(void)
{
	int p;

	p = 0;
	while (p < 10)
	{
	_putchar(p + '0');
	p++;
	}
	_putchar('\n');
}
