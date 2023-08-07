#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * read_textfile - writes content of a text file to stdout
 * @filename: file path name
 * @letters: number of letters to be printed
 * Return: number of lettes written to stdout
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	char c;
	size_t i = 0;
	ssize_t ret_val;

	file = fopen(filename, "r");
	buffer = malloc((sizeof(char) * letters) + 1);
	if (file == NULL || buffer == NULL)
		return (0);
	memset((void *)buffer, 0, letters + 1);

	/* gets character and store in buffer */
	while ((c = fgetc(file)) != EOF)
	{
		if (i == letters)
			break;
		buffer[i] = c;
		i++;
	}
	ret_val = write(1, buffer, i);
	free(buffer);
	fclose(file);
	if (ret_val == -1)
		return (0);
	return (ret_val);
}
