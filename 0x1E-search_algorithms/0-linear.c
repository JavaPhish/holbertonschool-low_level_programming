#include "search_algos.h"

/**
 * linear_search - Basic array search algorithm
 * @array: The array
 * @size: THe size of the array
 * @value: THe value to find
 *
 * Return: The placement
 */
int linear_search(int *array, size_t size, int value)
{
	int iter = 0;

	while ((size_t)iter < size)
	{

		printf("Value checked array[%d] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);

		iter++;
	}

	return (-1);
}
