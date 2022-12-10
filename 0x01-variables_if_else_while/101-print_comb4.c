#include <stdio.h>



/**
 * main - print all combinations of three different digits, in ascending order.
 *
 * Return: Always 0
 *
 */

int main(void)

{
	int x, y, z;

	for (y = x + 1; y < 9; y++)

	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0')
				putchar((y % 10) + '0')
				putchar((z % 10) + '0')

			if (x == 4 && y == 5 && z == 6)
			continue;

			putchar(',')
			putchar(' ')

			}
		}
	}

	putchar('\n')

	return (0)
}


