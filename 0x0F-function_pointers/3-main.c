#include "3-calc.h"

/**
 * main - Entry main
 * Description: calcule with five operators
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
/**	if ((*argv[2] != '+' &&
			*argv[2] != '-' &&
			*argv[2] != '*' &&
			*argv[2] != '/' &&
			*argv[2] != '%') ||
			operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}*/
	if ((*argv[2] == '/' || *argv[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
