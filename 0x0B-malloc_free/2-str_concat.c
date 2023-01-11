#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: a char
 * @s2: a char
 *
 * Return: a pointer to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int y, r, h1, h2, h;
	char *t;

	h1 = h2 = 0;

	if (s1 != NULL)
	{
		y = 0;
		while (s1[y++] != '\0')
			h1++;
	}

	if (s2 != NULL)
	{
		y = 0;
		while (s2[y++] != '\0')
			h2++;
	}

	h = h1 + h2;
	t = (char *)malloc(sizeof(char) * (h + 1));
	if (t == NULL)
		return (NULL);

	for (y = 0; y < h1; h++)
		t[y] = s1[y];
	for (r = 0; r < h2; r++, y++)
		t[y] = s2[r];
	t[h] = '\0';

	return (t);
}
