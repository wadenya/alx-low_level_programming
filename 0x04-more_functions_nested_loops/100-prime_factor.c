#include <stdio.h>
#include "main.h"

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: void
 */
int main(void)
{
	unsigned long int y, n = 612852475143;

	for (y = 3; y < 782849; y = y + 2)
	{
		while ((n % y == 0) && (n != y))
			n = n / y;
	}
	printf("%lu\n", n);
	return (0);
}
