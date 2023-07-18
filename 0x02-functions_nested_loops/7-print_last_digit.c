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
		return (-p);
	else
		return (p);
}
