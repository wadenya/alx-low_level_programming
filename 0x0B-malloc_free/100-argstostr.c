#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of my program.
 * @ac: a char
 * @av: a char
 *
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	char *v, *l;
	int y, g, c, h = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (y = 0; y < ac; y++)
	{
		l = av[y];
		g = 0;

		while (l[g++])
			h++;
		h++;
	}

	v = (char *)malloc(sizeof(char) * (h + 1));
	if (v == NULL)
		return (NULL);

	for (y = 0, g = 0; y < ac && g < h; y++)
	{
		l = av[y];
		c = 0;

		while (l[c])
		{
			v[g] = l[c];
			c++;
			g++;
		}
		v[g++] = '\n';
	}
	v[g] = '\0';

	return (v);
}
