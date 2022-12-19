#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 *Return: void
 */
int main(void)
{
	char p[84];
	int index = 0, s = 0, h1, h2;

	srand(time(0));

	while (s < 2772)
	{
		p[index] = 33 + rand() % 94;
		s += p[index++];
	}

	p[index] = '\0';

	if (s != 2772)
	{
		h1 = (s - 2772) / 2;
		h2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			h1++;

		for (index = 0; p[index]; index++)
		{
			if (p[index] >= (33 + h1))
			{
				p[index] -= h1;
				break;
			}
		}
		for (index = 0; p[index]; index++)
		{
			if (p[index] >= (33 + h2))
			{
				p[index] -= h2;
				break;
			}
		}
	}
	printf("%s", p);

	return (0);

}
