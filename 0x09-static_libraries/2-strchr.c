#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: a string
 * @c: a char
 *
 * Return: void
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}
