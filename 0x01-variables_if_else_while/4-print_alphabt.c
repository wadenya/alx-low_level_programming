#include <stdio.h>



/**
 * main - print alpha to lower and upper case
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char ch;

	for  (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	putchar (ch);
	}
	putchar('\n');

	return (0);
}
