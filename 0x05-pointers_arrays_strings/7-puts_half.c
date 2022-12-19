#include "main.h"

/**
 * puts_half - print half a string followed by a new line
 * @str: an int
 *
 * Return: void
 */
void puts_half(char *str)
{
	int s = 0, n;

	while (str[s] != '\0')
		s++;
	if (s + 1 % 2 != '0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;

	for (s = n; str[s] != '\0'; s++)
	_putchar(str[s]);
	_putchar('\n');
}
