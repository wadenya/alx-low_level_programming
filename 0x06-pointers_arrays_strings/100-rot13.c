#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @r: a string
 *
 * Return: void
 */
char *rot13(char *r)
{
	int y, p;
	char h[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (y = 0; *(r + y); y++)
	{
		for (p = 0; p < 52; p++)
		{
			if (h[p] == *(r + y))
			{
				*(r + y) = s[p];
				break;
			}
		}
	}
	return (r);
}
