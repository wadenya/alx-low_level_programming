#include "main.h"

/**
 * *cap_string - capitalize all words of a string.
 * @r: a string
 *
 * Return: void
 */
char *cap_string(char *r)
{
	int y = 0, p;
	char h[] = " \t\n,;.!?\"(){}";

	while (*(r + y))
	{
		if (*(r + y) >= 'a' && *(r + y) <= 'z')
		{
			if (y == 0)
				*(r + y) -= 'a' - 'A';
			else
			{
				for (p = 0; p <= 12; p++)
				{
					if (h[p] == *(r + y - 1))
						*(r + y) -= 'a' - 'A';
				}
			}
		}
		y++;
	}
	return (r);
}
