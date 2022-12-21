#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @r: a string
 *
 * Return: void
 */
char *leet(char *r)
{
	int y, p;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; *(r + y); y++)
	{
		for (p = 0; p <= 9; p++)
		{
			if (a[p] == r[y])
				r[y] = b[p];
		}
	}
	return (r);
}
