#include <stdio.h>



/**
 * main - Lists all the natural numbers below 1024
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int y, sum = 0;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3) == 0 || (y % 5) == 0)
			sum += y;
	}

	printf("%d\n", sum);

	return (0);
}
