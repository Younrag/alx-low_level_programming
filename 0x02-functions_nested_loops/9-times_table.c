 #include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int n;
	int m;
	int p;

	while (n < 10)
	{
		while (m < 10)
		{
			p = n * m;
			_putchar('0' + p);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			m++;
		}
		_putchar('\n');
		n++;
	}
}