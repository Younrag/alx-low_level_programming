#include <stdio.h>

/**
 * main - Entry point
 * Description: All decimal digits with putchar
 * Return: 0
 */
int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
