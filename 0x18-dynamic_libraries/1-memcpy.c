#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: a char
 * @src: a char
 * @n:function copies
 *
 * Return: v0id
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}

	return (dest);
}
