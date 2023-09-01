#include "main.h"

/** get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: the bit you want to get
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	a = n >> index & 1;
	return (a);
}
