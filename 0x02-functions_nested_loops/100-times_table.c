#include "main.h"



/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: Value of the times table to be printed
 *
 */
void print_times_table(int n)
{
	int t, m, p;

	if (n >= 0 && n <= 15)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = t * m;

				if (p <= 99)
					_putchar(' ');

				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

