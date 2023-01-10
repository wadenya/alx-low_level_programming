#include "main.h"
#include <stdlib.h>

/**
 * create_array - of chars, initializes it with specific char
 * @size: a char
 * @c: a char
 *
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int p;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		s[p] = c;

	return (s);
}
