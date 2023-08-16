#include "3-calc.h"

/**
 * main - Entry main
 * Description: calcule with five operators
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2]

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' && argv[2] != '-' && argv[2] != '*' && argv[2] != '/' && argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[1] == '/' || argv[1] == '%') && (argv[2] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
