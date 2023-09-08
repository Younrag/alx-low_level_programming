#include "main.h"

/**
 * main - copie content
 * @argc: number of argument
 * @argv: array of pointers to arguments
 * Return: 0 on succes
 *
 * Description: program that copies the content of a file to another file.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, rd, wr, c1, c2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = read(fd1, buffer, 1024);
	if (fd1 == -1 || rd == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	wr = write(fd2, buffer, rd);
	if (fd2 == -1 || wr == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd1), exit(100);
	if (c2 == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}
