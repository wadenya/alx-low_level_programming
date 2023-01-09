#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: constant byte @b
 * @b: memory area pointer
 * @n: byte of memory area pointed to by @s
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}
