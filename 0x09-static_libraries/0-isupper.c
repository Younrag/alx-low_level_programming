#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the caracter to check
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
	else
		return (0);
}
