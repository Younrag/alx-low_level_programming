 #include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int n;
	int m;
	int p;

	n = 0;
	while (n < 10)
	{
		_putchar('0')
		m = 1;
		while (m < 10)
		{
			p = n * m;
			if (p < 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + p);
			}
			else
			{
				r = p % 10;
				q = p / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + q);
				_putchar('0' + r);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
