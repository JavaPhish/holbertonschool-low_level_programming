#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

void sort(int *array, int low, int high);
int partition(int *array, int low, int high);
int arr_len(int *array);

/**
 * quick_sort - Sorts an array using the quick sort algorithm
 * @array: The array to sort
 * @size: The size of the array to sory
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, (int)size - 1);
}

void sort(int *array, int low, int high)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high);
		sort(array, low, p - 1);
		sort(array, p + 1, high);
	}
}

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int loop, swap;

	for (loop = low; loop < high; loop++)
	{
		if (array[loop] < pivot)
		{
			swap = array[loop];
			array[loop] = array[i];
			array[i] = swap;
			i += 1;
		}
	}

	swap = array[i];
	array[i] = array[high];
	array[high] = swap;

	print_array(array, arr_len(array));

	return (i);
}

int arr_len(int *array)
{
	int len = 0;

	while (array[len] != '\0')
		len++;

	return (len);
}
