#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: largest prime
 * Return: 0
 */
int main(void)
{
	long int i, p;
	long int a = 612852475143;

	p = 0;
	for (i = 2; i <= a; i++)
	{
		if ((a % i) == 0)
		{
			a = a / i;
			p = i;
		}
		else
			continue;
	}
	printf("The largest prime is: %ld\n", p);
	return (0);
}
