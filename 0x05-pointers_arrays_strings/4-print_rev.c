#include "main.h"

/**
 * print_rev - print a string in reverse followed by a line
 * @s: an int
 *
 * Return: void
 */
void print_rev(char *s)
{
	int y, p;

	p = 0;
	while (s[p] != '\0')
		p++;

	for (y = p - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar ('\n');
}
