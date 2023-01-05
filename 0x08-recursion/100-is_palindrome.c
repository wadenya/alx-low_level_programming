#include "main.h"

/**
 * _strlen_recursion - print length
 * @p: a string
 *
 * Return: void
 */
int _strlen_recursion(char *p)
{
	if (p[0] != '\0')
		return (1 + _strlen_recursion(p + 1));
	return (0);
}
/**
 * pal_checker -  check if p is palindrome
 * @p: a char
 * @l: left index
 * @r: right index
 *
 * Return: void
 */
int pal_checker(char *p, int l, int r)
{
	if (p[l] == p[r])
		if (l > r / 2)
			return (1);
		else
			return (pal_checker(p, l + 1, r - 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: a char
 *
 * Return: void
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
