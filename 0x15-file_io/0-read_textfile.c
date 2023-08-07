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
	int file;
	char *buffer;
	int i;
	ssize_t ret_val;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	/** checks allocattion and file access */
	buffer = malloc((sizeof(char) * letters) + 1);

	if (file == -1 || buffer == NULL)
		return (0);
	memset((void *)buffer, 0, letters + 1);

	/* gets character and store in buffer */
	i = read(file, buffer, letters);
	if (i == -1)
		return (0);
	buffer[i] = '\0';
	ret_val = write(1, buffer, i);
	free(buffer);
	close(file);
	if (ret_val == -1)
		return (0);
	return (ret_val);
}
