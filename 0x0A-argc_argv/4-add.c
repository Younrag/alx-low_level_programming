#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
		{
			if (*s < '0' || *s > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
