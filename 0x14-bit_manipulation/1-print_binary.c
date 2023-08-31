#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer to covert
 */
void print_binary(unsigned long int n)
{
	unsigned long int result = 0, r;
	int i;

	while (n != 0)
	{
		r = 0;
		i = 0;
		while (r <= n)
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
