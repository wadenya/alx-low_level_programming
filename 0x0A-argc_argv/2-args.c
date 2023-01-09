#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int p;

	for (p = 0; p < argc; p++)
		printf("%s\n", argv[p]);

	return (0);
}
