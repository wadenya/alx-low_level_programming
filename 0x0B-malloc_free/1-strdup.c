#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a string
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *s;
	int y, h = 0;

	if (str == NULL)
		return (NULL);

	while (str[h] != '\0')
		h++;

	s = (char *)malloc((sizeof(char) * h) + 1);
	if (s == NULL)
		return (NULL);

	for (y = 0; y < h; y++)
		s[y] = str[y];
	s[h] = '\0';

	return (s);
}
