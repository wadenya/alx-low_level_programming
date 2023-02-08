#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX output
 * @filename: pntr to file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, d, w;
	char *bf;

	if (filename == NULL)
		return (0);

	bf = malloc(sizeof(char) * letters);

	if (bf == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	d = read(p, bf, letters);
	w = write(STDOUT_FILENO, bf, d);

	if (p == -1 || d == -1 || w == -1 || w != d)
	{
		free(bf);
		return (0);
	}
	free(bf);
	close(p);

	return (w);
}
