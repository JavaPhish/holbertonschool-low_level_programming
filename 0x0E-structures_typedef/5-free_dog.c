#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees a dog_t type in memory
 * @d: The area in mem to free
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
