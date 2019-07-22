#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intializes the dog struct with the given values
 * @dog: The struct to init
 * @name: the name of the dog
 * @age: The age of the dog
 * @owner: THe name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
