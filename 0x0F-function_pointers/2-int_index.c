#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - looks through an array for a value
 * @array: THe array to look through
 * @size: the size of the array
 * @cmp:The compare method to use
 *
 * Return: Returns -1 if no value found, or the spot it found it in
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int temp;

	if (size <= 0)
		return (-1);

	for (temp = 0; temp < (int) size; temp++)
	{
		if (cmp(array[temp]) == 1)
			return (temp);
	}

	return (-1);
}
