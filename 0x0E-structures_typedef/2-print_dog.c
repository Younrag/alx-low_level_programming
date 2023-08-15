#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->age == NULL || d->owner == NULL)
		printf("(nil)");
	else if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
