#include "main.h"

/**
 * *_strcpy - copy string pointed to by src
 * @src: an int
 * @dest: an int
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
		dest[p] = src[p];
	dest[p] = '\0';
	return (dest);
}
