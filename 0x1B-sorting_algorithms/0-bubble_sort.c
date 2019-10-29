#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - Sorts a linked list using bubble sort
 * @array: The list to sort
 * @size: The size of the list
 *
 * Return: The sorted list
 */
void bubble_sort(int *array, size_t size)
{
	int swap, head, tail;

	head = 1;
	tail = 0;

	if (array && size > 1)
	{
		while (is_sorted(array, size) == 0)
		{
			if (array[tail] > array[head])
			{
				swap = array[tail];
				array[tail] = array[head];
				array[head] = swap;

				print_array(array, size);
			}

			if (array[head + 1] != '\0')
			{
				head++;
				tail++;
			}
			else
			{
				head = 1;
				tail = 0;
			}
		}
	}
}

/**
 * is_sorted - Returns if an array is sorted or not
 * @array: The array to check
 * @size: The size of the array
 *
 * Return: 1 if sorted, otherwise 0
 */
int is_sorted(int *array, size_t size)
{
	int loop = 0;

	while (loop != (int)size)
	{
		if (array[loop - 1] > array[loop])
			return (0);

		loop++;
	}

	return (1);
}
