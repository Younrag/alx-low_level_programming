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
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
