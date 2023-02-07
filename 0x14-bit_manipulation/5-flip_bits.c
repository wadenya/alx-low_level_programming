#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns number of bits you need to flip to get from one number
 * @n: 1st numb
 * @m: 2nd numb
 * Return: numb of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, r;
	unsigned int p, y;

	p = 0;
	r = 1;
	d = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (r == (d & r))
			p++;
		r <<= 1;
	}
	return (p);
}
