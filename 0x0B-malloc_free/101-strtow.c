#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
char **strtow(char *str)
{
	char **sec;
	char *words;
	int j, k, n, m, i = 0, count = 0;

	if (str == NULL || str == "")
		return (NULL);
	while (*str == ' ')
		str++;
	while (*str++)
	{
		if(*str == ' ' && *(str + 1) != ' ')
			count++;
	}
	if (*(str - 1) != ' ')
		count++;
	sec = malloc(count * sizeof(char *));
	if (sec == NULL)
		return (NULL);
	while (str[i] == ' ')
		i++;
	for (n = 0; n < count; n++)
	{
		m = 0;
		while (str[i])
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			sec[n] = malloc(j * sizeof(char) + 1);
			if (sec[n] == NULL)
			{
				for (k = 0; k < n; k++)
					free(sec[k]);
				free(sec);
				return (NULL)
			}
			if (str[i] != ' ')
				sec[n][m] = str[i];
			else if (str[i] == ' ' && str[i + 1] != ' ')
				sec[n][m] = '\0';
			i++;
			m++;
		}
	}
	return (sec);
}
