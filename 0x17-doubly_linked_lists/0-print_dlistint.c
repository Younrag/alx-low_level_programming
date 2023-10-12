#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to dlinked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        dlistint_t *current;
        int count = 0;

        current = h;
        if (current == NULL)
            return (0);
        while (current)
        {
                printf("%d\n", current->n);
                current = current->next;
                count += 1;
        }
        return (count);
}
