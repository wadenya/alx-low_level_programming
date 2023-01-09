#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: void
 */
int main(int argc, char **argv)
{
	int p, d, s = 0;
	char *f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (p = 1; argv[p]; p++)
	{
		d = strtol(argv[p], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += d;
		}
	}
	printf("%d\n", s);

	return (0);
}
