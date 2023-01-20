#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int y;
	va_list ad;

	va_start(ad, n);
	if (separator == NULL)
		separator = "";

	for (y = 0; y < n; y++)
	{
		str = va_arg(ad, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (y < n - 1)
			printf("%s", separator);
	}
	printf("\n");
		va_end(ad);
}
