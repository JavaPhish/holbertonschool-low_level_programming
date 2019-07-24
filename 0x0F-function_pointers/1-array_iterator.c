#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Prints an array using the specified print method
 * @array: The array to loop through
 * @size: The size of the array
 * @action: The function to use to print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int temp;

	for (temp = 0; temp < (int)size; temp++)
		action(array[temp]);
}
