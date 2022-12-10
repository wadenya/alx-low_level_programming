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

	for (i = 1; i < 10; i++)
	{
		for (t = i + 1; t < 10; t++)
		{
			putchar(i);
			putchar(t);

			if (i != 9 && t != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}


	putchar(10);
	return (0);
}
