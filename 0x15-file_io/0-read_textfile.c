#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: file to be read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !filename || !letters)
		return (0);
	buffer = malloc(letters * sizeof(char));
	rd = read(fd, buffer, letters);
	wr = write(1, buffer, rd);
	close(fd);
	return (wr);
}
