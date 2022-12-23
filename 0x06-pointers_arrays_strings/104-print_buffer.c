#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time
 * @b: buffer to be printed
 * @size: a size of buffer
 *
 */
void print_buffer(char *b, int size)
{
	int h, index;

	for (h = 0; h < size; h += 10)
	{
		printf("%08x: ", h);

		for (index = 0; index < 10; index++)
		{
			if ((index + h) >= size)
				printf(" ");

			else
				printf("%02x", *(b + index + h));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + h) >= size)
				break;

			else if (*(b + index + h) >= 31 &&
				*(b + index + h) <= 126)
				printf("%c", *(b + index + h));

			else
				printf(".");
		}

		if (h >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
