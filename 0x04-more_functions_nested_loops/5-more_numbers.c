#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
		for (i = 1; i <= 10; i++)
		{
			for (j = o; j <= 14; j++)
			{
				if (j >= 10)
				_putchar('1');
				_putchar(j % 10 + '0');
			}
				_putchar('\n');
			}
}
