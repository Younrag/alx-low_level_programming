#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list.
 *
 * @head: pointer to pointer to head
 * @n: number to add
 * Return: he address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	h = *head;
	if (h)
	{
		while (h->prev)
			h = h->prev;
	}
	new->n = n;
	new->prev = NULL;
	new->next = h;
	if (h)
		h->prev = new;
	*head = new;
	return (new);
}
