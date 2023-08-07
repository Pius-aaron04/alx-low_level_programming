#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and adds content to it
 * @filename: desired filename
 * @text_content: desired content to write
 * Return: 1 on success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
