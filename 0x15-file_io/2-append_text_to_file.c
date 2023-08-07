#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text to an existing
 * @filename: file to append text to
 * @text_content: text to append
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if ((write(fd, text_content, strlen(text_content))) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
