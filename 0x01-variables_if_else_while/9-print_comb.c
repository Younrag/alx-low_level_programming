#include <stdio.h>

/**
 * main - Entry point
 * Description: decimal digits separed by ',' and space
 * Return: 0
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
			n++;
		}
		else
			n++;
	}
	putchar('\n');
	return (0);
}
