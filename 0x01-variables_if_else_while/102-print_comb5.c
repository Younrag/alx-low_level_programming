#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int p;
	int q;

	n = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			p = n;
			while (p < 58)
			{
				q = m + 1;
				while (q < 58)
				{
				putchar(n);
				putchar(m);
				putchar(' ');
				putchar(p);
				putchar(q);
				if (n != 57 || m != 56)
				{
				putchar(',');
				putchar(' ');
				}
				q++;
				}
				p++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
