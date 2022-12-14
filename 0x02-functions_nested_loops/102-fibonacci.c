#include <stdio.h>



/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int p;
	unsigned long f1 = 0, f2 = 1, sum;

	for (p = 0; p < 50; p++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (p == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
