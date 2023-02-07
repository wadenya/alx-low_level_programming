#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int y;
	char *s;

	y = 1;
	s = (char *)&y;

	return (*s);
}
