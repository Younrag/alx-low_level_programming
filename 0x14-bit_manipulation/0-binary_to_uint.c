#include <stdio.h>
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
 * binary_to_uint - convert binary to decimal
 * @b: binary number
 *
 * Return: the converted number, or 0 if
 * there is one or more chars either 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	const char *temp;
	int n = 0, r = 0;

	temp = b;
	if (b)
	{
		while (*temp != '\0')
		{
			if (*temp == '0' || *temp == '1')
			{
				n++;
				temp++;
			}
			else
				return (0);
		}
		n--;
		while (*b)
		{
			if (*b == '1')
				r = r + _power(2, n);
			n--;
			b++;
		}
	}
	return (r);
}

