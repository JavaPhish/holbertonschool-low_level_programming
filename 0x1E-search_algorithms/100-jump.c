#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search algorithm implementation
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The location
 */
int jump_search(int *array, size_t size, int value)
{
	int gap = sqrt(size), prev = 0;
	int srch;

	if (!array)
		return (-1);

	printf("Value checked array[0] = [0]\n");
	while (array[gap] < value && gap < (int)size)
	{
		prev = gap;
		printf("Value checked array[%d] = [%d]\n", gap, array[gap]);
		gap += sqrt(size);

		if (gap > (int)size - 1)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, gap);
	for (srch = prev; srch <= gap; srch++)
	{
		printf("Value checked array[%d] = [%d]\n", srch, array[srch]);
		if (array[srch] == value)
			return (srch);
	}
	return (-1);
}
