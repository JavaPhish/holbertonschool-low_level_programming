#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

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
	dog_t *ret_temp = malloc(sizeof(dog_t));

	if (!ret_temp)
		return (NULL);

	new_name = _strdup(name);
	new_owner = _strdup(owner);

	ret_temp->name = new_name;
	ret_temp->age = age;
	ret_temp->owner = new_owner;

	return (ret_temp);
}


/**
 * _strdup - Duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: a pointer to the string
 */
char *_strdup(char *str)
{
	int loop, strSize;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}



	strSize = 1;
	for (loop = 0; str[loop] != '\0'; loop++)
	{
		strSize++;
	}

	arr = malloc(strSize * (sizeof(char)));

	if (!arr)
	{
		return (NULL);
	}

	for (loop = 0; loop < strSize; loop++)
	{
		arr[loop] = str[loop];
	}

	return (arr);

}
