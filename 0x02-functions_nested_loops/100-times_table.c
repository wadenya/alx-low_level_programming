#include "main.h"



/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: Value of the times table to be printed
 */
void print_times_table(int n)
{
	int t = 0, m, p;

	if (n < 0 || n > 15)
		return;
	while (t <= n)
	{
		for (p = 0; p <= n; p++)
		{
			m = t * p;
			if (p == 0)
				_putchar('0' + m);
			else if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m < 100)
			{
				_putchar(' ');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
			{
				_putchar('0' + m / 10);
				_putchar('0' + (m - 100) / 10);
				_putchar('0' + m % 10);
			}
			if (p < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		t++;
}
}
