#include <stdio.h>

/**
 * main - Entry point
 * Description: print alpabet in lowercase exept q and e
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
		else
			c++;
	}
	putchar('\n');
	return (0);
}
