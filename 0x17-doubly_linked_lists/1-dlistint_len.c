#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - number of elements in a linked
 * dlistint_t list.
 *
 * @h: pointer to dlinked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
