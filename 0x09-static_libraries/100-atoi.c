#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: character
 *
 * Return: void
 */
int _atoi(char *s)
{
	int p = 0;
	unsigned int y = 0;
	int m = 1;
	int r = 0;

	while (s[p])
	{
		if (s[p] == 45)
		{
			m *= -1;
		}

		while (s[p] >= 48 && s[p] <= 57)
		{
			r = 1;
			y = (y * 10) + (s[p] - '0');
			p++;
		}
		if (r == 1)
		{
			break;
		}
		p++;
	}
	y *= m;
	return (y);
}

