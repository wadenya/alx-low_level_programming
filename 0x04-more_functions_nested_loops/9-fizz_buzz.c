#include <stdio.h>
#include "main.h"

/**
 * main - print numbers from 1 to 100 and Fizz Buzz
 *
 *return: Always 0
 */
int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 15 == 0)
			printf("FizzBuzz");
		else if (p % 3 == 0)
			printf("Fizz");
		else if (p % 5 == 0)
			printf("Buzz");
		else
			printf("%p", p);
		if (p < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
