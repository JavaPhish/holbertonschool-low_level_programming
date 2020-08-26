#include "search_algos.h"

/**
 * binary_search - Binary search implementation
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The location
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1, middle, iter;

	/* Im doing this iteratively because recursion is annoying. */
	while (low <= high)
	{
		/* Split the array */
		middle = low + (high - low) / 2;

		/**
		 * This whole for loop is just to print its process.
		 * Its not actually important for the binary search
		 * to work.
		 */
		printf("Searching in array: ");
		for (iter = low; iter <= high; iter++)
			if (iter != high)
				printf("%d, ", array[iter]);
			else
				printf("%d", array[iter]);

		printf("\n");

		/* Divide and find the value */
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}

	/* IF we reached here, no value was found */
	return (-1);
}
