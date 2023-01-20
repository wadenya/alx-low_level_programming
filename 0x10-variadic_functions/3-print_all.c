#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int y;
	int f;
	char *str;
	va_list al;

	va_start(al, format);
	y = 0;
	while (format != NULL && format[y] != '\0')
	{
		switch (format[y])
		{
			case 'c':
				printf("%c", va_arg(al, int));
				f = 0;
				break;
			case 'i':
				printf("%i", va_arg(al, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(al, double));
				f = 0;
				break;
			case 's':
				str = va_arg(al, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[y + 1] != '\0' && f == 0)
			printf(", ");
		y++;
	}
	printf("\n");
	va_end(al);
}
