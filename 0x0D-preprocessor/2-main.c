#include <stdio.h>

/**
 * main - Entry main
 * Description: prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
