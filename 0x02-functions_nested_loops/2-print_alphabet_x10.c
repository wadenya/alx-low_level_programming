#include "main.h"



/**
 * print_alphabet_x10 - print 10 times alpha
 *
 */

void print_alphabet_x10(void)

{
	int t;
	char az;

	for (t = 0; t <= 9; t++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}


