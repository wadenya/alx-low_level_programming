#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: an int
 *
 * Return: void
 */
void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');

}
