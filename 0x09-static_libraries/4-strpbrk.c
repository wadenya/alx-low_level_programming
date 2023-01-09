#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: a string
 * @accept: a char
 *
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return (0);
}
