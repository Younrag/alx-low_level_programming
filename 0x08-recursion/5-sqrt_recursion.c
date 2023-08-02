#include "main.h"
/**
 * sqrt_i - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int sqrt_i(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (sqrt_i(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_i(n, 0));
}
