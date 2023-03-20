#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: a character
 * @src: a character
 * @n: a length of int
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, s;

	for (p = 0; dest[p] != '\0'; p++)
	{
		continue;
	}
	for (s = 0; src[s] != '\0' && s < n; s++)
	{
		dest[p + s] = src[s];
	}
	dest[p + s] = '\0';
	return (dest);
}
