#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to dlinked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (!h->prev)
		h = h->prev;
	while (h)
	{
		printf("%lu\n", h->n);
		h = h->next;
		count ++;
	}
	return (count);
}
