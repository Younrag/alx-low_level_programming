#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, money, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		money = atoi(argv[1]);
		result = 0;
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			if (money >= coins[i])
			{
				result += money / coins[i];
				money = money % coins[i];
				if (money % coins[i] == 0)
					break;
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
