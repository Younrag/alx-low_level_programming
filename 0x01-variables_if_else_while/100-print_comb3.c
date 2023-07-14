#include <stdio.h>

/**
 * main - Entry point
 * Description: print combination of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	n = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
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

