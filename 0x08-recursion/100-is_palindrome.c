#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 *
 * Return: 1 if palindrome, 0 if not
*/

int check_palindrome(char *s, int i)
{
	int len = _strlen_recursion(s) - 1;

	if (i > len)
		return (1);
	if (*(s + i) != *(s + len - i))
		return (0);
	return (check_palindrome(s, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0));
}
