#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory and checks it
 * @b: The amount of space to allocate
 *
 * Return: The pointer to the array allocated
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (!alloc)
		exit(98);

	return (alloc);
}
