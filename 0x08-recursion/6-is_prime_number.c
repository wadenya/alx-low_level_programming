#include "main.h"

/**
 * check - checks to see prime numbers
 * @w: a char
 * @m: a char
 *
 * Return: void
 */
int check(int w, int m)
{
	if (m < 2 || m % w == 0)
		return (0);
	else if (w > m / 2)
		return (1);
	else
		return (check(w + 1, m));
}

/**
 * is_prime_number - returns 1 if the input integer
 * @n: a char
 *
 * Return: void
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
