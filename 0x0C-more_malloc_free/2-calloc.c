
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * _calloc - Allocates nmemb bytes of size size
 * @nmemb: Amount of spaces needed
 * @size: The byte size of each space
 *
 * Return: a pointer to newly allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int loop;
	int mem = nmemb;
	char *alloc;


	if ((int)nmemb == 0 || (int)size == 0)
		return (NULL);

	alloc = malloc(mem * (int)size);

	if (!alloc)
		return (NULL);

	for (loop = 0; loop < (int)size * (int)nmemb; loop++)
		alloc[loop] = 0;

	return (alloc);

}
