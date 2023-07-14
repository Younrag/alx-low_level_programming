#include <stdio.h>

/**
 * main - Entry point
 * Description: combination of three digits
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int p;

	n = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			if (n < m)
			{
			p = 48;
			while (p < 58)
			{
				if (m < p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55 || m != 56 || p != 57)
					{
						putchar(',');
						putchar(' ');
					}
					p++;
				}
				else
					p++;
			}
			m++;
			}
			else
				m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

