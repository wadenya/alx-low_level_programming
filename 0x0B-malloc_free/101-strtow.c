#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: a string
 *
 * Return: void
 */
char **strtow(char *str)
{
	int y, g, h;
	char **d;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	y = g = h = 0;
	while (str[y])
	{
		if (g == 0 && str[y] != ' ')
			g = 1;
		if (y > 0 && str[y] == ' ' && str[y - 1] != ' ')
		{
			g = 0;
			y++;
		}
		y++;
	}

	h += g == 1 ? 1 : 0;
	if (h == 0)
		return (NULL);

	d = (char **)malloc(sizeof(char *) * (h + 1));
	if (d == NULL)
		return (NULL);

	util(d, str);
	d[h] = NULL;
	return (d);
}

/**
 * util - carrying words into an array
 * @d: a char
 * @str: a str
 */
void util(char **d, char *str)
{
	int y, g, t, l;

	y = g = l = 0;
	while (str[y])
	{
		if (l == 0 && str[y] != ' ')
		{
			t = y;
			l = 1;
		}

		if (y > 0 && str[y] == ' ' && str[y - 1] != ' ')
		{
			create_word(d, str, t, y, g);
			g++;
			l = 0;
		}
		y++;
	}
	if (l == 1)
		create_word(d, str, t, y, g);
}

/**
 * create_word - creates and inserts in a array
 * @d: a string
 * @str: a char
 * @t: a beginer of word
 * @n: a finisher
 * @index: index of an array
 */
void create_word(char **d, char *str, int t, int n, int index)
{
	int y, g;

	y = n - t;
	d[index] = (char *)malloc(sizeof(char) * (y + 1));

	for (g = 0; t < n; t++, g++)
		d[index][g] = str[t];
	d[index][g] = '\0';
}
