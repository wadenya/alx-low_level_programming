#include "main.h"

/**
 * rev_string - reverse a string
 * @s: an int
 *
 * Return: void
 */
void rev_string(char *s)
{
	int w = 0, x, y;
	char z;

	while (s[w] != '\0')
	{
		w++;
	}
	y = w - 1;
	for (x = 0; y >= 0 && x < y; y--, x++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
	}
}
