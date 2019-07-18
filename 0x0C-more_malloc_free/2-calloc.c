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
	int mem = nmemb;
	void *alloc;

	if ((int)nmemb == 0 || (int)size == 0)
		return (NULL);

	alloc = malloc(mem * (int)size);

	if (!alloc)
		return (NULL);


	return (alloc);

}
