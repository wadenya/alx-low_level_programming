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

	for (i = 48; i <= 58; i++)/* prints i digit*/
	{
		for (t = i + 1; t <= 58; t++)/* print t digits*/
		{
			if (!((i == t) || (t > i)))/*eliminates repitition*/

			{
				putchar(i);
				putchar(t);

				if (!(i && t))/*addes comma and space*/

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar(10);
	return (0);
}
