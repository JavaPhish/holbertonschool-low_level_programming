#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Returns a new dog
 * @name: The new name;
 * @age: the new age
 * @owner: the owner
 *
 * Return: new dog as a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	int new_age;

	new_name = name;
	new_owner = owner;
	new_age = age;

	dog_t temp = {.name = new_name, .age = new_age, .owner = new_owner};
	dog_t *ret_temp = &temp;

	if (!ret_temp)
		return (NULL);

	return (ret_temp);

}
