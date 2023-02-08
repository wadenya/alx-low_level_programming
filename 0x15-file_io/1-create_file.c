#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int p, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(p, text_content, ln);

	if (p == -1 || w == -1)
		return (-1);
	close(p);
	return (1);
}
