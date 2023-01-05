#include "main.h"

/**
 * str_checker - check if two strings are identical
 * @p1: string_1 base address.
 * @p2: string_2 base address.
 * @l: left index.
 * @r: index
 *
 * Return: void
 */
int str_checker(char *p1, char *p2, int l, int r)
{
	if (p1[l] == '\0' && p2[r] == '\0')
		return (1);
	if (p1[l] == p2[r])
		return (str_checker(p1, p2, l + 1, r + 1));
	if (p1[l] == '\0' && p2[r] == '*')
		return (str_checker(p1, p2, l, r + 1));
	if (p2[r] == '*')
		return (str_checker(p1, p2, l + 1, r) || str_checker(p1, p2, l, r + 1));
	return (0);
}
/**
 * wildcmp - compares two strings and returns 1
 * @s1: a char
 * @s2:  a char
 *
 * Return: void
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
