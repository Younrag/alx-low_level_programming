#include "main.h"

/**
 * print_diagonal - draws a diagonal lines
 * @n: number of times the character / should be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (j = 1; j <= n; j++)
		{
			for (i = 1; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
