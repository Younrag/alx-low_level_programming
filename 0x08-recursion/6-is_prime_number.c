#include "main.h"
/**
 * test_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int test_prime_number(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (test_prime_number(n, i + 1));
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime_number(n, 2));
}
