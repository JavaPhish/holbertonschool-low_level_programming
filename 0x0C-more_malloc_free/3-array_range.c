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

	if (min > max)
		return (NULL);

	loop = max - min;

	arr = malloc(loop * sizeof(int));

	if (!arr)
		return (NULL);


	for (loop = 0; loop + min < max; loop++)
	{
		arr[loop] = min + loop;
	}

	return (arr);

}
