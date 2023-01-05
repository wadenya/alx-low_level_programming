#include "main.h"

/**
 * check - checks for square root
 * @w: a char
 * @m: a char
 *
 * Return: void
 */
int check(int w, int m)
{
	if (w * w == m)
		return (w);
	if (w * w > b)
		return (-1);
	return (check(w + 1, m));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a char
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
