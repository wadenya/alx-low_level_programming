#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
	}
	for (y = 0; b[y] != '\0'; y++)
	{
		k <<= 1;
		if (b[y] == '1')
			k += 1;
	}
	return (k);
}
