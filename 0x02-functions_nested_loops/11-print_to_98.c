#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the start number
 */
void print_to_98(int n)
{
	int q, r;

	while (n < 99)
	{
		if (n < 10)
		{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		}
		else if (n != 98)
		{
			q = n / 10;
			r = n % 10;
			_putchar('0' + q);
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('9');
			_putchar('8');
		}
		n++;
	}
	_putchar('\n');
}
