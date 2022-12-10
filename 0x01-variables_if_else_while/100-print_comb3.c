#include <stdio.h>



/**
 * main - print all combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int i;
	int t;

	for (i = 48; i < 58; i++)
	{
		for (t = i + 1; t < 58; t++)
		{
			putchar(i);
			putchar(t);

			if (i != 57 && t != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}


	putchar(10);
	return (0);
}
