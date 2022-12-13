#include "main.h"



/**
 * _isalpha - check for alphabets
 *
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, 0 otrherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))

		return (1);
	else
		return (0);
}
