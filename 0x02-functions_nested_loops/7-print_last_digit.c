#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get from the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int p;

	p = n % 10;
	if (p < 0)
	{
		p = -p;
		_putchar('0' + p)
		return (p);
	}
	else
	{
		_putchar('0' + p)
		return (p);
	}
}
