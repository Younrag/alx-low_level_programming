#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int n;
	int m;
	int p;
	int q;

	n = 0;
	while (n < 3)
	{
		m = 0;
		while (m < 10)
		{
			p = 0;
			if (n == 2 && m > 3)
				m++;
			else
			{
				while (p < 6)
				{
					q = 0;
					while (q < 10)
					{
						_putchar('0' + n);
						_putchar('0' + m);
						_putchar(':');
						_putchar('0' + p);
						_putchar('0' + q);
						_putchar('\n');
						q++;
					}
					p++;
				}
				m++;
			}
		}
		n++;
	}
	_putchar('\n');
}

