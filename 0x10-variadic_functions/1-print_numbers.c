#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list ad;

	va_start(ad, n);

	if (separator == NULL)
		separator = "";

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(ad, int));
		if (y < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ad);
}
