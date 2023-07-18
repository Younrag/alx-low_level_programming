#include "main.h"

/**
 * main - Entry point
 * Description: computes of 3 or 5, beloww 1024
 * Return: 0
 */
int main(void)
{
	int n, sum;

	n = 0;
	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum = sum + n;
		n++;
	}
	printf("%d", sum);
	return (0);
}
