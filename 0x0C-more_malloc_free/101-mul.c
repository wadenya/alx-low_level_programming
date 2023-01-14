#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks a non-digit char in a string
 * @c:a char
 *
 * Return: void
 */
int is_digit(char *c)
{
		int y = 0;

		while (c[y])
	{
		if (c[y] < '0' || c[y] > '9')
			return (0);
		y++;
	}
	return (1);
}

/**
 * _strlen - length of a string
 * @c: a char
 *
 * Return: void
 */
int _strlen(char *c)
{
	int y = 0;

	while (c[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * erros - erros for main
 */
void erros(void)
{
	printf("error\n");
		exit(98);
}

/**
 * main - multiplies two +numb
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *c1, *c2;
	int l1, l2, l, y, k, g1, g2, *r, d = 0;

	c1 = argv[1], c2 = argv[2];
	if (argc != 3 || !is_digit(c1) || !is_digit(c2))
		errors();
	l1 = _strlen(c1);
	l2 = _strlen(c2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (y = 0; y <= l1 + l2; y++)
		r[y] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		g1 = c1[l1] - '0';
		k = 0;
		for (l2 = _strlen(c2) - 1; l2 >= 0; l2--)
		{
			g2 = c2[l2] - '0';
			k += r[l1 + l2 + 1] + (g1 * g2);
			r[l1 + l2 + 1] = k % 10;
			k /= 10;
		}
		if (k > 0)
			r[l1 + l2 + 1] += k;
	}
	for (y = 0; y < l - 1; y++)
	{
		if (r[y])
			d = 1;
		if (d)
			_putchar(r[y] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
