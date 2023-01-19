#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print of the program
 * @a: an add of main
 * @n: a no of print byte
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%.2hhx", a[y]);
		if (y < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of it's self
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int v;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	v = atoi(argv[1]);
	if (v < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, v);
	return (0);
}
