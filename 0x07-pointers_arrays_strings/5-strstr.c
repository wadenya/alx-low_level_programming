#include "stdio.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: a char
 * @needle: a char
 *
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int p = 0, y = 0;

	while (haystack[p])
	{
		while (needle[y] && (haystack[p] == needle[0]))
		{
			if (haystack[p + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			p++;
			y = 0;
		}
		else
			return (haystack + p);
	}
	return (0);
}
