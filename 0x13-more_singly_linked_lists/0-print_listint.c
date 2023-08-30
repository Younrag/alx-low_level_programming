#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: points to singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0
	listint_t* temp = h
	
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
