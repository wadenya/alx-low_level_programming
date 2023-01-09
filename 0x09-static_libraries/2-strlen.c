#include "main.h"

/**
 * _strlen - return length of a string
 * @s: char to check
 *
 * Return: void
 */
int _strlen(char *s)
{
	int p = 0;

	for (; *s++;)
		p++;
	return (p);
}
