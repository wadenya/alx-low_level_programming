#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a character
 * @src: a character
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
