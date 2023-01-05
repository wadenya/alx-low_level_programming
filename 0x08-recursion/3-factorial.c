#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: a char
 *
 * Return: void
 */
int factorial(int n)
{
	int y;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		y = n * factorial(n - 1);
	}
	return (y);
}
