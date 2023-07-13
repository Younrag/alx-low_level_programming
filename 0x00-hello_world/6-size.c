#include"stdio.h"
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of an long int: %u byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of an float: %u byte(s)\n", sizeof(float));
	return (0);
}
