#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * array_range - allocates an array of numbers from min to max
 * @min: THe starting number
 * @max: The max number
 *
 * Return: Pointer to the new array;
 */
int *array_range(int min, int max)
{
	int *arr, loop;

	loop = min;
	while (loop <= max)
		loop++;

	arr = malloc(loop * sizeof(int));

	if (!arr || min > max)
		return (NULL);

	for (loop = 0; loop <= max; loop++)
		arr[loop] = loop + min;

	return (arr);

}
