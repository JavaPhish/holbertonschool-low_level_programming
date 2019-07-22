#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a dog
 * @d: The dog to print
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, (int)d->age, d->owner);
}
