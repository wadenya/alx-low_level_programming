#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int p, d;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	d = atoi(argv[2]);
	printf("%d\n", p * d);

	return (0);
}
