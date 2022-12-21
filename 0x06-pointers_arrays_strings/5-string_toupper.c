#include "main.h"

/**
 * *string_toupper - change lowercase letters of to uppercase.
 * @p: a string
 *
 * Return: void
 */
char *string_toupper(char *p)
{
	int y;

	y = 0;

	while (*(p + y))
	{
		if (*(p + y) >= 'a' && *(p + y) <= 'z')
			*(p + y) -= 'a' - 'A';
		y++;
	}
	return (p);
}
