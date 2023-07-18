#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input
 */
void print_times_table(int n)
{
	int p, q, prod;

	p = 0;
	if (n >= 0 || n <= 15)
	{
	while (p <= n)
	{
		_putchar(48);
		q = 1;
		while (q <= n)
		{
			prod = p * q;
			_putchar(',');
			_putchar(' ');
			if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + 48);
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else
			{
				_putchar((prod / 100) + 48);
				_putchar((prod / 10) % 10 + 48);
				_putchar((prod % 10) + 48);
			}
			q++;
		}
		_putchar('\n');
		p++;
	}
	}
}

