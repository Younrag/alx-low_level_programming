#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
