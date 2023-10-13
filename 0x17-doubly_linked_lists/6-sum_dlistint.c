#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlinked
 *
 * @head: head of the list
 * Return: sum of the data, 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
