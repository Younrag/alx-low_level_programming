#include "main.h"

/**
 * _power - calculate power of number
 * @a: base
 * @n: power
 *
 * Return: a power n
 */
unsigned long int _power(unsigned long int a, int n)
{
	unsigned long int b = 1;

	while (n > 0)
	{
		b *= a;
		n--;
	}
	return (b);
}
/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer to covert
 */
void print_binary(unsigned long int n)
{
	unsigned long int result = 0, r;
	int i;

	while (n > 0)
	{
		r = 0;
		i = 0;
		while (r < n)
		{
			r = _power(2, i);
			if (r > n)
				i--;
			else if (r < n)
				i++;
		}
		result += _power(10, i);
		n -= _power(2, i);
	}
	printf("%lu", result);
}
