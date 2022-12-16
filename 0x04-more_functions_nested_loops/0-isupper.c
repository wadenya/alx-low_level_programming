#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: check for character
 *
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
