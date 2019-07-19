#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Re allocates an already defined pointer
 * @ptr: The original pointer
 * @old_size: The old size
 * @new_size: The updated size
 *
 * Return: The newly allocated pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	int loop;
	char *temp;

	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	temp = malloc(new_size);

	for (loop = 0; loop <= (int)old_size; loop++)
	{
		if (!(new_size < loop))
		temp[loop] = ((char *)ptr)[loop];
	}

	free(ptr);
	return (temp);

}
