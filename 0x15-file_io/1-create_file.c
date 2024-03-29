#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the file to create
 * @text_content:  NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr = 0, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (len)
		wr = write(fd, text_content, len);
	if (wr == -1 || fd == -1)
		return (-1);
	close(fd);
	return (wr == len ? 1 : -1);
}
