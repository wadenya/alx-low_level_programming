#include "main.h"

/**
 * *_strncpy- concatenates two strings
 * @dest: a character
 * @src: a character
 * @n: length of int
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && *(src + y); y++)
	{
		*(dest + y) = *(src + y);
	}
	for (; y < n; y++)
	{
		*(dest + y) = '\0';
	}
	return (dest);
}
