#include "3-calc.h"

/**
 * main - Entry main
 * Description: calcule with five operators
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = atoi(argv[0]);
	num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] != '+' && argv[1] != '-' && argv[1] != '*' && argv[1] != '/' && argv[1] != '%')
	{
		printf("Error");
		exit(99);
	}
	if ((argv[1] == '/' || argv[1] == '%') && (argv[2] == '0'))
	{
		printf("Error");
		exit(100);
	}
	result = get_op_func(argv[1])(num1, num2);
	printf("%d", result);
	return (0);
}
