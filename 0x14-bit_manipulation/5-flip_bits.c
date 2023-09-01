#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * 	to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, count = 0;
	unsigned long int check;

	check = n ^ m;
	while (i < 32)
	{
		if ((check >> i) & 1)
			count++;
		i++;
	}
	return (count);
}
