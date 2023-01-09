#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int t, c;
	unsigned int y;
	char *d;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = strtol(argv[1], &d, 10);
	c = 0;

	if (!*d)
	{
		while (t > 1)
		{
			for (y = 0; y < sizeof(cents[y]); y++)
			{
				if (t >= cents[y])
				{
					c += t / cents[y];
					t = t % cents[y];
				}
			}
		}
		if (t == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

		printf("%d\n", c);
		return (0);

}
