#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* openAndCheckErr - opens files for operations and check neccesary errors
* @src: pointer to source descriptor
* @dest: pointer to destination file descriptor
* @src_n: soure file name
* @dest_n: destination file name
* Return: error status
*/

ssize_t openAndCheckErr(ssize_t *src, ssize_t *dest, char *src_n, char *dest_n)
{
	*src = open(src_n, O_RDONLY);
	if (*src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_n);
		return (98);
	}

	*dest = open(dest_n, O_WRONLY);
	if (*dest == -1)
	{
		*dest = open(dest_n, O_RDWR | O_APPEND | O_CREAT, 00664);
		if (*dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_n);
			return (99);
		}
	}
	return (0);
}

/**
 * main - cp content from a file to another file
 * @ac: number of arguments entered at CLI
 * @argv: array of strings
 * Return: 0 on success
 */

int main(int ac, char **argv)
{
	ssize_t file_from, file_to, bytes_read, w, o;
	char *buffer;

	if (ac != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}
	o = openAndCheckErr(&file_from, &file_to, argv[1], argv[2]);
	if (o != 0)
		exit(o);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		if ((write(file_to, buffer, bytes_read)) == -1 || bytes_read == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}
