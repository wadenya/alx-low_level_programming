#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: a string
 * @accept: a char
 *
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int p = 0, r, h;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] != 32)
		{

			for (h = 0; accept[h] != '\0'; h++)
			{
				if (s[r] == accept[h])
					p++;
			}
		}
		else
			return (p);
	}
	return (p);
}
