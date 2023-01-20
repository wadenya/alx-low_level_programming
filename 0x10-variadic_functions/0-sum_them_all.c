#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: no of parameters
 *
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int y;
	va_list ad;

	va_start(ad, n);

	if (n == 0)
		return (0);
	for (y = 0; y < n; y++)
		s += va_arg(ad, int);
	va_end(ad);

	return (s);
}
